#include "Routes.h"
#include <string>
#include <vector>

using namespace crow;

void CreateApiRoutes(SimpleApp &app)
{
    CROW_ROUTE(app, "/api/features").methods("GET"_method)([]() {
        json::wvalue res({});

        res["features"] = json::wvalue::list({"a", "b", "c"});

        return res;
    });
}