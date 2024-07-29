double decnum=num-numint;
    int possBanknotes[]={100, 50, 20, 10, 5, 2};
    double coins[]={1, 0.50, 0.25, 0.10, 0.05,0.01};
    int noteIteration= sizeof(possBanknotes)/sizeof(possBanknotes[0]);
    int coinIteration= sizeof(coins)/sizeof(coins[0]);

    cout << "NOTAS:" << endl;
    for (int i = 0; i < noteIteration; i++)
    {
        int count = numint/possBanknotes[i];
        cout << count << " nota(s) de R$ " << possBanknotes[i] << endl;
        numint%=possBanknotes[i];
    }