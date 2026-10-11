N#include<stdio.h>

int main(void) {
     // 1. Intro Section
     printf("                 ====================================================================================\n");
     printf("                 |                                                                                  |\n");
     printf("                 |                         T R A F F I C   V I O L A T I O N                        |\n");
     printf("                 |                         ---------------------------------                        |\n");
     printf("                 |                                THE DIGITAL REGISTRY                              |\n");
     printf("                 |                                                                                  |\n");
     printf("                 |                                                                                  |\n");
     printf("                 ====================================================================================\n");

     printf("\n");

     // 2. Menu Section (No Change)
     printf("                                                         MENU:\n");
     printf("                 =====================================================================================\n");
     printf("                 | [1] VEHICLE HISTORY                                                               |\n");
     printf("                 | [2] VIOLATION TYPE AND FINE                                                       |\n");
     printf("                 | [3] REPEAT OFFENDERS                                                              |\n");
     printf("                 | [4] UNPAID LIST                                                                   |\n");
     printf("                 | [5] PAYMENT                                                                       |\n");
     printf("                 | [6] DEADLINE                                                                      |\n");
     printf("                 | [7] ALERT CENTER                                                                  |\n");
     printf("                 | [8] HELPLINE                                                                      |\n");
     printf("                 | [9] EXIT                                                                          |\n");
     printf("                 |                                                                                   |\n");
     printf("                 |                                                                                   |\n");
     printf("                 |                                                                                   |\n");
     printf("                 =====================================================================================\n");

     printf("\n");



     int ca_se;
    double F;
    char v_t[20], name_plate[20], date[20];

    printf("Enter case number: \n");
    scanf("%d", &ca_se);
    printf("Enter violation type: \n");
    scanf(" %s", v_t);
    printf("Enter name plate: \n");
    scanf("%s", name_plate);
    printf("Enter fine : \n");
    scanf("%lf", &F);
    printf("Enter date: ");
    scanf("%s", date);
    printf("                               MENU:\n");
    printf("=====================================================================\n");    //this number plate has done same offence for two thats why his fine gets addition of 500 tk
    printf("|   CASE      NAME PLATE      VIOLATION TYPE     FINE     LAST DATE |\n");
    printf("|   %-9d   %-14s  %-15s %-8.2f %-9s  |\n", ca_se, name_plate, v_t, F, date);
    printf("|   %-9d   %-14s  %-15s %-8.2f %-9s  |\n", ca_se + 1, name_plate, v_t, F+500, date);
    printf("=====================================================================\n");

     printf("                                                                                 Powered by codec crew\n");

      return 0;
}


