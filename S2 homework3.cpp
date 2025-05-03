#include <stdio.h>
struct Element {
    float value;
    Element* next;
};
void addElement(Element*& head, float val) {
    Element* newElement = new Element;
    newElement->value = val;
    newElement->next = 0;

    if (!head) {
        head = newElement;
        return; }

    Element* curren = head;
    while (curren->next) {
        curren = curren->next; }
    curren->next = newElement;}

void printList(Element* head) {
    Element* curren = head;
    while (curren) {
        printf("%.2f ", curren->value);
        curren = curren->next;
    }
    printf("\n");
}


int BiggestNANRange(Element* head) {
    int Lmax = 0, Clenght = 0;
    Element* curren = head;
    while (curren) {
        if (curren->value == -1000) {
            Clenght++;
            if (Clenght > Lmax)
                Lmax = Clenght;
        } else {
            Clenght = 0;
        }
        curren = curren->next;
    }
    return Lmax;
}


void FillNAN(Element* head, int k) {
    Element* curren = head;
    Element* lastK[100];
    int count = 0;

    while (curren) {
        if (curren->value != -1000) {
            if (count < k)
                lastK[count++] = curren;
            else {
                for (int i = 0; i < k - 1; i++)
                    lastK[i] = lastK[i + 1];
                lastK[k - 1] = curren;
            }
        } else {
            float sum = 0;
            int valid = 0;
            for (int i = 0; i < count; i++) {
                if (lastK[i]->value != -1000) {
                    sum += lastK[i]->value;
                    valid++;
                }
            }
            curren->value = (valid > 0) ? (sum / valid) : 0;
            if (count < k)
                lastK[count++] = curren;
            else {
                for (int i = 0; i < k - 1; i++)
                    lastK[i] = lastK[i + 1];
                lastK[k - 1] = curren;
            }
        }
        curren = curren->next;
    }
}


Element* MaxTemp(Element* head) {
    Element* result = 0;
    Element* curren = head;
    int count = 0;
    float maxVal = -1000;

    while (curren) {
        if (curren->value != -1000 && (count == 0 || curren->value > maxVal)) {
            maxVal = curren->value;
        }
        count++;
        if (count == 24) {
            addElement(result, maxVal);
            count = 0;
            maxVal = -1000;
        }
        curren = curren->next;
    }

    if (count > 0) {
        addElement(result, maxVal);
    }

    return result;
}


void freeList(Element* head) {
    while (head) {
        Element* temp = head;
        head = head->next;
        delete temp;
    }
}


int main() {
    Element* series = 0;

    float values[] = {20.5, 21.0, -1000, -1000, 22.0, 23.5, -1000, 24.0, 25.0};
    int size = sizeof(values) / sizeof(values[0]);

    for (int i = 0; i < size; i++) {
        addElement(series, values[i]);
    }

    printf("Original series:\n");
    printList(series);

    int nanMax = BiggestNANRange(series);
    printf("Biggest NAN range: %d\n", nanMax);

    FillNAN(series, 2);
    printf("After FillNAN:\n");
    printList(series);

    Element* maxTemp = MaxTemp(series); 
    printf("Max Temp series (daily max):\n");
    printList(maxTemp);

    freeList(series);
    freeList(maxTemp);

    return 0;
}

