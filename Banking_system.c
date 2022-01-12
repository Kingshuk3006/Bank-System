#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char name[3][50] = {"Kingshuk Sarkar", "Ravi Saha", "Riya Roy"};
    char ph[3][11] = {"8777028005", "7278245006", "9836020813"};
    char acno[3][16] = {"123456789456741", "456896789456741", "963256789450527"};
    char user[3][10] = {"#2450A32", "#2450B31", "#2450C30"};
    char inp[10];
    char pin[3][20];
    char Enter_pin[20];
    char name_edit[50], ph_edit[11], id[10];
    char choice;
    int bal[3] = {4545, 5455, 7485};
    int op, edit, i;
    int dep, withdraw, online_pay;
    int count = 0;

    printf("------Welcome to Hindustan Bank-----\n");
    printf("Enter your id:");
    gets(inp);
    printf("--------------------\n");

    //data part

    if (strcmp(inp, user[0]) == 0)
    {
        printf("Name:%s\nAccount number:%s\nPhone no:%s\nBalance amt:%dRs", name[0], acno[0], ph[0], bal[0]);
    }
    else if (strcmp(inp, user[1]) == 0)
    {
        printf("Name:%s\nAccount number:%s\nPhone no:%s\nBalance amt:%dRs", name[1], acno[1], ph[1], bal[1]);
    }
    else if (strcmp(inp, user[2]) == 0)
    {
        printf("Name:%s\nAccount number:%s\nPhone no:%s\nBalance amt:%dRs", name[2], acno[2], ph[2], bal[2]);
    }
    else
    {
        printf("Invalid Id\n");
        _Exit(0);
    }

    //Banking operations

    //taking pin
    printf("\nCreate your pin\n");
    if (strcmp(inp, user[0]) == 0)
        scanf("%s", pin[0]);
    else if (strcmp(inp, user[1]) == 0)
        scanf("%s", pin[1]);
    else if (strcmp(inp, user[2]) == 0)
        scanf("%s", pin[2]);
    else
        printf("User not found!!!\n");

    //do whle part
    do
    {
        printf("\nEnter your choice:\n");
        printf("1.Money deposit\t2.Money withdraw\t3.edit personal\t4.online banking\n");
        printf("Your choice is :");
        scanf("%d", &op);
        switch (op)
        {

            //money deposit

        case 1:
            printf("Enter the amount of deposit:");
            scanf("%d", &dep);
            if (strcmp(inp, user[0]) == 0)
            {
                for (i = 1; i < 4; i++)
                {

                    printf("Enter your pin\n");
                    scanf("%s", &Enter_pin);
                    if (strcmp(pin[0], Enter_pin) == 0)
                    {
                        bal[0] += dep;
                        printf("Available amount : %d Rs\n", bal[0]);
                        break;
                    }
                    else
                    {
                        printf("Wrong pin!\n%d attempts remaining\n", 3 - i);
                        count++;
                    }
                }
                if (count == 3)
                {
                    _Exit(0);
                }
                count = 0;
            }

            else if (strcmp(inp, user[1]) == 0)
            {

                for (i = 1; i < 4; i++)
                {

                    printf("Enter your pin\n");
                    scanf("%s", &Enter_pin);
                    if (strcmp(pin[1], Enter_pin) == 0)
                    {
                        bal[1] += dep;
                        printf("Available amount : %d Rs\n", bal[1]);
                        break;
                    }
                    else
                    {
                        printf("Wrong pin!\n%d attempts remaining\n", 3 - i);
                        count++;
                    }
                }
                if (count == 3)
                {
                    _Exit(0);
                }
                count = 0;
            }
            else
            {

                for (i = 1; i < 4; i++)
                {

                    printf("Enter your pin\n");
                    scanf("%s", &Enter_pin);
                    if (strcmp(pin[2], Enter_pin) == 0)
                    {
                        bal[2] += dep;
                        printf("Available amount : %d Rs\n", bal[2]);
                        break;
                    }
                    else
                    {
                        printf("Wrong pin!\n%d attempts remaining\n", 3 - i);
                        count++;
                    }
                }
                if (count == 3)
                {
                    _Exit(0);
                }
                count = 0;
            }
            break;

            //money withdraw

        case 2:
            printf("Enter the amount of withdraw:");
            scanf("%d", &withdraw);
            if (strcmp(inp, user[0]) == 0)
            {

                if (withdraw >= bal[0])
                    printf("\nInsufficient balance!!!\n");
                else
                {
                    for (i = 1; i < 4; i++)
                    {

                        printf("Enter your pin\n");
                        scanf("%s", &Enter_pin);
                        if (strcmp(pin[0], Enter_pin) == 0)
                        {
                            bal[0] -= withdraw;
                            printf("Available amount : %d Rs\n", bal[0]);
                            break;
                        }
                        else
                        {
                            printf("Wrong pin!\n%d attempts remaining\n", 3 - i);
                            count++;
                        }
                    }
                    if (count == 3)
                    {
                        _Exit(0);
                    }
                    count = 0;
                }
            }
            else if (strcmp(inp, user[1]) == 0)
            {
                if (withdraw >= bal[1])
                    printf("\nInsufficient balance!!!\n");
                else
                {
                    for (i = 1; i < 4; i++)
                    {

                        printf("Enter your pin\n");
                        scanf("%s", &Enter_pin);
                        if (strcmp(pin[1], Enter_pin) == 0)
                        {
                            bal[1] -= withdraw;
                            printf("Available amount : %d Rs\n", bal[1]);
                            break;
                        }
                        else
                        {
                            printf("Wrong pin!\n%d attempts remaining\n", 3 - i);
                            count++;
                        }
                    }
                    if (count == 3)
                    {
                        _Exit(0);
                    }
                    count = 0;
                }
            }
            else
            {
                if (withdraw >= bal[2])
                    printf("\nInsufficient balance!!!\n");
                else
                {
                    for (i = 1; i < 4; i++)
                    {

                        printf("Enter your pin\n");
                        scanf("%s", &Enter_pin);
                        if (strcmp(pin[2], Enter_pin) == 0)
                        {
                            bal[2] -= withdraw;
                            printf("Available amount : %d Rs\n", bal[2]);
                            break;
                        }
                        else
                        {
                            printf("Wrong pin!\n%d attempts remaining\n", 3 - i);
                            count++;
                        }
                    }
                    if (count == 3)
                    {
                        _Exit(0);
                    }
                    count = 0;
                }
            }
            break;

            //edit personal

        case 3:

            printf("Enter the item you want to edit:\n");
            printf("1.Name\t2.Phone Number\n");
            printf("Your choice is :");
            scanf("%d", &edit);
            switch (edit)
            {
            case 1:
                //name edit

                printf("Enter the New Name--\n");
                fflush(stdin);
                gets(name_edit);
                count = 0;
                if (strcmp(inp, user[0]) == 0)
                {
                    for (i = 1; i < 4; i++)
                    {
                        printf("Enter your pin\n");
                        scanf("%s", Enter_pin);
                        if (strcmp(pin[0], Enter_pin) == 0)
                        {
                            strcpy(name[0], name_edit);
                            printf("Your Account details have been editted successfully!!!\n");
                            printf("-----------------\n");
                            printf("Name:%s\nAccount number:%s\nPhone no:%s\nBalance amt:%dRs", name[0], acno[0], ph[0], bal[0]);
                            break;
                        }
                        else
                        {
                            printf("Wrong Pin!!!\n");
                            printf("%d attempts remaining !!!\n", 3 - i);
                            count++;
                        }
                    }
                    if (count == 3)
                    {
                        _Exit(0);
                    }
                }
                else if (strcmp(inp, user[1]) == 0)
                {
                    for (i = 1; i < 4; i++)
                    {
                        printf("Enter your pin\n");
                        scanf("%s", Enter_pin);
                        if (strcmp(pin[1], Enter_pin) == 0)
                        {
                            strcpy(name[1], name_edit);
                            printf("Your Account details have been editted successfully!!!\n");
                            printf("-----------------\n");
                            printf("Name:%s\nAccount number:%s\nPhone no:%s\nBalance amt:%dRs", name[1], acno[1], ph[1], bal[1]);
                            break;
                        }
                        else
                        {
                            printf("Wrong Pin!!!\n");
                            printf("%d attempts remaining !!!\n", 3 - i);
                            count++;
                        }
                    }
                    if (count == 3)
                    {
                        _Exit(0);
                    }
                }
                else
                {
                    for (i = 1; i < 4; i++)
                    {
                        printf("Enter your pin\n");
                        scanf("%s", Enter_pin);
                        if (strcmp(pin[2], Enter_pin) == 0)
                        {
                            strcpy(name[2], name_edit);
                            printf("Your Account details have been editted successfully!!!\n");
                            printf("-----------------\n");
                            printf("Name:%s\nAccount number:%s\nPhone no:%s\nBalance amt:%dRs", name[2], acno[2], ph[2], bal[2]);
                            break;
                        }
                        else
                        {
                            printf("Wrong Pin!!!\n");
                            printf("%d attempts remaining !!!\n", 3 - i);
                            count++;
                        }
                    }
                    if (count == 3)
                    {
                        _Exit(0);
                    }
                }
                break;
            case 2:

                //ph edit

                printf("Enter the New Phone no--\n");
                fflush(stdin);
                gets(ph_edit);
                count = 0;
                if (strlen(ph_edit) != 10)
                    printf("Invalid Phone Number!!\n");
                else
                {
                    if (strcmp(inp, user[0]) == 0)
                    {
                        for (i = 1; i < 4; i++)
                        {
                            printf("Enter your pin\n");
                            scanf("%s", Enter_pin);
                            if (strcmp(pin[0], Enter_pin) == 0)
                            {
                                strcpy(ph[0], ph_edit);
                                printf("Your Account details have been editted successfully!!!\n");
                                printf("-----------------\n");
                                printf("Name:%s\nAccount number:%s\nPhone no:%s\nBalance amt:%dRs", name[0], acno[0], ph[0], bal[0]);
                            }
                            else
                            {
                                printf("Wrong Pin!!\n%d attempts remaining!!", 3 - i);
                                count++;
                            }
                        }
                        if (count == 3)
                        {
                            _Exit(0);
                        }
                        count = 0;
                    }
                    else if (strcmp(inp, user[1]) == 0)
                    {
                        for (i = 1; i < 4; i++)
                        {
                            printf("Enter your pin\n");
                            scanf("%s", Enter_pin);
                            if (strcmp(pin[1], Enter_pin) == 0)
                            {
                                strcpy(ph[0], ph_edit);
                                printf("Your Account details have been editted successfully!!!\n");
                                printf("-----------------\n");
                                printf("Name:%s\nAccount number:%s\nPhone no:%s\nBalance amt:%dRs", name[1], acno[1], ph[1], bal[1]);
                            }
                            else
                            {
                                printf("Wrong Pin!!\n%d attempts remaining!!", 3 - i);
                                count++;
                            }
                        }
                        if (count == 3)
                        {
                            _Exit(0);
                        }
                        count = 0;
                    }
                    else
                    {
                        for (i = 1; i < 4; i++)
                        {
                            printf("Enter your pin\n");
                            scanf("%s", Enter_pin);
                            if (strcmp(pin[2], Enter_pin) == 0)
                            {
                                strcpy(ph[0], ph_edit);
                                printf("Your Account details have been editted successfully!!!\n");
                                printf("-----------------\n");
                                printf("Name:%s\nAccount number:%s\nPhone no:%s\nBalance amt:%dRs", name[2], acno[2], ph[2], bal[2]);
                            }
                            else
                            {
                                printf("Wrong Pin!!\n%d attempts remaining!!", 3 - i);
                                count++;
                            }
                        }
                        if (count == 3)
                        {
                            _Exit(0);
                        }
                        count = 0;
                    }
                    break;
                }

            }
            break;
        case 4:

            //Online Bank part

            printf("-----Welcome to Online Pay------\n");
            printf("Enter the id of the person whom you want to pay\n");
            fflush(stdin);
            scanf("%s", id);
            printf("Enter the amount ou want to pay:");
            scanf("%d", &online_pay);

            if (strcmp(inp, user[0]) == 0)
            {
                for (i = 1; i < 4; i++)
                {
                    printf("\nEnter your pin\n");
                    scanf("%s", Enter_pin);
                    if (strcmp(pin[0], Enter_pin) == 0)
                    {
                        if (online_pay > bal[0])
                        {
                            printf("Insufficient balance!!!!");
                            break;
                        }
                        else
                        {

                            if (strcmp(id, user[0]) == 0)
                            {
                                printf("Access Denied!!!");
                                break;
                            }
                            else if (strcmp(id, user[1]) == 0 || strcmp(id, user[2]) == 0)
                            {
                                bal[0] -= online_pay;
                                printf("available balance : %d", bal[0]);
                                break;
                            }
                        }
                    }
                    else
                    {
                        printf("\nWrong pin!!\n");
                        printf("%d attempts remaining!\n", 3 - i);
                        count++;
                    }
                }
                if (count == 3)
                {
                    _Exit(0);
                }
                count = 0;
            }
            else if (strcmp(inp, user[1]) == 0)
            {
                for (i = 1; i < 4; i++)
                {
                    printf("\nEnter your pin\n");
                    scanf("%s", Enter_pin);
                    if (strcmp(pin[1], Enter_pin) == 0)
                    {
                        if (online_pay > bal[1])
                        {
                            printf("Insufficient balance!!!!");
                            break;
                        }
                        else
                        {

                            if (strcmp(id, user[1]) == 0)
                            {
                                printf("Access Denied!!!");
                                break;
                            }
                            else if (strcmp(id, user[0]) == 0 || strcmp(id, user[2]) == 0)
                            {
                                bal[1] -= online_pay;
                                printf("available balance : %d", bal[1]);
                                break;
                            }
                        }
                    }
                    else
                    {
                        printf("\nWrong pin!!\n");
                        printf("%d attempts remaining!\n", 3 - i);
                        count++;
                    }
                }
                if (count == 3)
                {
                    _Exit(0);
                }
                count = 0;
            }
            else
            {
                for (i = 1; i < 4; i++)
                {
                    printf("\nEnter your pin\n");
                    scanf("%s", Enter_pin);
                    if (strcmp(pin[2], Enter_pin) == 0)
                    {
                        if (online_pay > bal[2])
                        {
                            printf("Insufficient balance!!!!");
                            break;
                        }
                        else
                        {

                            if (strcmp(id, user[2]) == 0)
                            {
                                printf("Access Denied!!!");
                                break;
                            }
                            else if (strcmp(id, user[0]) == 0 || strcmp(id, user[1]) == 0)
                            {
                                bal[2] -= online_pay;
                                printf("available balance : %d", bal[2]);
                                break;
                            }
                        }
                    }
                    else
                    {
                        printf("\nWrong pin!!\n");
                        printf("%d attempts remaining!\n", 3 - i);
                        count++;
                    }
                }
                if (count == 3)
                {
                    _Exit(0);
                }
                count = 0;
            }
            break;
        default:
            printf("Invalid Input!!!!");
            break;
        }

        //continue part

        printf("\nDo you want to continue??\ny/n\n");
        fflush(stdin);
        scanf("%c", &choice);
    } while (choice == 'y' || choice == 'Y');

    return 0;
}