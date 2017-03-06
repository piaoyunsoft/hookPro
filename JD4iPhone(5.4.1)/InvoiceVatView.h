//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDContentItem.h"

#import "InvoiceMakeWayDelagate.h"
#import "ReceivePersonInfoViewDelegate.h"

@class InvoiceContactViewModel, InvoiceMakeWayView, InvoiceReceivePersonInfoView, InvoiceVatContentView, InvoiceVatQualificationView, NSString, NewInVoiceModel, OrderInfoModel;

@interface InvoiceVatView : JDContentItem <ReceivePersonInfoViewDelegate, InvoiceMakeWayDelagate>
{
    OrderInfoModel *_orderInfoModel;
    NSString *_productTypeParam;
    InvoiceReceivePersonInfoView *_receiveInfoView;
    InvoiceMakeWayView *_makeWayView;
    id <InvoiceVatDelegate> _vatDelegate;
    InvoiceVatQualificationView *_qualificationView;
    InvoiceVatContentView *_contentView;
    NewInVoiceModel *_invoiceModel;
    InvoiceContactViewModel *_contactViewModel;
}

@property(retain, nonatomic) InvoiceContactViewModel *contactViewModel; // @synthesize contactViewModel=_contactViewModel;
@property(retain, nonatomic) NewInVoiceModel *invoiceModel; // @synthesize invoiceModel=_invoiceModel;
@property(retain, nonatomic) InvoiceVatContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) InvoiceVatQualificationView *qualificationView; // @synthesize qualificationView=_qualificationView;
@property(nonatomic) __weak id <InvoiceVatDelegate> vatDelegate; // @synthesize vatDelegate=_vatDelegate;
@property(retain, nonatomic) InvoiceMakeWayView *makeWayView; // @synthesize makeWayView=_makeWayView;
@property(retain, nonatomic) InvoiceReceivePersonInfoView *receiveInfoView; // @synthesize receiveInfoView=_receiveInfoView;
@property(retain, nonatomic) NSString *productTypeParam; // @synthesize productTypeParam=_productTypeParam;
@property(retain, nonatomic) OrderInfoModel *orderInfoModel; // @synthesize orderInfoModel=_orderInfoModel;
- (void).cxx_destruct;
- (void)invoiceMakeWayBtnTapedWithModel:(id)arg1;
- (void)receivePersonInfoTextViewBeginEdit:(id)arg1;
- (void)receivePersonInfoTextFieldBeginEdit:(id)arg1;
- (void)receivePersonInfoViewBtnTaped:(id)arg1;
- (void)receivePersonInfoUpDateTextViewHeight:(id)arg1;
- (void)resetHightAndLayOutSubviews;
- (id)getVatInvoice;
- (void)reloadReceiveInfoView;
- (void)reloadQualificationView;
- (void)reloadMakeWayView;
- (void)refreshViewWithModel:(id)arg1 AndContactViewModel:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
