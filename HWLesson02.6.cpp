#include <stdio.h>

int main()
{
    int d, m, y;
    printf("Enter your date of birth \n");
    printf("Day of birth: ");
    scanf_s("%i",&d);
    printf("Month of birth: ");
    scanf_s("%i", &m);
    printf("Year of birth: ");
    scanf_s("%i", &y);
    if ((d <= 0) || (d>31) || (m <= 0) || (m > 12) || (y < 0)) {
        printf("Wrong date");
    }
    else {
        printf("Your date of birth: %i.%i.%i \n", d, m, y);
        int y1 = y % 4;
        if (y1 == 0) {
            printf("You were born on a leap year \n");
        }
        else {
            printf("You were born on a non-leap year \n");
        }
        int y2 = y % 12;
        printf("According to the Cinese horoscope, you were born on the year of ");
        switch (y2) {
        case 0: {
            printf("Monkey \n");
        }
              break;
        case 1: {
            printf("Rooster \n");
        }
              break;
        case 2: {
            printf("Dog \n");
        }
              break;
        case 3: {
            printf("Pig \n");
        }
              break;
        case 4: {
            printf("Rat \n");
        }
              break;
        case 5: {
            printf("Bull \n");
        }
              break;
        case 6: {
            printf("Tiger \n");
        }
              break;
        case 7: {
            printf("Rabbit \n");
        }
              break;
        case 8: {
            printf("Dragon \n");
        }
              break;
        case 9: {
            printf("Snake \n");
        }
              break;
        case 10: {
            printf("Horse \n");
        }
               break;
        case 11: {
            printf("Sheep \n");
        }
               break;
        default: {
            printf("Error");
            break;
        }
        }
        printf("You were born under a zodiac sign ");
        if (((d >= 22) && (m == 12)) || ((d <= 20) && (m == 1))) {
            printf("The Sea-Goat \n");
        }
        else { 
            if (((d >= 21) && (m == 1)) || ((d <= 19) && (m == 2))) {
                printf("The Water-Bearer \n");
            }
            else {
                if (((d >= 20) && (m == 2)) || ((d <= 20) && (m == 3))) {
                    printf("The Fishes \n");
                }
                else {
                    if (((d >= 21) && (m == 3)) || ((d <= 20) && (m == 4))) {
                        printf("The Ram \n");
                    }
                    else {
                        if (((d >= 21) && (m == 4)) || ((d <= 21) && (m == 5))) {
                            printf("The Bull \n");
                        }
                        else {
                            if (((d >= 22) && (m == 5)) || ((d <= 21) && (m == 6))) {
                                printf("The Twins \n");
                            }
                            else {
                                if (((d >= 22) && (m == 6)) || ((d <= 22) && (m == 7))) {
                                    printf("The Crab \n");
                                }
                                else {
                                    if (((d >= 23) && (m == 7)) || ((d <= 21) && (m == 8))) {
                                        printf("The Lion \n");
                                    }
                                    else {
                                        if (((d >= 22) && (m == 8)) || ((d <= 23) && (m == 9))) {
                                            printf("The Maiden \n");
                                        }
                                        else {
                                            if (((d >= 24) && (m == 9)) || ((d <= 23) && (m == 10))) {
                                                printf("The Scales \n");
                                            }
                                            else {
                                                if (((d >= 24) && (m == 10)) || ((d <= 22) && (m == 11))) {
                                                    printf("The Scorpion \n");
                                                }
                                                else {
                                                    if (((d >= 23) && (m == 11)) || ((d <= 22) && (m == 12))) {
                                                        printf("The Archer \n");
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}