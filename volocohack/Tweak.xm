%hook Purchases

-(bool) isPurchased:(id)arg {
	return true;
}

%end