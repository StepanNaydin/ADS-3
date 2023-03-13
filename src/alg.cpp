// Copyright 2021 NNTU-CS

int cbinsearch(int* arr, int size, int value) {
    int nach = 0;
    int count = 0;
    int sizee = size;
    while (1) {
        if (arr[(size + nach) / 2] > value) {
            size = (size + nach) / 2;
        }
        else if (arr[(size + nach) / 2] < value) 
        {
            nach = (size + nach) / 2;
        }
        else 
        {
            count++;
            for (int q = 1;; ++q) {
                if ((size + nach) / 2 == 0) {
                    break;
                }
                if (arr[(size + nach) / 2 + q] == value) {
                    count++;
                }
                else 
                {
                    break;
                }
            }
            for (int q = -1;; --q) {
                if ((size + nach) / 2 == sizee - 1) {
                    break;
                }
                if (arr[(size + nach) / 2 + q] == value) {
                    count++;
                }
                else 
                {
                    break;
                }
            }
            break;
        }
    }
    return count;
}
