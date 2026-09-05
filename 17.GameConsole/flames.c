#include <stdio.h>
#include <string.h>

void get_username(char name[][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter name %d: ", i + 1);
        scanf("%99s", name[i]);
    }
}


void compare_and_remove_common(char name[][100])
{
    for (int i = 0; name[0][i] != '\0'; i++)//look the first user name
    {
        for (int j = 0; name[1][j] != '\0'; j++)//look the second user name 
        {
            if (name[0][i] == name[1][j])//check the user name are even or not.
            {
                for (int k = i; name[0][k] != '\0'; k++)//check the commom letter and remove them in user 1.
                name[0][k] = name[0][k + 1];
                
                for (int k = j; name[1][k] != '\0'; k++)// check the common letter and remove them in user 2.
                name[1][k] = name[1][k + 1];
                
                i--;//decrease the length of username,
                break;
            }
        }
    }
}

void flames(int count)
{
    char flames[] = "FLAMES";
    int index = 0;

    while (strlen(flames) > 1)
    {
        index = (index + count - 1) % strlen(flames);//index value  is add with the count of letters and it divide with the str len of flames.

        for (int i = index; flames[i] != '\0'; i++)//check for the value in word in index and flames.
        {
            flames[i] = flames[i + 1];
        }
    }

    switch (flames[0])
    {
        case 'F':
            printf("Friends\n");
            break;
            
            case 'L':
            printf("Love\n");
            break;
            
            case 'A':
            printf("Affection\n");
            break;
            
            case 'M':
            printf("Marriage\n");
            break;
            
            case 'E':
            printf("Enemies\n");
            break;
            
            case 'S':
            printf("Siblings\n");
            break;
        }
    }
    
    int count_remaining(char name[][100])
    {
        int count = 0;
    
        for (int i = 0; i < 2; i++)
        {
            count += strlen(name[i]);
        }
    
        return count;
    }

    int main()
{
    char name[2][100];
    int count;
    get_username(name, 2);
    compare_and_remove_common(name);
    count = count_remaining(name);
    printf("Remaining letters: %d\n", count);
    flames(count);
    return 0;
}