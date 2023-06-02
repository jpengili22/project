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
    for (i = 1; i <= 3; i++)
    {
        system("cls");
        switch (i)
        {
        case 1:
            printf("\n\n\tThe largest population in the world is iN...?");
            printf("\n\n\tA. India\t\tB. China\n\nC. Russia\t\tD. US");
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
            printf("\n\n\nThe country famous for Samba Dance is...?");
            printf("\n\nA. Brazil\t\tB. India\n\nC. Japan\t\tD. France");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!\n");
                score += 100;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A. Brazil\n");
                break;
            }
        case 3:
            printf("\n\n\nWhich is the largest continent in the world?");
            printf("\n\nA. Africa\t\tB. Asia\n\nC. Europe\t\tD. Australia");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect!!!\n");
                score += 100;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B. Asia\n");
                break;
            }
        case 4:
            printf("\n\n\nWho was awarded the youngest player award in Fifa World Cup 2006?");
            printf("\n\nA.Wayne Rooney\t\tB.Lucas Podolski\n\nC.Lionel Messi\t\tD.Christiano Ronaldo");
            if (toupper(getch())=='B')
            {
                printf("\n\nCorrect!!!");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Lucas Podolski");
                getch();
                break;
            }

        case 5:
            printf("\n\n\nWhat is the group of frogs known as?");
            printf("\n\nA.A traffic\t\tB.A toddler\n\nC.A police\t\tD.An Army");
            if (toupper(getch())=='D' )
            {
                printf("\n\nCorrect!!!");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D.An Army");
                getch();
                break;
            }
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

    for (i = 1; i <= 10; i++)
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
            printf("\n\n\nWhat is the largest planet in our solar system?");
            printf("\n\nA. Mars\t\tB. Saturn\n\nC. Jupiter\t\tD. Earth");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect!!!\n");
                score += 100000;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C. Jupiter\n");
                break;
            }
        case 3:
            printf("\n\n\nWho painted the Mona Lisa?");
            printf("\n\nA. Leonardo da Vinci\t\tB. Pablo Picasso\n\nC. Vincent van Gogh\t\tD. Michelangelo");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!\n");
                score += 100000;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A. Leonardo da Vinci\n");
                break;
            }
        case 4:
            printf("\n\n\nWhich planet is known as the Red Planet?");
            printf("\n\nA. Jupiter\t\tB. Saturn\n\nC. Mars\t\tD. Venus");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect!!!\n");
                score += 100000;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C. Mars\n");
                break;
            }
        case 5:
            printf("\n\n\nWho is the author of the book 'To Kill a Mockingbird'?");
            printf("\n\nA. J.D. Salinger\t\tB. Harper Lee\n\nC. F. Scott Fitzgerald\t\tD. George Orwell");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect!!!\n");
                score += 100000;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B. Harper Lee\n");
                break;
            }
        case 6:
            printf("\n\n\nWhich country won the FIFA World Cup 2018?");
            printf("\n\nA. Germany\t\tB. Brazil\n\nC. France\t\tD. Argentina");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect!!!\n");
                score += 100000;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C. France\n");
                break;
            }
        case 7:
            printf("\n\n\nWhat is the chemical symbol for the element Gold?");
            printf("\n\nA. Go\t\tB. Au\n\nC. Gd\t\tD. Gr");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect!!!\n");
                score += 100000;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B. Au\n");
                break;
            }
        case 8:
            printf("\n\n\nWhich planet is known as the Blue Planet?");
            printf("\n\nA. Jupiter\t\tB. Saturn\n\nC. Earth\t\tD. Uranus");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect!!!\n");
                score += 100000;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C. Earth\n");
                break;
            }
        case 9:
            printf("\n\n\nWho wrote the play 'Romeo and Juliet'?");
            printf("\n\nA. William Shakespeare\t\tB. Mark Twain\n\nC. Charles Dickens\t\tD. Jane Austen");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!\n");
                score += 100000;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A. William Shakespeare\n");
                break;
            }
        case 10:
            printf("\n\n\nWhat is the largest organ in the human body?");
            printf("\n\nA. Heart\t\tB. Brain\n\nC. Liver\t\tD. Skin");
            if (toupper(getch()) == 'D')
            {
                printf("\n\nCorrect!!!\n");
                score += 100000;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D. Skin\n");
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

