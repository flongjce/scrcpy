#ifndef DECODER_H
#define DECODER_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_net.h>

struct frames;

struct decoder {
    struct frames *frames;
    TCPsocket video_socket;
    SDL_Thread *thread;
    SDL_mutex *mutex;
    SDL_bool skip_frames;
};

SDL_bool decoder_start(struct decoder *decoder);
void decoder_join(struct decoder *decoder);

#endif
