#include <stdio.h>

//Functions:

//Numeric Functions:

//Calculator Function:
int numericInputs(int num1, char operator, int num2)
{
    int sum = 0;
    if (operator == '+')
    {
        sum = num1 + num2;
    }

    else if (operator == '-')
    {
        sum = num1 - num2;
    }

    else if (operator == '*')
    {
        sum = num1 * num2;
    }

    else if (operator == '/')
    {
        if (num2 == 0)
        {
        printf("Undefined\n");
        return 0;
        }

        sum = num1 / num2;
    }

    else {
        printf("Invalid numbers or operator\n");
    } 

printf("%d %c %d = %d\n", num1, operator, num2, sum);
return sum;
}

//Productivity Classification
int pC1(int eLevel)
{
    if (eLevel < 0 || eLevel > 10)
    {
        printf("Error, Invalid number\n");
        return 0;
    }
    if (eLevel < 6)
    {
        printf("Consider resting a bit, you lack energy\n");
    }
    else 
    {
        printf("This is great, you are ready to go, ready up and start working\n");
    }
    return 0;
}

int pC2(int pTime)
{
    if (pTime >=10)
    {
        printf("You are working too much hours, you should try to decrease your workload, working to much can backfire leading to different sicknesses\n");
    }
    else if (pTime >=6)
    {
        printf("Please consider decreasing you work load accordingly, you are productive, but working too much can backfire\n");
    }
    else if (pTime >=3)
    {
        printf("This is the perfect amount of work, stay consistent and you might become the new David Goggins\n");
    }
    else
    {
        printf("Increase your workload accordingly\n");
    }
    return 0;
}

//Character Functions:

//String Functions:

int main()
{
    //Welcome the user into the program -Introduce the model
    printf("\nWelcome to Kiyo.Ai\n");
    printf("<<A Rule Based Ai Model>>\n\n");

    //Start of listing some of the first few variables like the inputs variable
    char input = '\0';
    char mathInputs = '\0';
    
    //Ask User for inputs
    printf("Hello, I am Kiyo, your personal rule based Ai assistant\n");
    printf("What would you like me to do?: \n\n");

    //Include Numeric Inputs, Character Inputs and String Inputs
    printf("N - Answer with numbers (ratings, hours, levels)\n");
    printf("C - Answer by choosing a single letter (Y/N, A/B/C)\n");
    printf("S - Answer with text (name or short description)\n");
    scanf(" %c", &input);

    //Displays what happens when a user picks one of the given inputs


    if (input == 'N' || input =='n')
    {
        printf("\nNumeric Inputs: \n\n");
        printf("Which Numeric Kiyo Function would you want to use?: \nCalculator(C)\nNumberic Pattern Analyzer(V)\nClassifying Result Generator(R)\nDetector of Value Limits(D)\nNumeric Based Decision Maker(B)\n");
        scanf(" %c", &mathInputs);

        //Math Variables

        char operator = '\0';
        int num1;
        int num2;

        int n;
        int numbers[100];
        int positives = 0;
        int negatives = 0;
        int zeros = 0;
        int min, max;

        char classification = '\0';
        int pTime = 0;
        int eLevel = 0;

        int stress = 0;
        int totalRisk = 0;
        int physical = 0;
        int burnOut = 0;
        int pain = 0;
        char q2 = '\0';

    switch(mathInputs)
    {

    // Calculate a score from multiple numbers
    case 'C':
    case 'c':
    printf("\nWelcome to Kiyo.Ai's Calculator function\n");
    printf("Enter your first number: \n");

    if (scanf("%d", &num1) != 1)
    {
        printf("Invalid Character\n");
        while(getchar() != '\n');
        break;
    }

    printf("Enter your operator(+, -, *, /): \n");
    scanf(" %c", &operator);

    printf("Enter your second number: \n");

    if (scanf("%d", &num2) != 1)
    {
        printf("Invalid Character\n");
        while(getchar() != '\n');
        break;
    }

    printf("Here is your answer: \n");
    numericInputs(num1, operator, num2);
    break;

    // Analyze the numbers giving the biggest, smallest, amount of negatives and positives

    case 'V':
    case 'v':
    printf("\nWelcome to Kiyo.Ai's Number Pattern Analyzer\n");
    printf("How many numbers will you enter? (100 is the maximum)");

     if (scanf("%d", &n) != 1)
    {
        printf("Invalid Character\n");
        while(getchar() != '\n');
        break;
    }

    if (n > 100)
    {
        printf("The number you putted is to big, please enter a smaller number\n");
        return 0;
    }
    else if (n < 1)
    {
        printf("The number you putted is to small, please enter a bigger number\n");
        return 0;
    }

    printf("Enter your numbers:\n");
    for (int i = 0; i < n; i++)
    {
         if (scanf("%d", &numbers[i]) != 1)
    {
        printf("Invalid Character\n");
        while(getchar() != '\n');
        break;
    }
    }

    min = numbers[0];
    max = numbers[0];

    for (int i = 0; i < n; i++)
    {
        if (numbers[i] > 0)
            positives++;
        else if (numbers[i] < 0)
            negatives++;
        else
            zeros++;

        if (numbers[i] < min)
            min = numbers[i];

        if (numbers[i] > max)
            max = numbers[i];
    }

    printf("Positives: %d\n", positives);
    printf("Negatives: %d\n", negatives);
    printf("Zeros: %d\n", zeros);
    printf("Min: %d\n", min);
    printf("Max: %d\n", max);

    return 0;
    

    break;

    // Classify results into levels (low / medium / high)

    case 'R':
    case 'r':
    printf("\nClassify Results: \n\nThere are:\nProductivity Classification(P)\nRisk Classification(R)\nPerformance Classification(E)\nFocus Classification(F)\n");
    scanf(" %c", &classification);

    switch(classification)
    {
        case 'P':
        case 'p':
        printf("\nProductivity Classification: \n");

        printf("\nHow many hours do you use productively EACH DAY?: \n");

         if (scanf("%i", &pTime) != 1)
    {
        printf("Invalid Character\n");
        while(getchar() != '\n');
        break;
    }
    
    if (pTime < 0 || pTime > 24)
        {
        printf("Invalid number, please remember we are calculating the amount of productivity hours per day(24 hours cycle)\n");
        return 0;
        }

        printf("How is your energy level when your productive for %i hours(From a scale 1 - 10 with 1 being very low, and 10 being very high): \n", pTime);

        if (scanf("%i", &eLevel) != 1)
    {
        printf("Invalid Character\n");
        while(getchar() != '\n');
        break;
    }

        printf("\nYou spend %i hours each day being productive\n", pTime);
        pC2(pTime);

        printf("Your energy level is %i out of 10\n", eLevel);
        pC1(eLevel);

        break;

        case 'R':
        case 'r':
        printf("\nRisk Classification: \n\n");
        printf("I(Kiyo) will be asking a set of questions to determine the risk value of your health\nAre you ready?\n");
        printf("\nFirstly, I will be asking questions that correlate with stress, please answer truthfully. Here we go\n\n");

        printf("How stressed do you feel right now? (1 = relaxed, 10 = extremely stressed)\n");

        if (scanf("%i", &stress) != 1)
    {
        printf("Invalid Character\n");
        while(getchar() != '\n');
        break;
    }

        if (stress < 1 || stress > 10)
        {
            printf("Invalid Number, pick a number from 1-10\n");
            return 0;
        }

        printf("How physically tired do you feel? (1 = well rested, 10 = exhausted)\n");

        if (scanf("%i", &physical) != 1)
    {
        printf("Invalid Character\n");
        while(getchar() != '\n');
        break;
    }

        if (physical < 1 || physical > 10)
        {
            printf("Invalid Number, pick a number from 1-10\n");
            return 0;
        }

        printf("How burned out do you feel? (1 = motivated, 10 = completely burned out)\n");

        if (scanf("%i", &burnOut) != 1)
    {
        printf("Invalid Character\n");
        while(getchar() != '\n');
        break;
    }

        if (burnOut < 1 || burnOut > 10)
        {
            printf("Invalid Number, pick a number from 1-10\n");
            return 0;
        }

        printf("How much physical pain or discomfort are you experiencing? (1 = none, 10 = severe))\n");

        if (scanf("%i", &pain) != 1)
    {
        printf("Invalid Character\n");
        while(getchar() != '\n');
        break;
    }

        if (pain < 1 || pain > 10)
        {
            printf("Invalid Number, pick a number from 1-10\n");
            return 0;
        }
 
        totalRisk = stress + physical + burnOut + pain;

        printf("\nThe risk of you dying or atleast suffering is %i out of 40\n", totalRisk);
        if (totalRisk >= 30)
        {
            printf("You should seek medical help immediately, before it is to late\n");
        }
        else if (totalRisk >= 20)
        {
            printf("You should rest a bit, then start working again, once your fresh\n");
        }
        else if (totalRisk >= 10)
        {
            printf("Your in good condition, Nice job maintaining your health\n");
        }
        else {
            printf("Your in perfect condition, do some hard tasks to challenge yourself a bit\n");
        }
        printf("Well, then nice job on the Quiz, Would you like to continue to get a more accurate reading or would you like to stop?(Y/N): \n");
        scanf(" %c", &q2);

        if (q2 == 'Y' || q2 == 'y')
        {
            printf("Part 2 of Quiz:\nYou have to buy the paid version to continue, please take a look at the subsciption page\n");
        }
        else if (q2 == 'N' || q2 == 'n')
        {
            printf("End of Quiz thanks for attending\n");
        }

        break;

        case 'E':
        case 'e':
        printf("Performance Classification: \n");
        break;

        case 'F':
        case 'f':
        printf("Focus Classification: \n");
        break;

        default:
        printf("Error, Invalid Letter\n");
        break;
    }
    break;

    // Detect when values pass a limit
    case 'D':
    case 'd':
    printf("Detecting a Values Limit\n");
    break;

    // Choose the best option based on numbers
    case 'B':
    case 'b':
    printf("Choose best option based on numbers\n");
    break;

    // Error message
    default:
    printf("The letter you entered is not classify, please type one of the given letters\n Thanks for you service\n");
    break;
    }

    }
    else if (input == 'C'|| input =='c' )
    {
        printf("\nCharacter Inputs: \n");

    // Let the user choose modes (Y/N, A/B, H/M/L)

    // Switch behavior based on a single-letter choice

    // Enable or disable features

    // Select categories without typing full words

    }
    else if (input == 'S'|| input =='s')
    {
        printf("\nString Inputs: \n");

    // Store and remember names

    // Label tasks or goals

    // Personalize responses

    // Display context back to the user
    }

    else
    {
        printf("Invalid Character, Please Try Again\n");
    }

    return 0;
}