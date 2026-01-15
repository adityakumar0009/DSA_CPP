#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SEQ 7
#define WINDOW_SIZE 4

typedef struct {
    char data[100];
} Packet;

typedef struct {
    int seq_num;
    Packet packet;
} Frame;

Frame window[WINDOW_SIZE];
int next_frame_to_send = 0;

void send_data(int frame_num) {
    printf("Sending frame %d: data = %s\n", frame_num, window[frame_num % WINDOW_SIZE].packet.data);
}

void transmit_data(Packet packet) {
    if (next_frame_to_send < MAX_SEQ + 1) {
        window[next_frame_to_send % WINDOW_SIZE].packet = packet;
        window[next_frame_to_send % WINDOW_SIZE].seq_num = next_frame_to_send;

        send_data(next_frame_to_send);

        next_frame_to_send = (next_frame_to_send + 1) % (MAX_SEQ + 1);
    } else {
        printf("All frames sent. Cannot send more data.\n");
    }
}

int main() {
    char sentence[1000];
    int num_frames;
    int *frame_sizes;
    int total_size = 0;

    printf("Enter the sentence to transmit: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0';

    int sentence_length = strlen(sentence);
    printf("The length of the sentence is: %d\n", sentence_length);

    printf("Enter the number of frames to divide the sentence into: ");
    scanf("%d", &num_frames);

    frame_sizes = (int *)malloc(num_frames * sizeof(int));

    for (int i = 0; i < num_frames; i++) {
        printf("Enter the size of frame %d: ", i + 1);
        scanf("%d", &frame_sizes[i]);
        total_size += frame_sizes[i];
    }

    if (total_size != sentence_length) {
        printf("Error: The total size of frames (%d) does not match the length of the sentence (%d).\n", total_size, sentence_length);
        free(frame_sizes);
        return 1;
    }

    Packet *packets = (Packet *)malloc(num_frames * sizeof(Packet));
    int offset = 0;

    for (int i = 0; i < num_frames; i++) {
        strncpy(packets[i].data, sentence + offset, frame_sizes[i]);
        packets[i].data[frame_sizes[i]] = '\0';
        offset += frame_sizes[i];
    }

    for (int i = 0; i < num_frames; i++) {
        transmit_data(packets[i]);
    }

    free(packets);
    free(frame_sizes);

    return 0;
}