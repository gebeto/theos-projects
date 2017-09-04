
%hook Appelegate

- (BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 {
  BOOL res = %orig;
  NSLog(@"HELLO WORLD!!!!");
  %log(@"RUN APPPPP");
  return res;
}

%end


%hook VideoPlayer

- (void)play:(id)arg1 {
  %log(@"HELLO WORLD!!!!");
  %orig;
}

%end
