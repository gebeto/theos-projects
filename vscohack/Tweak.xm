%hook VSCOStoreProductPurchaser

-(void)purchaseAndDownloadProduct:(id)arg1 purchaseCompletion:(/*^block*/id)arg2
{
	%log(arg1, arg2);
	%orig;
}

-(void)storePurchaseCompleted:(id)arg1
{
	%log(arg1);
	%orig;
}

-(void)makePurchaseWithProduct:(id)arg1
{
	%log(arg1);
	%orig;
}

%end


%hook VSCOStore

-(NSMutableArray *)activeProductsRequests
{
	NSMutableArray* res = %orig;
	%log(res);
	return res;
}

-(void)setActiveProductsRequests:(NSMutableArray *)arg1
{
	%log(arg1);
	%orig;
}
// -(void)addPurchaseCompletionBlock:(/*^block*/id)arg1 forProductID:(id)arg2 ;
// -(NSMutableDictionary *)purchaseCompletionBlocks;
// -(void)purchaseProductWithID:(id)arg1 completion:(/*^block*/id)arg2 ;
// -(void)setPurchaseCompletionBlocks:(NSMutableDictionary *)arg1 ;
// -(void)setActiveProductsRequests:(NSMutableArray *)arg1 ;
// -(void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2 ;

%end