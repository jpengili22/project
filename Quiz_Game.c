#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

void showRecord();
void resetScore();
void displayHelp();
void updateScore(float, char[]);

int main()
{
    int count, round, roundNum, i, numQuestions;
    float score;
    char choice;
    char playerName[20];

mainHome:
    system("cls");
    printf("\n\t\t\t     QUIZ GAME\n");
    printf("\t\t_____________________________________");

    printf("\n\t\t\t      Welcome ");
    printf("\n\t\t\t         to ");
    printf("\n\t\t\t     The Game!");
    printf("\n\t\t_____________________________________");
    printf("\n\t\t_____________________________________");
    printf("\n\t\t > Press S to start the game");
    printf("\n\t\t > Press V to view the highest score  ");
    printf("\n\t\t > Press R to reset score");
    printf("\n\t\t > press H for help            ");
    printf("\n\t\t > press Q to quit             ");
    printf("\n\t\t_____________________________________\n\n");
    choice = toupper(getch());
    if (choice == 'V')
    {
        showRecord();
        goto mainHome;
    }
    else if (choice == 'H')
    {
        displayHelp();
        getch();
        goto mainHome;
    }
    else if (choice == 'R')
    {
        resetScore();
        getch();
        goto mainHome;
    }
    else if (choice == 'Q')
        exit(1);
    else if (choice == 'S')
    {
        system("cls");

        printf("\n\n\n\n\n\n\n\n\n\n\t\t\tEnter your name:");
        gets(playerName);

        system("cls");
        printf("\n ------------------  Welcome %s to the Quiz Game ------------------------", playerName);
        printf("\n\n Here are some tips you might wanna know before playing:");
        printf("\n -------------------------------------------------------------------------");
        printf("\n >> There are 2 rounds in this Quiz Game, Warmup round & Challenge Round");
        printf("\n >> In the warmup round, you will be asked a total of 5 questions to test your");
        printf("\n    general knowledge. You are eligible to play the game if you give at least 3");
        printf("\n    correct answers; otherwise, you can't proceed further to the Challenge Round.");
        printf("\n >> Your game starts with the Challenge Round. In this round, you will be asked");
        printf("\n    a total of 15 questions. Each right answer will be awarded $100,000!");
        printf("\n    By this way, you can win up to ONE MILLION cash prize!");
        printf("\n >> You will be given 4 options, and you have to press A, B, C, or D for the");
        printf("\n    right option.");
        printf("\n >> You will be asked questions continuously until you give the right answers.");
        printf("\n >> There is no negative marking for wrong answers!");
        printf("\n\n\t           GOOD LUCK<3            ");
        printf("\n\n\n Press Y to start the game!\n");
        printf("\n Press any other key to return to the main menu!");
        if (toupper(getch()) == 'Y')
        {
            goto home;
        }
        else
        {
            goto mainHome;
        }
    }

home:
    system("cls");
    round = 0;
    score = 0;
    roundNum = 0;
    numQuestions = 0;

    // Warm-up Round
    round++;
    roundNum++;
    for (i = 1; i <= 5; i++)
    {
        system("cls");
        switch (i)
        {
        case 1:
            printf("\n\nThe largest population in the world is in...?");
            printf("\n\nA. India\t\tB. China\n\nC. Russia\t\tD. US");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect!!!\n");
                score += 100;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B. China\n");
                break;
            }
        case 2:
            printf("\n\n\nWhich is the biggest planet in the solar system?");
            printf("\n\nA. Saturn\t\tB. Jupiter\n\nC. Mercury\t\tD. Venus");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect!!!\n");
                score += 100;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B. Jupiter\n");
                break;
            }
        case 3:
            printf("\n\n\nWho won the world cup in 2010?");
            printf("\n\nA. Argentina\t\tB. Brazil\n\nC. Spain\t\tD. Germany");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect!!!\n");
                score += 100;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C. Spain\n");
                break;
            }
        case 4:
            printf("\n\n\nHow many bones does the human body have?");
            printf("\n\nA. 206\t\tB. 113\n\nC. 74\t\tD. 117");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!\n");
                score += 100;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A. 206\n");
                break;
            }
        case 5:
            printf("\n\n\nWho is the fastest animal in the world? ");
            printf("\n\nA. Leopard\t\tB. Black panther\n\nC. Tiger\t\tD. Peregrine falcon");
            if (toupper(getch()) == 'D')
            {
                printf("\n\nCorrect!!!\n");
                score += 100;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D. Peregrine falcon\n");
                break;
            }
        }
        numQuestions++;
        getch();
    }

    if (score >= 200)
    {
        system("cls");
        printf("\n\n\t*** Congratulations %s !!! You are eligible for the Challenge Round ***", playerName);
        printf("\n\n\n Press any key to start the Challenge Round!\n");
        getch();
        goto challenge;
    }
    else
    {
        system("cls");
        printf("\n\n\t*** Sorry %s, You are not eligible to play the Challenge Round. Better luck next time! ***", playerName);
        printf("\n\n\t\t Your total score: $%.2f\n", score);
        printf("\n\n\n Press any key to go to the main menu!\n");
        getch();
        goto mainHome;
    }

challenge:
    // Challenge Round
    round++;
    roundNum = 1;
    numQuestions = 0;

    for (i = 1; i <= 15; i++)
    {
        system("cls");
        switch (i)
        {
        case 1:
            printf("\n\nWhat is the capital of Australia?");
            printf("\n\nA. Sydney\t\tB. Canberra\n\nC. Melbourne\t\tD. Perth");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect!!!\n");
                score += 100000;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B. Canberra\n");
                break;
            }
        case 2:
            printf("\n\n\nWhat country drinks the most coffee per capita?");
            printf("\n\nA. Albania\t\tB. Finland\n\nC. Canada\t\tD. Italy");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect!!!\n");
                score += 100000;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B. Finland\n");
                break;
            }
        case 3:
            printf("\n\n\nWho is the longest river in the world? ");
            printf("\n\nA. Lana \t\tB. The Nile\n\nC. Drini i Zi\t\tD. Amazon");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect!!!\n");
                score += 100000;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B. The Nile\n");
                break;
            }
        case 4:
            printf("\n\n\nWho is credited with discovering gravity?");
            printf("\n\nA. Isaac Newton\t\tB. Albert Einstein\n\nC. Marie Curie\t\tD. A falling apple named Fred");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!\n");
                score += 100000;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A. Isaac Newton\n");
                break;
            }
        case 5:
            printf("\n\n\nHow do you say no in Albanian?");
            printf("\n\nA. Po\t\tB. Jo\n\nC. Posi\t\tD. Po jo moj shpirt, po jo moj zemra ime");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect!!!\n");
                score += 100000;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B. Jo\n");
                break;
            }
        case 6:
            printf("\n\n\nWhich is the biggest animal in the world?");
            printf("\n\nA. Blue whale\t\tB. Elephant\n\nC. Lizard\t\tD. Hippopotamus");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!\n");
                score += 100000;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A. Blue whale\n");
                break;
            }
        case 7:
            printf("\n\n\nWhat is the name of the biggest company in South Korea?");
            printf("\n\nA. Toyota\t\tB. Nokia\n\nC. Samsung\t\tD. Tik tok");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect!!!\n");
                score += 100000;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C. Samsung\n");
                break;
            }
        case 8:
            printf("\n\n\nWhat is the capital of Portugal?");
            printf("\n\nA. Porto\t\tB. Lisbon\n\nC. Skrapar\t\tD. Faro");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect!!!\n");
                score += 100000;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B. Lisbon\n");
                break;
            }
        case 9:
            printf("\n\n\nWhich one is Barbie’s full name?");
            printf("\n\nA. Barbie Hoxha\t\tB. Barbara Colombie\n\nC. Barbara Millicent Rogers\t\tD. Barbie Girl");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect!!!\n");
                score += 100000;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C. Barbara Millicent Rogers\n");
                break;
            }
        case 10:
            printf("\n\n\nWhat is the chemical symbol for silver?");
            printf("\n\nA. Ag\t\tB. K\n\nC. Ca\t\tD. He");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!\n");
                score += 100000;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A. Ag\n");
                break;
            }
        case 11:
            printf("\n\n\nWhat is the biggest molecule in the human body?");
            printf("\n\nA. Ribosome\t\tB. Chromosome 1\n\nC. Water molecule\t\tD. Human body doesnt have molecules");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect!!!\n");
                score += 100000;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B. Chromosome 1\n");
                break;
            }
        case 12:
            printf("\n\n\nHow many hearts does an octopus have?");
            printf("\n\nA. Nje zemer kam nuk kam dy\t\tB. Three\n\nC. Infinite\t\tD. Eight");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect!!!\n");
                score += 100000;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Three\n");
                break;
            }
        case 13:
            printf("\n\n\nHow far can the human eye see?");
            printf("\n\nA. 2.5 million light years\t\tB. Until they see someone they don't like.\n\nC. 200 km\t\tD. 2000 m");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!\n");
                score += 100000;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A. 2.5 million light years\n");
                break;
            }
        case 14:
            printf("\n\n\nWho wrote Pride and Prejudice?");
            printf("\n\nA. William Shakespeare\t\tB. Ernest Hemingway \n\nC. Jane Austen\t\tD. J.K. Rowling");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect!!!\n");
                score += 100000;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C. Jane Austen\n");
                break;
            }
        case 15:
            printf("\n\n\nWhat country has the most islands?");
            printf("\n\nA. Kosova\t\tB. Sweden\n\nC. Australia\t\tD. Croatia");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect!!!\n");
                score += 100000;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B. Sweden\n");
                break;
            }
        }
        numQuestions++;
        getch();
    }

    system("cls");
    printf("\n\n\t*** Congratulations %s !!! You have completed the Challenge Round ***", playerName);
    printf("\n\n\t\t Your total score: $%.2f\n", score);
    printf("\n\n\n Press any key to view the highest scores!\n");
    getch();
    updateScore(score, playerName);
    showRecord();
    getch();
    goto mainHome;
}

void showRecord()
{
    system("cls");
    char playerName[20];
    float score;
    FILE* fp;
    fp = fopen("score.txt", "r");
    printf("\n\n\t*********************** HIGH SCORES *************************\n\n");
    printf("   Player Name\t\t\tScore\n\n");
    while (fscanf(fp, "%s%f", playerName, &score) != EOF)
    {
        printf("   %-20s\t\t%.2f\n", playerName, score);
    }
    fclose(fp);
}

void resetScore()
{
    system("cls");
    FILE* fp;
    fp = fopen("score.txt", "w");
    fclose(fp);
    printf("\n\n\t************** Score reset successfully *****************\n");
}

void displayHelp()
{
    system("cls");
    printf("\n\n\n\t\t\t HELP");
    printf("\n\n -------------------------------------------------------------------------");
    printf("\n ......................... C Program Quiz Game ...........................");
    printf("\n >> There are two rounds in the game, Warm-up Round and Challenge Round");
    printf("\n >> In the Warm-up Round, you will be asked a total of 3 questions to test your general knowledge");
    printf("\n >> You need to give at least 2 right answers in the Warm-up Round to qualify for the Challenge Round");
    printf("\n >> You will be awarded $100,000 for each right answer in the Challenge Round");
    printf("\n >> There is no negative marking for wrong answers");
    printf("\n >> You can quit the game at any time by pressing the 'Q' key");
    printf("\n\n\t\t\t\t All the Best!!");
    printf("\n -------------------------------------------------------------------------");
}
void updateScore(float score, char playerName[])
{
    FILE *fp;
    fp = fopen("score.txt", "a");

    if (fp == NULL)
    {
        printf("Error opening file!");
        return;
    }

    fprintf(fp, "%s %.2f\n", playerName, score);
    fclose(fp);
}

