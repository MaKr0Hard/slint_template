#include "main.h" // Généré automatiquement par CMake / Slint
#include <cstdlib>
#include <unistd.h>

int main(int argc, char **argv) {

    // Instanciation de la fenêtre principale
    auto main_window = MainWindow::create();

    // Connexion du callback défini dans le fichier .slint
    main_window->on_request_increase_value([&]() {
        // Récupération de la valeur actuelle et incrémentation
        int current_val = main_window->get_counter();
        main_window->set_counter(current_val + 1);
    });

    // Lancement de la boucle d'événements
    main_window->run();

    return 0;
}
