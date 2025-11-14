#include <stdio.h>
// Function to ask a question
int askQuestion(char question[], char optA[], char optB[], char optC[], char optD[], char correct)
{
    char ans;
    printf("\n%s\n", question);
    printf("A) %s\n", optA);
    printf("B) %s\n", optB);
    printf("C) %s\n", optC);
    printf("D) %s\n", optD);
    printf("Enter your answer (A/B/C/D): ");
    scanf(" %c", &ans);
    // convert to uppercase 
    if (ans >= 'a' && ans <= 'z')
    {
        ans = ans - 32;
    }
    //to check the answer 
     if (ans == correct)
       { 
        return 1;
       }
    else
    {
        return 0;
    }
}

int main()
{
    int score = 0;
    int i;
    int choice;

    // Questions
    char questions[5][200] = 
    {
        "1. Which planet is known as the Red Planet?",
        "2. Who wrote the Indian National Anthem?",
        "3. Which country won the 2018 FIFA World Cup?",
        "4. What is the capital of Japan?",
        "5. How many players play on a basketball court per team?"
    };
    // Options
    char A[5][100] = {"Earth", "Mahatma Gandhi", "Brazil", "Osaka", "4"};
    char B[5][100] = {"Mars", "Rabindranath Tagore", "France", "Tokyo", "5"};
    char C[5][100] = {"Jupiter", "Sardar Patel", "Germany", "Kyoto", "6"};
    char D[5][100] = {"Venus", "Jawaharlal Nehru", "Argentina", "Hiroshima", "7"};

    // Correct answers
    char correct[5] = {'B', 'B', 'B', 'B', 'C'};
    do
    {
        score = 0;
        printf("QUIZ GAME \n");
        printf("1. Start Quiz\n");
        printf("2. Exit\n");
        printf("Enter choice:");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                for (i = 0; i < 5; i++)
                {
                    score += askQuestion(questions[i], A[i], B[i], C[i], D[i], correct[i]);
                }

                printf("RESULT\n");
                printf("Your Score: %d out of 5\n", score);

                if (score == 5)
                    printf("niceeee....\n");
                else if (score >= 3)
                    printf("Good effort.\n");
                else
                    printf("aur mehnat karo...\n");
                break;

            case 2:
                printf("Exiting the quiz.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }

    } 
    while (choice != 2);
    return 0;
}
