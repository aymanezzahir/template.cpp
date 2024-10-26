#include "../env.h"
#include "function.h"
#include <iostream>
#include <dpp/dpp.h>
int main() {
    dpp::cluster bot(TOKEN);

    bot.on_message_create([&bot](const dpp::message_create_t& event) {
        if (event.msg.content == "ping") {
            bot.message_create(dpp::message(event.msg.channel_id, "pong"));
        }
    });

    bot.on_ready([&bot](const dpp::ready_t& event) {
        std::cout << colorFunc("Bot is ready", "green")  << std::endl;
    });

    bot.on_log(dpp::utility::cout_logger());

    bot.start(dpp::st_wait);
    
    return 0;
}
