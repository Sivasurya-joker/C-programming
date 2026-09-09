
#include <stdio.h>
#include <stdlib.h>

// Structure
struct musicplayer
{
    struct musicplayer *prevsong;
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
    printf("Enter the no for intro: ");
    scanf("%d", &intro->music);

    printf("Enter the first song: ");
    scanf("%d", &firstsong->music);

    printf("Enter the second song: ");
    scanf("%d", &secondsong->music);

    // INTRO
    intro->prevsong = NULL;
    intro->nextsong = firstsong;

    // FIRST SONG
    firstsong->prevsong = intro;
    firstsong->nextsong = secondsong;

    // SECOND SONG
    secondsong->prevsong = firstsong;
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

// Print forward
void print_linked_list(struct musicplayer *intro)
{
    struct musicplayer *temp = intro;

    printf("\nForward:\n");

    while (temp != NULL)
    {
        printf("%d -> ", temp->music);
        temp = temp->nextsong;
    }

    printf("NULL\n");
}

// Print backward
void print_reverse(struct musicplayer *secondsong)
{
    struct musicplayer *temp = secondsong;

    printf("\nBackward:\n");

    while (temp != NULL)
    {
        printf("%d -> ", temp->music);
        temp = temp->prevsong;
    }

    printf("NULL\n");
}

// Free memory
void free_space(struct musicplayer **intro)
{
    struct musicplayer *temp;

    while (*intro != NULL)
    {
        temp = *intro;
        *intro = (*intro)->nextsong;
        free(temp);
    }
}

int main()
{
    struct musicplayer *intro = NULL;
    struct musicplayer *firstsong = NULL;
    struct musicplayer *secondsong = NULL;

    allocate_songplace(&intro, &firstsong, &secondsong);

    assign_musicplayer(intro, firstsong, secondsong);

    check_songs(intro, firstsong, secondsong);

    print_linked_list(intro);

    print_reverse(secondsong);

    free_space(&intro);

    return 0;
}
