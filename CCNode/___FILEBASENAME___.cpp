//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//  Copyright ___YEAR___ ___ORGANIZATIONNAME___. All rights reserved.
//

#include "___FILEBASENAME___.h"

___FILEBASENAMEASIDENTIFIER___::___FILEBASENAMEASIDENTIFIER___()
{
    
}

___FILEBASENAMEASIDENTIFIER___::~___FILEBASENAMEASIDENTIFIER___()
{
    
}

___FILEBASENAMEASIDENTIFIER___* ___FILEBASENAMEASIDENTIFIER___::node()
{
    ___FILEBASENAMEASIDENTIFIER___* pRet = new ___FILEBASENAMEASIDENTIFIER___();
	if (pRet && pRet->init()) {
		pRet->autorelease();
		return pRet;
	} else {
	    CC_SAFE_DELETE(pRet)
	    return NULL;
    }
}

bool ___FILEBASENAMEASIDENTIFIER___::init()
{
    return true;
}