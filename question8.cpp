int main() {
    double purchaseAmt;
    double totalCost = 0.00;

    // Get the input 
    cout << "Enter the purchase amount: ksh";
    cin >> purchaseAmt;

    // Applying the discounts 
    if (purchaseAmt >= 100) {
        totalCost = purchaseAmt * 0.9; // 10% discount
    } else if (purchaseAmt >= 50) {
        totalCost = purchaseAmt * 0.95; // 5% discount
    } else {
        totalCost = purchaseAmt; // No discount
    }

    // Display the total cost after applying the discount
    cout << "The applying of the discount is ksh" << totalCost << endl;

    return 0;
}