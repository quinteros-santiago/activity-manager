void showMainView() {
	printf("You are in the \"MAIN\" window.\n");

    if (currentUser.role == ADMIN_ROLE) {
        printf("You are an \"Administrator\".\n");
    } else if (currentUser.role == CLIENT_ROLE) {
        printf("You are a \"Client\".\n");
    } else {
        showWorkerView();
    }
    return;
}
