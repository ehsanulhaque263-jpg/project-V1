
#include <stdio.h>
#include <math.h>

void log_in(void);
void user_profile(void);
void menu(void);

char y;

int id, pass, n_p, speed, speed_limit, option;

double os_fine = 500;
double h_fine = 300;
double fine, total_fine;

int main(void)
{
    log_in();
    user_profile();
    menu();

    return 0;
}

void log_in(void)
{
    printf("Enter ID: ");
    scanf("%d", &id);

    printf("Enter Password: ");
    scanf("%d", &pass);

    printf("\nLOG IN SUCCESSFULLY!\n");
    printf("WELCOME TO TRAFFICO\n");
    printf("          [Powered By - Codic Crew]\n");
}

void user_profile(void)
{
    printf("\nUSER PROFILE\n");

    printf("Enter Name Plate: ");
    scanf("%d", &n_p);

    printf("Enter Speed: ");
    scanf("%d", &speed);

    printf("Enter Helmet Status (A = Absent, P = Present): ");
    scanf(" %c", &y);

    printf("\nGOOD JOB!!!\n");
    printf("THE MENU\n");
}

void menu(void)
{
    speed_limit = 60;

    do
    {
        printf("\n");
        printf("          ============================================================\n");
        printf("          | [1] VEHICLE STATUS                                       |\n");
        printf("          | [2] VIOLATION TYPE AND FINE                              |\n");
        printf("          | [3] PAYMENT                                              |\n");
        printf("          | [4] DEADLINE                                             |\n");
        printf("          | [5] ALERT CENTER                                         |\n");
        printf("          | [6] HELPLINE                                             |\n");
        printf("          | [7] EXIT                                                 |\n");
        printf("          ============================================================\n");


        printf("Enter the option: ");
        scanf("%d", &option);

        switch (option)
        {
            case 1:
                printf("\nVEHICLE STATUS\n");

                if (speed > speed_limit || y == 'A' || y == 'a')
                {
                    printf("VIOLATES THE RULES OF TRAFFICO\n");
                }
                else
                {
                    printf("NORMAL\n");
                }
                break;

            case 2:
                printf("\nVIOLATION TYPE AND FINE\n");

                if (speed > speed_limit)
                {
                    printf("OVER SPEED!!!\n");
                    printf("FINE = %.2f TK\n", os_fine);
                }
                else
                {
                    printf("NORMAL SPEED\n");
                }

                if (y == 'A' || y == 'a')
                {
                    printf("NO HELMET!!!\n");
                    printf("FINE = %.2f TK\n", h_fine);
                }
                else
                {
                    printf("NORMAL HELMET STATUS\n");
                }
                break;

            case 3:
                printf("\nPAYMENT\n");

                total_fine = 0;

                if (speed > speed_limit)
                {
                    total_fine = total_fine + os_fine;
                }

                if (y == 'A' || y == 'a')
                {
                    total_fine = total_fine + h_fine;
                }

                if (total_fine > 0)
                {
                    printf("TOTAL FINE = %.2f TK\n", total_fine);
                }
                else
                {
                    printf("NO FINE! YOU FOLLOWED ALL RULES.\n");
                }
                break;

            case 4:
                printf("\nDEADLINE\n");

                if (speed > speed_limit || y == 'A' || y == 'a')
                {
                    printf("FROM TODAY TO NEXT 30 DAYS\n");
                }
                else
                {
                    printf("NO PAYMENT DEADLINE.\n");
                }
                break;

            case 5:
                printf("\nALERT CENTER\n");

                if (speed > speed_limit || y == 'A' || y == 'a')
                {
                    printf("YOU ARE VIOLATING OUR SYSTEM RULES.\n");
                    printf("YOU HAVE TO BE MORE CAREFUL ABOUT TRAFFIC RULES.\n");
                }
                else
                {
                    printf("NO ALERT! DRIVE SAFELY.\n");
                }
                break;

            case 6:
                printf("\nHELPLINE\n");
                printf("HOTLINE NUMBER: 0174355334\n");
                printf("OFFICE: BASHUNDHARA R/A\n");
                printf("BLOCK: F, ROAD: 7, HOUSE: 112\n");
                break;

            case 7:
                printf("\nTHANKS FOR YOUR CONCERN!\n");
                printf("THANK YOU FOR USING TRAFFICO.\n");
                break;

            default:
                printf("NO OPTION MATCHED! PLEASE TRY AGAIN.\n");
        }

    } while (option != 7);
}

