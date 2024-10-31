# ClothingRecommender

The **ClothingRecommender** program provides clothing recommendations based on the current temperature and rain conditions. The user inputs the temperature in Fahrenheit and specifies if it’s raining, and the program suggests appropriate clothing for the weather.

## Files

- **ClothingRecommender.cpp**: Main source file containing the implementation of the clothing recommendation logic.
- **ClothingRecommender.h**: Header file defining the structure for user input and the `ClothingRecommender` class.

## How It Works

1. The program prompts the user to enter:
   - The current temperature in Fahrenheit.
   - Whether it’s raining (Yes/No).
2. Based on the temperature and rain condition, it recommends clothing:
   - Above 80°F: T-shirt and shorts.
   - 60–80°F: Light jacket or sweater.
   - 45–60°F: Jacket.
   - Below 45°F: Heavy coat.
3. If it’s raining, it also recommends carrying an umbrella or taking a raincoat.

## How to Run

### Compilation and Execution

1. Compile the program using the following command:

   ```bash
   g++ ClothingRecommender.cpp -o ClothingRecommender
   
2. Run the compiled program:
    ```bash
   ./ClothingRecommender

### Example:
```
Please enter the current temperature in Fahrenheit: 72
Is it raining (Yes/No)? Yes
Recommendation: Wear a light jacket or a sweater. Also, carry an umbrella or take a raincoat.
```

