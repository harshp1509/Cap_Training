#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

int compare_times(struct Time time1, struct Time time2) {
    if (time1.hours < time2.hours)
        return -1;
    else if (time1.hours > time2.hours)
        return 1;
    else { 
        if (time1.minutes < time2.minutes)
            return -1;
        else if (time1.minutes > time2.minutes)
            return 1;
        else { 
            if (time1.seconds < time2.seconds)
                return -1;
            else if (time1.seconds > time2.seconds)
                return 1;
            else 
                return 0;
        }
    }
}

int main() {
    int n;
    printf("Enter the number of pairs of times: ");
    scanf("%d", &n);

    struct Time time1, time2;
    int i;
    for (i = 0; i < n; i++) {
        printf("Enter the first time (h m s): ");
        scanf("%d %d %d", &time1.hours, &time1.minutes, &time1.seconds);
        
        printf("Enter the second time (h m s): ");
        scanf("%d %d %d", &time2.hours, &time2.minutes, &time2.seconds);

        int result = compare_times(time1, time2);

        if (result < 0)
            printf("early\n");
        else if (result > 0)
            printf("late\n");
        else
            printf("equal\n");
        
        printf("\n");
    }

    return 0;
}

