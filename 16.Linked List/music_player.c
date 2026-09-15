
#include <stdio.h>
#include <stdlib.h>

// Structure
struct musicplayer
{
    int music;
    struct musicplayer *nextsong;
};


// Allocate memory for songs
void allocate_songplace(struct musicplayer **intro,
                        struct musicplayer **firstsong,
                        struct musicplayer **secondsong)
{
    *intro = malloc(sizeof(struct musicplayer));
    *firstsong = malloc(sizeof(struct musicplayer));
    *secondsong = malloc(sizeof(struct musicplayer));

    if (*intro == NULL || *firstsong == NULL || *secondsong == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }
}


// Assign songs
void assign_musicplayer(struct musicplayer *intro,
                        struct musicplayer *firstsong,
                        struct musicplayer *secondsong)
{
    printf("Enter the no for intro : \n");
    scanf("%d", &intro->music);

    printf("Enter the first song : \n");
    scanf("%d", &firstsong->music);

    printf("Enter the second song : \n");
    scanf("%d", &secondsong->music);

    intro->nextsong = firstsong;
    firstsong->nextsong = secondsong;
    secondsong->nextsong = NULL;
}




// Check songs
void check_songs(struct musicplayer *intro,
                 struct musicplayer *firstsong,
                 struct musicplayer *secondsong)
{
    if (intro == NULL || firstsong == NULL || secondsong == NULL)
    {
        printf("Not playing the music..\n");
        return;
    }

    printf("Music player is ready!\n");
}


// Print linked list
void print_linked_list(struct musicplayer *intro)
{
    struct musicplayer *reverse = intro;

    while (reverse != NULL)
    {
        printf("%d -> ", reverse->music);

        reverse = reverse->nextsong;
    }

    printf("END\n");
}


// Free memory
void free_space(struct musicplayer *intro)
{
    struct musicplayer *temp;

    while (intro != NULL)
    {
        temp = intro;
        intro = intro->nextsong;

        free(temp);
    }
}


// Main function
int main()
{
    struct musicplayer *intro = NULL;
    struct musicplayer *firstsong = NULL;
    struct musicplayer *secondsong = NULL;

    // Allocate memory
    allocate_songplace(&intro, &firstsong, &secondsong);

    // Assign songs
    assign_musicplayer(intro, firstsong, secondsong);

    // Check songs
    check_songs(intro, firstsong, secondsong);

    // Print songs
    print_linked_list(intro);

    // Free memory
    free_space(intro);

    return 0;
}