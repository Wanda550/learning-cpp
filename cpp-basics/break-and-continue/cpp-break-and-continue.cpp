#include <iostream>
#include <string>
#include <vector>

// break -> terminates the loop
// continue -> skips the current iteration of the loop

int main() {

    // paint colors
    std::vector<std::string> colors = {"Blue", "Red", "Green", "White", "Black"};
    std::string targetColor = "White";
    std::string skipColor = "Blue";
    bool found = false;

    // a for loop example
    for (size_t i = 0; i < colors.size(); i++) {
        if (colors[i] == skipColor) {
            continue;
        }

        std::cout << i << ": " << colors[i] << std::endl;

        if (colors[i] == targetColor) {
            found = true;
            break; // early break
        }
    }

    std::cout << std::endl;

    std::cout << targetColor << " " << (found ? "found" : "not found") << std::endl;

    // 
    int paintCost = 10;

    std::vector<std::string> colorOrder = {"Blue", "Red", "Blue", "Green", "White", "Black"};
    std::vector<int> quantityOrder = {6, 15, 9, 3, 5};
    int budget = 200;

    // a for loop example
    for (size_t i = 0; i < colorOrder.size(); i++) {
        std::string color = colorOrder[i];
        int quantity = quantityOrder[i];

        int cost = paintCost * quantity;
        std::cout << "Order#"  << i << ": " << color << " x" << quantity << std::endl;

        if (budget == 0) {
            std::cout << "Out of budget! Cancelling remaining orders\n\n";
            break;
        }
        if (cost > budget) {
            std::cout << "Skipping order, not enough budget\n\n";
            continue;
        }

        budget -= cost;
        std::cout << "Cost: -$"  << cost <<  " Remaining budget: $"  << budget  << "\n\n";
    }
}