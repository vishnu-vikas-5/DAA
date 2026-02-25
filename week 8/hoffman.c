#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct Node {
    char data;
    int freq;
    struct Node *left, *right;
};

struct Node* createNode(char data, int freq) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->freq = freq;
    newNode->left = newNode->right = NULL;
    return newNode;
}

void swap(struct Node** a, struct Node** b) {
    struct Node* temp = *a;
    *a = *b;
    *b = temp;
}

void sort(struct Node* arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j]->freq > arr[j+1]->freq) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

void printCodes(struct Node* root, int arr[], int top) {
    if (root->left) {
        arr[top] = 0;
        printCodes(root->left, arr, top + 1);
    }

    if (root->right) {
        arr[top] = 1;
        printCodes(root->right, arr, top + 1);
    }

    if (!root->left && !root->right) {
        printf("%c: ", root->data);
        for (int i = 0; i < top; i++)
            printf("%d", arr[i]);
        printf("\n");
    }
}

void huffman(char data[], int freq[], int size) {
    struct Node* nodes[MAX];

    for (int i = 0; i < size; i++)
        nodes[i] = createNode(data[i], freq[i]);

    while (size > 1) {
        sort(nodes, size);

        struct Node* left = nodes[0];
        struct Node* right = nodes[1];

        struct Node* newNode = createNode('$', left->freq + right->freq);
        newNode->left = left;
        newNode->right = right;

        nodes[0] = newNode;
        nodes[1] = nodes[size - 1];
        size--;
    }

    int arr[MAX], top = 0;
    printCodes(nodes[0], arr, top);
}

int main() {
    char data[] = {'a','b','c','d','e','f'};
    int freq[] = {5, 9, 12, 13, 16, 45};
    int size = sizeof(data)/sizeof(data[0]);

    printf("Huffman Codes:\n");
    huffman(data, freq, size);

    return 0;
}
