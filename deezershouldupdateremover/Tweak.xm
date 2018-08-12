

%hook DZServerInformation

-(id) serverMessage {
    return nil;
}

-(bool) isLastRelease {
    return true;
}

%end


%hook DZServerMessage

-(bool) forceChoice {
    return false;
}

%end