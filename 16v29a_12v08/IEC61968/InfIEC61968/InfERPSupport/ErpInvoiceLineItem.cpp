///////////////////////////////////////////////////////////
//  ErpInvoiceLineItem.cpp
//  Implementation of the Class ErpInvoiceLineItem
///////////////////////////////////////////////////////////

#include "ErpInvoiceLineItem.h"

using IEC61968::InfIEC61968::InfERPSupport::ErpInvoiceLineItem;


ErpInvoiceLineItem::ErpInvoiceLineItem()
	: ContainerErpInvoiceLineItem(nullptr), ErpRecLineItem(nullptr), ErpPayableLineItem(nullptr), ErpInvoice(nullptr)
{

}



ErpInvoiceLineItem::~ErpInvoiceLineItem(){

}
