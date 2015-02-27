//
//  main.c
//  FuzzBizzNezz
//
//  Created by Samia Al Rahmani on 2/26/15.
//  Copyright (c) 2015 Samia Al Rahmani. All rights reserved.
//

#include <stdio.h>


void showFuzzBizzNezz() {
    int fuzz, bizz, nezz;
    
    printf("Set the 'Fuzz' value: ");
    scanf("%d", &fuzz);
    
    printf("Set set the 'Bizz' value: ");
    scanf("%d", &bizz);
    
    printf("Set the 'Nezz' value: ");
    scanf("%d", &nezz);
    
    for (int num = 1; num <= nezz; num++) {
        if (num % fuzz == 0 && num % bizz == 0) {
            printf("FuzzBizz\n");
        } else if (num % fuzz == 0) {
            printf("Fuzz\n");
        } else if (num % bizz == 0) {
            printf("Bizz\n");
        } else {
            printf("%d\n", num);
        }
    }
}

void home() {
    int option;
    
    printf("Let's Play FizzBizzNezz!\n\n");
    printf("[1] Play\n\n");
    printf("[0] No Thanks\n\n");
    
    scanf("%d", &option);
    
    switch (option) {
        case 1:
            showFuzzBizzNezz();
            home();
            break;
        case 0:
            return;
            break;
        default:
            printf("Only two options to choose from!\n\n");
            home();
            break;
    }
}

int main(int argc, const char * argv[]) {
    home();
    
    return 0;
}