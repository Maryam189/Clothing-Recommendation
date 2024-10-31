#include "ClothingRecommender.h"
#include <iostream>

using namespace std;

UserInputResult ClothingRecommender::GetUserInput() // DO NOT ALTER THIS LINE
{
    /* INPUT SECTION DIRECTLY BELOW THESE COMMENTS:
       Assign the provided temperature and isRaining the proper values per the assignment directions using user input.
       Hint: you can use an additional variable to help assign isRaining */

    // INPUT SECTION
    float temperature = 0.0f;
    bool isRaining = false;
    string rainInput;

    cout << "Please enter the current temperature in Fahrenheit: ";
    cin >> temperature;

    cout << "Is it raining (Yes/No)? ";
    cin >> rainInput;

    if (rainInput == "Yes" || rainInput == "yes")
    {
        isRaining = true;
    }

    return UserInputResult(temperature, isRaining); // DO NOT ALTER THIS LINE
}

string ClothingRecommender::GetClothingRecommendation(float temperature, bool isRaining) // DO NOT ALTER THIS LINE
{
    string recommendation = ""; // DO NOT ALTER THIS LINE

    /* PROCESSING SECTION DIRECTLY BELOW THESE COMMENTS:
       Use decision statement(s) to properly set the provided recommendation variable per the assignment instructions.
       You can directly access the temperature and isRaining variables within GetClothingRecommendation */

    // PROCESSING SECTION
    // Initial recommendation based on temperature
    if (temperature > 80)
    {
        recommendation = "Wear a t-shirt and shorts.";
    }
    else if (temperature >= 60 && temperature <= 80)
    {
        recommendation = "Wear a light jacket or a sweater.";
    }
    else if (temperature >= 45 && temperature < 60)
    {
        recommendation = "Wear a jacket.";
    }
    else
    {
        recommendation = "Wear a heavy coat.";
    }

    // Additional recommendation based on rain
    if (isRaining)
    {
        recommendation += " Also, carry an umbrella or take a raincoat.";
    }
    return recommendation; // DO NOT ALTER THIS LINE
}

void ClothingRecommender::RunClothingRecommender() // DO NOT ALTER THIS LINE
{
    UserInputResult result = GetUserInput(); // DO NOT ALTER THIS LINE
    string recommendation = GetClothingRecommendation(result.temperature, result.isRaining); // DO NOT ALTER THIS LINE

    /* OUTPUT SECTION DIRECTLY BELOW THESE COMMENTS:
       Output the determined recommendation to the user in the format described in the instructions
       You can directly access the recommendation variable within main */
    // OUTPUT SECTION
    cout << "Recommendation: " << recommendation << endl; // Print the recommendation
}

int main()
{
    ClothingRecommender recommender;       // Creating an instance of ClothingRecommender
    recommender.RunClothingRecommender();  // Running the method to start the recommendation process
    return 0;
}
