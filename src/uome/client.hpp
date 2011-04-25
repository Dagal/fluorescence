#ifndef UOME_CLIENT_HPP
#define UOME_CLIENT_HPP

#include <vector>
#include <ClanLib/Core/Text/string8.h>

#include <boost/program_options.hpp>

#include <misc/config.hpp>

namespace uome {

namespace world {
    class Sector;
}

class Client {
public:
    enum {
        STATE_SHARD_SELECTION,
        STATE_LOGIN,
        STATE_PLAYING,
        STATE_LOGOUT,
    };

    Client();

    static Client* getSingleton();

    static int sMain(const std::vector<CL_String8>& args); ///< static helper to call main
    int main(const std::vector<CL_String8>& args);

    Config* getConfig();

    void shutdown();

private:
    static Client* singleton_;

    Config config_;

    std::string chooseShard();
    void cleanUp();

    bool initBase(const std::vector<CL_String8>& args);
    bool initFull(const std::string& selectedShard);

    float calculateFps(unsigned int elapsedMillis);

    unsigned int state_;
    void setState(unsigned int state);

    void doStatePlaying(unsigned int elapsedMillis);
};

}

#endif
