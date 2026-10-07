#include <stdio.h>
#include <string.h>

#ifdef _WIN32
    #include <windows.h>
    #define sleep_one_second() Sleep(1000)
#else
    #include <unistd.h>
    #define sleep_one_second() sleep(1)
#endif

int main(void) {
    const char correct_pin[] = "1234";
    char entered_pin[100];
    int attempts = 3;
    int authenticated = 0;
    int choice;

    while (attempts > 0) {
        printf("Enter 4-digit PIN: ");
        if (scanf("%99s", entered_pin) != 1) {
            break;
        }

        size_t len = strlen(entered_pin);

        /* PIN length validation */
        if (len < 4) {
            printf("PIN is too short (must be 4 digits)\n");
        } else if (len > 4) {
            printf("PIN is too long (must be 4 digits)\n");
        } else {
            printf("PIN is exactly 4 digits\n");
        }

        /* PIN verification */
        if (strcmp(entered_pin, correct_pin) == 0) {
            authenticated = 1;
            break;
        } else {
            attempts--;
            if (attempts > 0) {
                printf("Incorrect PIN. Remaining attempts: %d\n\n", attempts);
            }
        }
    }

    /* Lockout handling if attempts exhausted */
    if (!authenticated) {
        printf("\nSystem locked! Wait for 5 seconds...\n");
        for (int i = 5; i >= 1; i--) {
            printf("%d... ", i);
            fflush(stdout);
            sleep_one_second();
        }
        printf("\nYou can try again now.\n");
        return 0;
    }

    /* Device Action Menu */
    printf("\n=== Device Menu ===\n");
    printf("1. Open Door\n");
    printf("2. Change Username\n");
    printf("3. Change PIN\n");
    printf("4. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Access granted. Door unlocked\n");
            break;
        case 2:
            printf("Change username feature coming soon.\n");
            break;
        case 3:
            printf("Change PIN feature coming soon.\n");
            break;
        case 4:
            printf("Exiting system.\n");
            break;
        default:
            printf("Invalid option! Please try again.\n");
            break;
    }

    return 0;
}
