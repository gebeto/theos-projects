

%hook RMAppReceiptIAP

-(NSDate*)subscriptionExpirationDate {
	NSDate *currentDate = [NSDate date];
	// return [currentDate dateByAddingTimeInterval:60*60*24];
	return currentDate;
}

-(NSDate*)originalPurchaseDate {
	return [NSDate date];
}

-(NSDate*)purchaseDate {
	return [NSDate date];
}


%end
