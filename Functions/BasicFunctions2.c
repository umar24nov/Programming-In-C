#include <stdio.h>
void GoodMorning();
void GoodAfternoon();
void GoodNight();

int main () {
    GoodMorning();
    return 0;
    
}

void GoodMorning() {
    printf("GoodMorning MOHD UMAR\n");
    GoodAfternoon();
}
void GoodAfternoon() {
    printf("GoodAfternoon MOHD UMAR\n");
    GoodNight();
}
void GoodNight() {
    printf("GoodNight MOHD UMAR\n");

}

