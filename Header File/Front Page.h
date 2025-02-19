
void printCentered(const char *text) {
    int length = strlen(text);
    int spaces = (150 - length) / 2;
    for (int i = 0; i < spaces; i++) {
        printf(" ");
    }
    printf("%s\n", text);
    Sleep(500); 
}

int FrontPage() {
    Sleep(2000); 
    printf("\n\n");

    printCentered("--------------------------------------------------");
    printCentered("A Project Proposal on");
    printCentered("\"Inventory Management System\"");
    printCentered("--------------------------------------------------");
    printf("\n");
    
    printCentered("Submitted in partial fulfillment of the");
    printCentered("requirements for the degree of \"Bachelor of");
    printCentered("Computer Engineering\" under");
    printCentered("Tribhuvan University \" IOE \" Pulchowk Campus");
    printf("\n");
    
    printCentered("--------------------------------------------------");
    printf("\n");
    
    printCentered("Submitted by:");
    printCentered("Name: Bibash Kumar Thakur");
    printCentered("Subject: C - Programming");
    printCentered("Roll. No: 081BCT024");
    printf("\n");
    
    printCentered("--------------------------------------------------");
    printf("\n");
    
    printCentered("Under the supervision of:");
    printCentered("Bibash Sharma");
    printf("\n");
    
    printCentered("--------------------------------------------------");
    printf("\n");
    
    printCentered("Date: Feb 19, 2025");
    printf("\n\n");
    
    getch(); 
    return 0;
}
