void showMainView() {
	printf("You are in the \"MAIN\" window.\n\n");

    if (currentUser.role == ADMIN_ROLE) {
        showAdminView();
    } else if (currentUser.role == CLIENT_ROLE) {
        showClientView();
    } else {
        showWorkerView();
    }
}
