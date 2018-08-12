
%hook GADMobileAds

+(void) configureWithApplicationID:(NSString*)arg {
    exit(0);
    // NSLog(@"Hello");
}

-(id) init {
    return nil;
}

%end


%hook GADBannerView

-(NSString*) adUnitID {
    return nil;
}

-(id) adView {
    exit(0);
    return nil;
}

-(id) delegate {
    exit(0);
    return nil;
}

-(id) adSize {
    exit(0);
    return nil;
}

%end


%hook SIGMAPOINT_MPAdView

-(NSString*) adUnitId {
    return nil;
}

%end