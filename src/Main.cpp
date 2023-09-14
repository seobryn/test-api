#include "Routes.h"
#include "crow.h"

int main()
{
    crow::SimpleApp app;

    CROW_ROUTE(app, "/").methods("GET"_method)([]() {
        crow::json::wvalue res({{"status", "Active"}});
        return res;
    });

    CreateApiRoutes(app);

    app.port(8081).multithreaded().run();
}