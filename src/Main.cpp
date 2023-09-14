#define CROW_JSON_USE_MAP

#include "crow.h"

int main()
{
    crow::SimpleApp app;

    CROW_ROUTE(app, "/")
    ([]() {
        crow::json::wvalue res({{"message", "Hello World!"}});
        return res;
    });

    app.port(8081).multithreaded().run();
}