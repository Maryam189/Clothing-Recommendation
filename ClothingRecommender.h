#ifndef CLOTHING_RECOMMENDER_H
#define CLOTHING_RECOMMENDER_H
#include <string>

// Struct to hold the results of user inputs
struct UserInputResult {
    float temperature;
    bool isRaining;

    // Constructor for initializing values
    UserInputResult(float temp, bool rain) : temperature(temp), isRaining(rain) {}

};

// Class to manage the clothing recommendation process
class ClothingRecommender {
public:
    // Method to get user input
    UserInputResult GetUserInput();

    // Method to compute clothing recommendation based on the temperature and raining condition
    std::string GetClothingRecommendation(float temperature, bool isRaining);

    // Method to run the entire clothing recommender system
    void RunClothingRecommender();
};

#endif // CLOTHING_RECOMMENDER_H
