//
//  ADBAddAntibodyViewController.h
//  AntibodyDB
//
//  Created by Raul Catena on 3/31/14.
//  Copyright (c) 2014 CatApps. All rights reserved.
//

#import "ADBMasterViewController.h"
#import "ADBAddAntibodyViewController.h"
#import "ADBSpeciesSelectoinViewController.h"
#import "ADBTargetViewController.h"


@protocol AddAntibodyProtocol;

@interface ADBAddAntibodyViewController : ADBMasterViewController <SpeciesSelection, TargetSelection>

@property (nonatomic, strong) Clone *clone;
@property (nonatomic, weak) id<AddAntibodyProtocol>delegate;
@property (weak, nonatomic) IBOutlet UITextField *antibodyName;
@property (weak, nonatomic) IBOutlet UITextField *cloneName;
@property (weak, nonatomic) IBOutlet UIButton *targetButton;
@property (weak, nonatomic) IBOutlet UILabel *nueTargetLabel;
@property (weak, nonatomic) IBOutlet UITextField *nueTargetField;
@property (weak, nonatomic) IBOutlet UITextField *epitope;
@property (weak, nonatomic) IBOutlet UITextField *isotype;
@property (weak, nonatomic) IBOutlet UIButton *speciesReactivityButton;
@property (weak, nonatomic) IBOutlet UIButton *speciesHostButton;
@property (weak, nonatomic) IBOutlet UISwitch *polyclonalSwitch;
@property (weak, nonatomic) IBOutlet UISwitch *phosphoSwitch;

-(IBAction)speciesSelector:(UIButton *)sender;
-(IBAction)targetSelector:(UIButton *)sender;
- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil andProtein:(Protein *)protein;
- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil andEditableClone:(Clone *)clone;

@end

@protocol AddAntibodyProtocol <NSObject>

-(void)addAntibody:(ADBAddAntibodyViewController *)controller withNewProtein:(BOOL)newProt;

@end
