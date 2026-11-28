#include "raylib.h" //library's header file

int main() {
    InitWindow(400, 400, "Veryn's Headspace: Sector Null");
    SetTargetFPS(30);

    Vector2 verynPos = {200.00f, 200.00f};

    Camera2D cam = {0};
            cam.target = verynPos; //keeps Veryn at the center of the screen
            cam.offset = {200.00f, 200.00f};
            cam.rotation = 0.0f;
            cam.zoom = 1.00f;

    while (!WindowShouldClose()) { //main game loop :D WSC is a really useful bool wow
        //basic character movement! had to take a gander at the website for the correct syntax 
        if (IsKeyDown(KEY_W)) verynPos.y -= 2.5f; //up
        if (IsKeyDown(KEY_A)) verynPos.x -= 2.5f; //left
        if (IsKeyDown(KEY_S)) verynPos.y += 2.5f; //down
        if (IsKeyDown(KEY_D)) verynPos.x += 2.5f; //right

        cam.target = verynPos; //keeps Veryn at the center of the camera

        BeginDrawing();
            ClearBackground(BLACK);

            BeginMode2D(cam);
                DrawCircleV(verynPos, 8, WHITE); //keeps the drawing dynamic with Veryn's current position
                Texture2D tree = LoadTexture("/Users/imnotfunny/Downloads/tree.png");
                DrawTexture(tree, 200, 200, WHITE); //reference object
            EndMode2D();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
