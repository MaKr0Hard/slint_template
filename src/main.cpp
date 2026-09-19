#include "main.h" // Généré automatiquement par CMake / Slint
#include <cstdlib>
#include <unistd.h>

int main(int argc, char **argv) {

    auto main_window = MainWindow::create();


    main_window->on_request_increase_value([&]() {
        int current_val = main_window->get_counter();
        main_window->set_counter(current_val + 1);
    });

    main_window->run();
    // Don't need these comments imao
    return 0;
}
