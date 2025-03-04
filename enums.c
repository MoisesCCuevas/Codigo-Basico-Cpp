#include <stdio.h>

enum designElements
{
    NORMAL,
    ITALICS = 1,
    BOLD = 2,
    STRIKE = 3,
};

enum deck 
{
    club = 0,
    diamonds = 5,
    hearts = 10,
    spades = 15
} card;

int main() {
    // enum designElements NORMAL = 0;
    enum designElements element;
    element = NORMAL;
    printf("Design Element: %d\n", element+1);
    card = spades;
    printf("Card %d\n", card);
    printf("Size of %d\n", sizeof(card));
    return 0;
}