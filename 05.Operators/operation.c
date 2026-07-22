#include <stdio.h>

int main() {
    int suspect ;
    int evidence ;

    printf("Enter the number of suspects: ");
    scanf("%d", &suspect);

    printf("Enter the number of evidence items: ");
    scanf("%d", &evidence);

    if (suspect == 0 && evidence == 0) {
        printf("No entry of New Cases");
    }
    else if (suspect == 0 && evidence > 0) {
        printf("Unknown Criminal");
    }
    else if (suspect > evidence) {
        printf("Lack of evidence matched");
    }
    else if (suspect <= evidence && evidence > 0) {
        printf("Case able to Solve");
    }
    else {
        printf("Invalid Case Details");
    }

    return 0;
}
