static bool cmp(Item a,Item b)
    {
        return ((a.value/a.weight)>(b.value/b.weight));
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
      int totalValue = 0.0;
    sort(arr, arr + n, cmp);
    int i = 0;
    while (W > 0 && i < n)
    {
        if (arr[i].weight <= W)
        {
            totalValue += arr[i].value;
            W -= arr[i].weight;
        }
        else
        {
            totalValue += (W * 1.0 / arr[i].weight) * arr[i].value;
            break;
        }
        i++;
    }
    return (double)totalValue;
    }
