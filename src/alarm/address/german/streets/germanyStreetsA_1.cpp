#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameA1(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 409:
    {
        returnValue = F("A");
        break;
    }
    case 410:
    {
        returnValue = F("A 6");
        break;
    }
    case 411:
    {
        returnValue = F("A Flügel");
        break;
    }
    case 412:
    {
        returnValue = F("A'n Diek");
        break;
    }
    case 413:
    {
        returnValue = F("A-Flügel");
        break;
    }
    case 414:
    {
        returnValue = F("A-Kuppenweg");
        break;
    }
    case 415:
    {
        returnValue = F("A-Linie");
        break;
    }
    case 416:
    {
        returnValue = F("A-Schneise");
        break;
    }
    case 417:
    {
        returnValue = F("A-Str.");
        break;
    }
    case 418:
    {
        returnValue = F("A-Weg");
        break;
    }
    case 419:
    {
        returnValue = F("A. E. Johann-Weg");
        break;
    }
    case 420:
    {
        returnValue = F("A. Grambergs Trift");
        break;
    }
    case 421:
    {
        returnValue = F("A. Schmid-Weg");
        break;
    }
    case 422:
    {
        returnValue = F("A. d. Heid");
        break;
    }
    case 423:
    {
        returnValue = F("A.- Eyringstr.");
        break;
    }
    case 424:
    {
        returnValue = F("A.-D.-Thaer-Weg");
        break;
    }
    case 425:
    {
        returnValue = F("A.-Ehrmann-Str.");
        break;
    }
    case 426:
    {
        returnValue = F("A.-F.-Vom-Endt-Str.");
        break;
    }
    case 427:
    {
        returnValue = F("A.-Fladung-Weg");
        break;
    }
    case 428:
    {
        returnValue = F("A.-J.-Tröster-Str.");
        break;
    }
    case 429:
    {
        returnValue = F("A.-Kolping-Platz");
        break;
    }
    case 430:
    {
        returnValue = F("A.-Müller-Guttenbrunn-Weg");
        break;
    }
    case 431:
    {
        returnValue = F("A.-Paul-Weber-Str.");
        break;
    }
    case 432:
    {
        returnValue = F("A.-Robert-Wieland-Str.");
        break;
    }
    case 433:
    {
        returnValue = F("A.-v.-Droste-Hülshoff-Str.");
        break;
    }
    case 434:
    {
        returnValue = F("A1");
        break;
    }
    case 435:
    {
        returnValue = F("A1 A4");
        break;
    }
    case 436:
    {
        returnValue = F("A1, A2, U");
        break;
    }
    case 437:
    {
        returnValue = F("A13");
        break;
    }
    case 438:
    {
        returnValue = F("A2");
        break;
    }
    case 439:
    {
        returnValue = F("A21 Schäfer Hain Weg");
        break;
    }
    case 440:
    {
        returnValue = F("A21 Schäfer-Hain-Weg");
        break;
    }
    case 441:
    {
        returnValue = F("A3");
        break;
    }
    case 442:
    {
        returnValue = F("A32");
        break;
    }
    case 443:
    {
        returnValue = F("A5");
        break;
    }
    case 444:
    {
        returnValue = F("A6");
        break;
    }
    case 445:
    {
        returnValue = F("A6- Schlunkweg");
        break;
    }
    case 446:
    {
        returnValue = F("A8");
        break;
    }
    case 447:
    {
        returnValue = F("AAn der Rohrach");
        break;
    }
    case 448:
    {
        returnValue = F("AB 21");
        break;
    }
    case 449:
    {
        returnValue = F("ABC-Hügel");
        break;
    }
    case 450:
    {
        returnValue = F("ABC-Str.");
        break;
    }
    case 451:
    {
        returnValue = F("ABC-Weg");
        break;
    }
    case 452:
    {
        returnValue = F("ADAC-Nordbayern-Str.");
        break;
    }
    case 453:
    {
        returnValue = F("ADAC-Str.");
        break;
    }
    case 454:
    {
        returnValue = F("AG-Weser-Str.");
        break;
    }
    case 455:
    {
        returnValue = F("AK-Weg");
        break;
    }
    case 456:
    {
        returnValue = F("ALB-Gold Wadenbeißer");
        break;
    }
    case 457:
    {
        returnValue = F("ALVA-Skulpturenpark");
        break;
    }
    case 458:
    {
        returnValue = F("AMCO-Str.");
        break;
    }
    case 459:
    {
        returnValue = F("AMEOS Sinnesgarten");
        break;
    }
    case 460:
    {
        returnValue = F("AREA41");
        break;
    }
    case 461:
    {
        returnValue = F("ASB Seniorenpark");
        break;
    }
    case 462:
    {
        returnValue = F("ASS-Adam-Stegner-Str.");
        break;
    }
    case 463:
    {
        returnValue = F("ATP-Allee");
        break;
    }
    case 464:
    {
        returnValue = F("AV Steinwald-Weiden");
        break;
    }
    case 465:
    {
        returnValue = F("AWG");
        break;
    }
    case 466:
    {
        returnValue = F("AWG-Siedlung");
        break;
    }
    case 467:
    {
        returnValue = F("AWO Generationenpark");
        break;
    }
    case 468:
    {
        returnValue = F("Aa-Seitenweg");
        break;
    }
    case 469:
    {
        returnValue = F("Aa-Ufer");
        break;
    }
    case 470:
    {
        returnValue = F("Aabach Aue");
        break;
    }
    case 471:
    {
        returnValue = F("Aabachhof");
        break;
    }
    case 472:
    {
        returnValue = F("Aabauerschaft");
        break;
    }
    case 473:
    {
        returnValue = F("Aach");
        break;
    }
    case 474:
    {
        returnValue = F("Aachbachstr.");
        break;
    }
    case 475:
    {
        returnValue = F("Aachen Schanz");
        break;
    }
    case 476:
    {
        returnValue = F("AachenMünchener-Platz");
        break;
    }
    case 477:
    {
        returnValue = F("Aachener Ende");
        break;
    }
    case 478:
    {
        returnValue = F("Aachener Glacis");
        break;
    }
    case 479:
    {
        returnValue = F("Aachener Gracht");
        break;
    }
    case 480:
    {
        returnValue = F("Aachener Landstr.");
        break;
    }
    case 481:
    {
        returnValue = F("Aachener Pfad");
        break;
    }
    case 482:
    {
        returnValue = F("Aachener Str.");
        break;
    }
    case 483:
    {
        returnValue = F("Aachener Weg");
        break;
    }
    case 484:
    {
        returnValue = F("Aachener-und-Münchener-Allee");
        break;
    }
    case 485:
    {
        returnValue = F("Aachenstr.");
        break;
    }
    case 486:
    {
        returnValue = F("Aacher Str.");
        break;
    }
    case 487:
    {
        returnValue = F("Aacher Weg");
        break;
    }
    case 488:
    {
        returnValue = F("Aachgasse");
        break;
    }
    case 489:
    {
        returnValue = F("Aachgrund");
        break;
    }
    case 490:
    {
        returnValue = F("Aachrain");
        break;
    }
    case 491:
    {
        returnValue = F("Aachstr.");
        break;
    }
    case 492:
    {
        returnValue = F("Aachtal");
        break;
    }
    case 493:
    {
        returnValue = F("Aachtalstr.");
        break;
    }
    case 494:
    {
        returnValue = F("Aachweg");
        break;
    }
    case 495:
    {
        returnValue = F("Aahweg");
        break;
    }
    case 496:
    {
        returnValue = F("Aakamp");
        break;
    }
    case 497:
    {
        returnValue = F("Aakerfährstr.");
        break;
    }
    case 498:
    {
        returnValue = F("Aakweg");
        break;
    }
    case 499:
    {
        returnValue = F("Aaland");
        break;
    }
    case 500:
    {
        returnValue = F("Aalbachstr.");
        break;
    }
    case 501:
    {
        returnValue = F("Aalbachtalstr.");
        break;
    }
    case 502:
    {
        returnValue = F("Aalbachweg");
        break;
    }
    case 503:
    {
        returnValue = F("Aalbeckestr.");
        break;
    }
    case 504:
    {
        returnValue = F("Aalborghof");
        break;
    }
    case 505:
    {
        returnValue = F("Aalborgring");
        break;
    }
    case 506:
    {
        returnValue = F("Aalborgstr.");
        break;
    }
    case 507:
    {
        returnValue = F("Aalbruch");
        break;
    }
    case 508:
    {
        returnValue = F("Aalbäumleweg");
        break;
    }
    case 509:
    {
        returnValue = F("Aalener Grenzweg");
        break;
    }
    case 510:
    {
        returnValue = F("Aalener Str.");
        break;
    }
    case 511:
    {
        returnValue = F("Aalenerweg");
        break;
    }
    case 512:
    {
        returnValue = F("Aalenwiesenweg");
        break;
    }
    case 513:
    {
        returnValue = F("Aalfang");
        break;
    }
    case 514:
    {
        returnValue = F("Aalfangpark");
        break;
    }
    case 515:
    {
        returnValue = F("Aalgang");
        break;
    }
    case 516:
    {
        returnValue = F("Aalgarten");
        break;
    }
    case 517:
    {
        returnValue = F("Aalgraben");
        break;
    }
    case 518:
    {
        returnValue = F("Aalgrund");
        break;
    }
    case 519:
    {
        returnValue = F("Aalheitengraben");
        break;
    }
    case 520:
    {
        returnValue = F("Aalhoop");
        break;
    }
    case 521:
    {
        returnValue = F("Aalichtstr.");
        break;
    }
    case 522:
    {
        returnValue = F("Aalkamp");
        break;
    }
    case 523:
    {
        returnValue = F("Aalkampsweg");
        break;
    }
    case 524:
    {
        returnValue = F("Aalkasten");
        break;
    }
    case 525:
    {
        returnValue = F("Aalkistenweg");
        break;
    }
    case 526:
    {
        returnValue = F("Aalkorb");
        break;
    }
    case 527:
    {
        returnValue = F("Aalkrautweg");
        break;
    }
    case 528:
    {
        returnValue = F("Aalort");
        break;
    }
    case 529:
    {
        returnValue = F("Aalreusenstr.");
        break;
    }
    case 530:
    {
        returnValue = F("Aalring");
        break;
    }
    case 531:
    {
        returnValue = F("Aalstecherstr.");
        break;
    }
    case 532:
    {
        returnValue = F("Aalstich");
        break;
    }
    case 533:
    {
        returnValue = F("Aalstieg");
        break;
    }
    case 534:
    {
        returnValue = F("Aalstr.");
        break;
    }
    case 535:
    {
        returnValue = F("Aalterallee");
        break;
    }
    case 536:
    {
        returnValue = F("Aaltien-Bennink-Str.");
        break;
    }
    case 537:
    {
        returnValue = F("Aaltrift");
        break;
    }
    case 538:
    {
        returnValue = F("Aaltukerei");
        break;
    }
    case 539:
    {
        returnValue = F("Aalvikstr.");
        break;
    }
    case 540:
    {
        returnValue = F("Aalweg");
        break;
    }
    case 541:
    {
        returnValue = F("Aalwisch");
        break;
    }
    case 542:
    {
        returnValue = F("Aalwischkoppel");
        break;
    }
    case 543:
    {
        returnValue = F("Aan Schniewind");
        break;
    }
    case 544:
    {
        returnValue = F("Aanepool");
        break;
    }
    case 545:
    {
        returnValue = F("Aantenbarger Weg");
        break;
    }
    case 546:
    {
        returnValue = F("Aantenweg");
        break;
    }
    case 547:
    {
        returnValue = F("Aaper Höhenweg");
        break;
    }
    case 548:
    {
        returnValue = F("Aaper Schneise");
        break;
    }
    case 549:
    {
        returnValue = F("Aaper Weg");
        break;
    }
    case 550:
    {
        returnValue = F("Aapstr.");
        break;
    }
    case 551:
    {
        returnValue = F("Aapweg");
        break;
    }
    case 552:
    {
        returnValue = F("Aarauer Str.");
        break;
    }
    case 553:
    {
        returnValue = F("Aarauer Weg");
        break;
    }
    case 554:
    {
        returnValue = F("Aaraustr.");
        break;
    }
    case 555:
    {
        returnValue = F("Aarbachtal");
        break;
    }
    case 556:
    {
        returnValue = F("Aarbecksheide");
        break;
    }
    case 557:
    {
        returnValue = F("Aarbergstr.");
        break;
    }
    case 558:
    {
        returnValue = F("Aarbergweg");
        break;
    }
    case 559:
    {
        returnValue = F("Aarblick");
        break;
    }
    case 560:
    {
        returnValue = F("Aarbrücke");
        break;
    }
    case 561:
    {
        returnValue = F("Aarestr.");
        break;
    }
    case 562:
    {
        returnValue = F("Aargauer Str.");
        break;
    }
    case 563:
    {
        returnValue = F("Aargauweg");
        break;
    }
    case 564:
    {
        returnValue = F("Aarhuser Str.");
        break;
    }
    case 565:
    {
        returnValue = F("Aarhushof");
        break;
    }
    case 566:
    {
        returnValue = F("Aarhusstr.");
        break;
    }
    case 567:
    {
        returnValue = F("Aarhusweg");
        break;
    }
    case 568:
    {
        returnValue = F("Aarleystr.");
        break;
    }
    case 569:
    {
        returnValue = F("Aarninkstr.");
        break;
    }
    case 570:
    {
        returnValue = F("Aaron-Peltz-Weg");
        break;
    }
    case 571:
    {
        returnValue = F("Aaron-Rieder-Str.");
        break;
    }
    case 572:
    {
        returnValue = F("Aarstr.");
        break;
    }
    case 573:
    {
        returnValue = F("Aartal Rad- und Wanderweg");
        break;
    }
    case 574:
    {
        returnValue = F("Aartalstr.");
        break;
    }
    case 575:
    {
        returnValue = F("Aartalweg");
        break;
    }
    case 576:
    {
        returnValue = F("Aarweg");
        break;
    }
    case 577:
    {
        returnValue = F("Aaröstr.");
        break;
    }
    case 578:
    {
        returnValue = F("Aasbruchweg");
        break;
    }
    case 579:
    {
        returnValue = F("Aasbütteler Weg");
        break;
    }
    case 580:
    {
        returnValue = F("Aasee-Wiesen");
        break;
    }
    case 581:
    {
        returnValue = F("Aaseewinkel");
        break;
    }
    case 582:
    {
        returnValue = F("Aasgrundstr.");
        break;
    }
    case 583:
    {
        returnValue = F("Aasgrundweg");
        break;
    }
    case 584:
    {
        returnValue = F("Aaskuhle");
        break;
    }
    case 585:
    {
        returnValue = F("Aaskuhlenwweg");
        break;
    }
    case 586:
    {
        returnValue = F("Aasredde");
        break;
    }
    case 587:
    {
        returnValue = F("Aastannenweg");
        break;
    }
    case 588:
    {
        returnValue = F("Aastr.");
        break;
    }
    case 589:
    {
        returnValue = F("Aastwiete");
        break;
    }
    case 590:
    {
        returnValue = F("Aatalstr.");
        break;
    }
    case 591:
    {
        returnValue = F("Aatalweg");
        break;
    }
    case 592:
    {
        returnValue = F("Aaweg");
        break;
    }
    case 593:
    {
        returnValue = F("Aawiesen");
        break;
    }
    case 594:
    {
        returnValue = F("Aawiesenpark");
        break;
    }
    case 595:
    {
        returnValue = F("Ab-Hardt-Weg");
        break;
    }
    case 596:
    {
        returnValue = F("Abacostr.");
        break;
    }
    case 597:
    {
        returnValue = F("Abandoned Railway");
        break;
    }
    case 598:
    {
        returnValue = F("AbbVie-Allee");
        break;
    }
    case 599:
    {
        returnValue = F("Abbacher Weg");
        break;
    }
    case 600:
    {
        returnValue = F("Abbachstr.");
        break;
    }
    case 601:
    {
        returnValue = F("Abbau");
        break;
    }
    case 602:
    {
        returnValue = F("Abbau Lanken");
        break;
    }
    case 603:
    {
        returnValue = F("Abbauer Weg");
        break;
    }
    case 604:
    {
        returnValue = F("Abbauerneck");
        break;
    }
    case 605:
    {
        returnValue = F("Abbauernring");
        break;
    }
    case 606:
    {
        returnValue = F("Abbauernweg");
        break;
    }
    case 607:
    {
        returnValue = F("Abbe-David-Str.");
        break;
    }
    case 608:
    {
        returnValue = F("Abbecke");
        break;
    }
    case 609:
    {
        returnValue = F("Abbecker Str.");
        break;
    }
    case 610:
    {
        returnValue = F("Abbegrund");
        break;
    }
    case 611:
    {
        returnValue = F("Abbehauser Str.");
        break;
    }
    case 612:
    {
        returnValue = F("Abbehauser Weg");
        break;
    }
    case 613:
    {
        returnValue = F("Abbehauser Wischweg");
        break;
    }
    case 614:
    {
        returnValue = F("Abbehausergroden");
        break;
    }
    case 615:
    {
        returnValue = F("Abbeile");
        break;
    }
    case 616:
    {
        returnValue = F("Abbeiler Weg");
        break;
    }
    case 617:
    {
        returnValue = F("Abbemühlen");
        break;
    }
    case 618:
    {
        returnValue = F("Abbenburg");
        break;
    }
    case 619:
    {
        returnValue = F("Abbendiekshof");
        break;
    }
    case 620:
    {
        returnValue = F("Abbendieksweg");
        break;
    }
    case 621:
    {
        returnValue = F("Abbendorf");
        break;
    }
    case 622:
    {
        returnValue = F("Abbendorfer Dorfstr.");
        break;
    }
    case 623:
    {
        returnValue = F("Abbendorfer Str.");
        break;
    }
    case 624:
    {
        returnValue = F("Abbenflether Hafenstr.");
        break;
    }
    case 625:
    {
        returnValue = F("Abbenhauser Kamp");
        break;
    }
    case 626:
    {
        returnValue = F("Abbenohler Weg");
        break;
    }
    case 627:
    {
        returnValue = F("Abbenrode, Mühlenweg");
        break;
    }
    case 628:
    {
        returnValue = F("Abbenroder Str.");
        break;
    }
    case 629:
    {
        returnValue = F("Abbenroth");
        break;
    }
    case 630:
    {
        returnValue = F("Abbenrother Weg");
        break;
    }
    case 631:
    {
        returnValue = F("Abbenröder Stieg");
        break;
    }
    case 632:
    {
        returnValue = F("Abbensener Weg");
        break;
    }
    case 633:
    {
        returnValue = F("Abbenser Str.");
        break;
    }
    case 634:
    {
        returnValue = F("Abbentalsweg");
        break;
    }
    case 635:
    {
        returnValue = F("Abbentheren");
        break;
    }
    case 636:
    {
        returnValue = F("Abbentorstr.");
        break;
    }
    case 637:
    {
        returnValue = F("Abbentorswallstr.");
        break;
    }
    case 638:
    {
        returnValue = F("Abbergerstr.");
        break;
    }
    case 639:
    {
        returnValue = F("Abbesbütteler Str.");
        break;
    }
    case 640:
    {
        returnValue = F("Abbestr.");
        break;
    }
    case 641:
    {
        returnValue = F("Abbevillestr.");
        break;
    }
    case 642:
    {
        returnValue = F("Abbioweg");
        break;
    }
    case 643:
    {
        returnValue = F("Abboweg");
        break;
    }
    case 644:
    {
        returnValue = F("Abdeck");
        break;
    }
    case 645:
    {
        returnValue = F("Abdenastr.");
        break;
    }
    case 646:
    {
        returnValue = F("Abderodaer Weg");
        break;
    }
    case 647:
    {
        returnValue = F("Abdinghof");
        break;
    }
    case 648:
    {
        returnValue = F("Abdinghofstr.");
        break;
    }
    case 649:
    {
        returnValue = F("Abdinghofweg");
        break;
    }
    case 650:
    {
        returnValue = F("Abeggstr.");
        break;
    }
    case 651:
    {
        returnValue = F("Abekenstr.");
        break;
    }
    case 652:
    {
        returnValue = F("Abel-Becker-Weg");
        break;
    }
    case 653:
    {
        returnValue = F("Abel-Tasman-Str.");
        break;
    }
    case 654:
    {
        returnValue = F("Abel-Thivant-Str.");
        break;
    }
    case 655:
    {
        returnValue = F("Abel-Twiete");
        break;
    }
    case 656:
    {
        returnValue = F("Abelauf");
        break;
    }
    case 657:
    {
        returnValue = F("Abelbachstr.");
        break;
    }
    case 658:
    {
        returnValue = F("Abelbecker Weg");
        break;
    }
    case 659:
    {
        returnValue = F("Abele Gangerl");
        break;
    }
    case 660:
    {
        returnValue = F("Abelers Kamp");
        break;
    }
    case 661:
    {
        returnValue = F("Abelestr.");
        break;
    }
    case 662:
    {
        returnValue = F("Abelhain");
        break;
    }
    case 663:
    {
        returnValue = F("Abelhorster Str.");
        break;
    }
    case 664:
    {
        returnValue = F("Abelhorster Weg");
        break;
    }
    case 665:
    {
        returnValue = F("Abelingstr.");
        break;
    }
    case 666:
    {
        returnValue = F("Abelinweg");
        break;
    }
    case 667:
    {
        returnValue = F("Abelke-Bleken-Ring");
        break;
    }
    case 668:
    {
        returnValue = F("Abellstr.");
        break;
    }
    case 669:
    {
        returnValue = F("Abelmannstr.");
        break;
    }
    case 670:
    {
        returnValue = F("Abelmeyersweg");
        break;
    }
    case 671:
    {
        returnValue = F("Abelnkarre");
        break;
    }
    case 672:
    {
        returnValue = F("Abelnweg");
        break;
    }
    case 673:
    {
        returnValue = F("Abelsbergsteige");
        break;
    }
    case 674:
    {
        returnValue = F("Abelsbergstr.");
        break;
    }
    case 675:
    {
        returnValue = F("Abelsbergweg");
        break;
    }
    case 676:
    {
        returnValue = F("Abelsgasse");
        break;
    }
    case 677:
    {
        returnValue = F("Abelshofweg");
        break;
    }
    case 678:
    {
        returnValue = F("Abelskamp");
        break;
    }
    case 679:
    {
        returnValue = F("Abelsnaaf");
        break;
    }
    case 680:
    {
        returnValue = F("Abelsteg");
        break;
    }
    case 681:
    {
        returnValue = F("Abelstr.");
        break;
    }
    case 682:
    {
        returnValue = F("Abelsweg");
        break;
    }
    case 683:
    {
        returnValue = F("Abeltshausen");
        break;
    }
    case 684:
    {
        returnValue = F("Abelweg");
        break;
    }
    case 685:
    {
        returnValue = F("Abenberger Str.");
        break;
    }
    case 686:
    {
        returnValue = F("Abenberger Wald");
        break;
    }
    case 687:
    {
        returnValue = F("Abenberger Weg");
        break;
    }
    case 688:
    {
        returnValue = F("Abend");
        break;
    }
    case 689:
    {
        returnValue = F("Abendbergweg");
        break;
    }
    case 690:
    {
        returnValue = F("Abendener Str.");
        break;
    }
    case 691:
    {
        returnValue = F("Abendfeld");
        break;
    }
    case 692:
    {
        returnValue = F("Abendgasse");
        break;
    }
    case 693:
    {
        returnValue = F("Abendgrundweg");
        break;
    }
    case 694:
    {
        returnValue = F("Abendhalde");
        break;
    }
    case 695:
    {
        returnValue = F("Abendkamp");
        break;
    }
    case 696:
    {
        returnValue = F("Abendleite");
        break;
    }
    case 697:
    {
        returnValue = F("Abendleitenweg");
        break;
    }
    case 698:
    {
        returnValue = F("Abendlinie");
        break;
    }
    case 699:
    {
        returnValue = F("Abendrade");
        break;
    }
    case 700:
    {
        returnValue = F("Abendrot");
        break;
    }
    case 701:
    {
        returnValue = F("Abendroth");
        break;
    }
    case 702:
    {
        returnValue = F("Abendroth-Brücke");
        break;
    }
    case 703:
    {
        returnValue = F("Abendrothstr.");
        break;
    }
    case 704:
    {
        returnValue = F("Abendrothsweg");
        break;
    }
    case 705:
    {
        returnValue = F("Abendrotstr.");
        break;
    }
    case 706:
    {
        returnValue = F("Abendrotsweg");
        break;
    }
    case 707:
    {
        returnValue = F("Abendröte");
        break;
    }
    case 708:
    {
        returnValue = F("Abendröthe");
        break;
    }
    case 709:
    {
        returnValue = F("Abendschneise");
        break;
    }
    case 710:
    {
        returnValue = F("Abendseglerweg");
        break;
    }
    case 711:
    {
        returnValue = F("Abendseite");
        break;
    }
    case 712:
    {
        returnValue = F("Abendsonne");
        break;
    }
    case 713:
    {
        returnValue = F("Abendstern");
        break;
    }
    case 714:
    {
        returnValue = F("Abendstr.");
        break;
    }
    case 715:
    {
        returnValue = F("Abendtal");
        break;
    }
    case 716:
    {
        returnValue = F("Abendtalweg");
        break;
    }
    case 717:
    {
        returnValue = F("Abendwaldweg");
        break;
    }
    case 718:
    {
        returnValue = F("Abendweide");
        break;
    }
    case 719:
    {
        returnValue = F("Abendwiesenweg");
        break;
    }
    case 720:
    {
        returnValue = F("Abenheimer Hohl");
        break;
    }
    case 721:
    {
        returnValue = F("Abenheimer Landstr.");
        break;
    }
    case 722:
    {
        returnValue = F("Abenheimer Str.");
        break;
    }
    case 723:
    {
        returnValue = F("Abenholzweg");
        break;
    }
    case 724:
    {
        returnValue = F("Abens");
        break;
    }
    case 725:
    {
        returnValue = F("Abensberger Str.");
        break;
    }
    case 726:
    {
        returnValue = F("Abensberger Weg");
        break;
    }
    case 727:
    {
        returnValue = F("Abensbergerstr.");
        break;
    }
    case 728:
    {
        returnValue = F("Abensbergstr.");
        break;
    }
    case 729:
    {
        returnValue = F("Abensblick");
        break;
    }
    case 730:
    {
        returnValue = F("Abenser Str.");
        break;
    }
    case 731:
    {
        returnValue = F("Abensquellstr.");
        break;
    }
    case 732:
    {
        returnValue = F("Abensstr.");
        break;
    }
    case 733:
    {
        returnValue = F("Abenstalstr.");
        break;
    }
    case 734:
    {
        returnValue = F("Abensweg");
        break;
    }
    case 735:
    {
        returnValue = F("Abenteuer Golfanlage");
        break;
    }
    case 736:
    {
        returnValue = F("Abenteuerpark");
        break;
    }
    case 737:
    {
        returnValue = F("Abenteuerpfad");
        break;
    }
    case 738:
    {
        returnValue = F("Abenteuerspielplatz");
        break;
    }
    case 739:
    {
        returnValue = F("Abenteuerspielplatz Mackenrode");
        break;
    }
    case 740:
    {
        returnValue = F("Abenteuerweg");
        break;
    }
    case 741:
    {
        returnValue = F("Abenthumstr.");
        break;
    }
    case 742:
    {
        returnValue = F("Aberdeenpark");
        break;
    }
    case 743:
    {
        returnValue = F("Aberfelds Gäßchen");
        break;
    }
    case 744:
    {
        returnValue = F("Abergavennystr.");
        break;
    }
    case 745:
    {
        returnValue = F("Abergstr.");
        break;
    }
    case 746:
    {
        returnValue = F("Abergweg");
        break;
    }
    case 747:
    {
        returnValue = F("Aberland");
        break;
    }
    case 748:
    {
        returnValue = F("Aberlering");
        break;
    }
    case 749:
    {
        returnValue = F("Aberlestr.");
        break;
    }
    case 750:
    {
        returnValue = F("Aberlin-Jörg-Str.");
        break;
    }
    case 751:
    {
        returnValue = F("Aberlinstr.");
        break;
    }
    case 752:
    {
        returnValue = F("Abernweg");
        break;
    }
    case 753:
    {
        returnValue = F("Abersberg");
        break;
    }
    case 754:
    {
        returnValue = F("Abersberger Str.");
        break;
    }
    case 755:
    {
        returnValue = F("Abersdorf");
        break;
    }
    case 756:
    {
        returnValue = F("Abersdorfer Str.");
        break;
    }
    case 757:
    {
        returnValue = F("Abersfelder Hauptstr.");
        break;
    }
    case 758:
    {
        returnValue = F("Abersfelder Str.");
        break;
    }
    case 759:
    {
        returnValue = F("Aberthamer Str.");
        break;
    }
    case 760:
    {
        returnValue = F("Aberthamerstr.");
        break;
    }
    case 761:
    {
        returnValue = F("Abertstr.");
        break;
    }
    case 762:
    {
        returnValue = F("Aberzhausen");
        break;
    }
    case 763:
    {
        returnValue = F("Abetzstr.");
        break;
    }
    case 764:
    {
        returnValue = F("Abfahrt Feuerwehr");
        break;
    }
    case 765:
    {
        returnValue = F("Abfahrt Grolland");
        break;
    }
    case 766:
    {
        returnValue = F("Abfallsteg");
        break;
    }
    case 767:
    {
        returnValue = F("Abgegrabenfelde");
        break;
    }
    case 768:
    {
        returnValue = F("Abgunst");
        break;
    }
    case 769:
    {
        returnValue = F("Abgunstweg");
        break;
    }
    case 770:
    {
        returnValue = F("Abhauweg");
        break;
    }
    case 771:
    {
        returnValue = F("Abhorner Str.");
        break;
    }
    case 772:
    {
        returnValue = F("Abhorner Weg");
        break;
    }
    case 773:
    {
        returnValue = F("Abich-Thiele-Str.");
        break;
    }
    case 774:
    {
        returnValue = F("Abichstr.");
        break;
    }
    case 775:
    {
        returnValue = F("Abickhafer Dorfstr.");
        break;
    }
    case 776:
    {
        returnValue = F("Abickhafer Feldweg");
        break;
    }
    case 777:
    {
        returnValue = F("Abigstr.");
        break;
    }
    case 778:
    {
        returnValue = F("Abingdon-Str.");
        break;
    }
    case 779:
    {
        returnValue = F("Abke-Jansen-Weg");
        break;
    }
    case 780:
    {
        returnValue = F("Abkürzung");
        break;
    }
    case 781:
    {
        returnValue = F("Abkürzung P11");
        break;
    }
    case 782:
    {
        returnValue = F("Abkürzung Zaunkönig");
        break;
    }
    case 783:
    {
        returnValue = F("Abkürzung Zollstock-Loipe");
        break;
    }
    case 784:
    {
        returnValue = F("Ablachblick");
        break;
    }
    case 785:
    {
        returnValue = F("Ablachbrücke");
        break;
    }
    case 786:
    {
        returnValue = F("Ablacher Str.");
        break;
    }
    case 787:
    {
        returnValue = F("Ablacher Weg");
        break;
    }
    case 788:
    {
        returnValue = F("Ablachsteg");
        break;
    }
    case 789:
    {
        returnValue = F("Ablachstr.");
        break;
    }
    case 790:
    {
        returnValue = F("Ablachtalstr.");
        break;
    }
    case 791:
    {
        returnValue = F("Ablachweg");
        break;
    }
    case 792:
    {
        returnValue = F("Abladeflügel");
        break;
    }
    case 793:
    {
        returnValue = F("Ablage");
        break;
    }
    case 794:
    {
        returnValue = F("Ablage Nebelsee");
        break;
    }
    case 795:
    {
        returnValue = F("Ablageweg");
        break;
    }
    case 796:
    {
        returnValue = F("Ablandstr.");
        break;
    }
    case 797:
    {
        returnValue = F("Ablass");
        break;
    }
    case 798:
    {
        returnValue = F("Ablassgasse");
        break;
    }
    case 799:
    {
        returnValue = F("Ablassweg");
        break;
    }
    case 800:
    {
        returnValue = F("Ablaßer Str.");
        break;
    }
    case 801:
    {
        returnValue = F("Ablaßweg");
        break;
    }
    case 802:
    {
        returnValue = F("Ablaßwiesen");
        break;
    }
    case 803:
    {
        returnValue = F("Ableitner Str.");
        break;
    }
    case 804:
    {
        returnValue = F("Ablestr.");
        break;
    }
    case 805:
    {
        returnValue = F("Abliser Str.");
        break;
    }
    case 806:
    {
        returnValue = F("Abloner-Garten");
        break;
    }
    case 807:
    {
        returnValue = F("Ablosweg");
        break;
    }
    case 808:
    {
        returnValue = F("Abnobastr.");
        break;
    }
    case 809:
    {
        returnValue = F("Aboldstr.");
        break;
    }
    case 810:
    {
        returnValue = F("Aboretum-Park Härle");
        break;
    }
    case 811:
    {
        returnValue = F("Abraham-Adler-Str.");
        break;
    }
    case 812:
    {
        returnValue = F("Abraham-Hering-Str.");
        break;
    }
    case 813:
    {
        returnValue = F("Abraham-Herz-Str.");
        break;
    }
    case 814:
    {
        returnValue = F("Abraham-Höxter-Str.");
        break;
    }
    case 815:
    {
        returnValue = F("Abraham-Jacobi-Str.");
        break;
    }
    case 816:
    {
        returnValue = F("Abraham-Kern-Str.");
        break;
    }
    case 817:
    {
        returnValue = F("Abraham-Lincoln-Allee");
        break;
    }
    case 818:
    {
        returnValue = F("Abraham-Lincoln-Park");
        break;
    }
    case 819:
    {
        returnValue = F("Abraham-Lincoln-Str.");
        break;
    }
    case 820:
    {
        returnValue = F("Abraham-Lucas-Str.");
        break;
    }
    case 821:
    {
        returnValue = F("Abraham-Megerle-Str.");
        break;
    }
    case 822:
    {
        returnValue = F("Abraham-Straus-Str.");
        break;
    }
    case 823:
    {
        returnValue = F("Abraham-Weil-Str.");
        break;
    }
    case 824:
    {
        returnValue = F("Abraham-Werner-Str.");
        break;
    }
    case 825:
    {
        returnValue = F("Abraham-Wolf-Str.");
        break;
    }
    case 826:
    {
        returnValue = F("Abraham-Wolffs-Str.");
        break;
    }
    case 827:
    {
        returnValue = F("Abraham-a-Sancta-Clara-Str.");
        break;
    }
    case 828:
    {
        returnValue = F("Abraham-von-Schönberg-Str.");
        break;
    }
    case 829:
    {
        returnValue = F("Abrahamsallee");
        break;
    }
    case 830:
    {
        returnValue = F("Abrahamsgrund");
        break;
    }
    case 831:
    {
        returnValue = F("Abrahamsrain");
        break;
    }
    case 832:
    {
        returnValue = F("Abrahamstal");
        break;
    }
    case 833:
    {
        returnValue = F("Abrahamstr.");
        break;
    }
    case 834:
    {
        returnValue = F("Abrahamsweg");
        break;
    }
    case 835:
    {
        returnValue = F("Abrahamweg");
        break;
    }
    case 836:
    {
        returnValue = F("Abreiweg");
        break;
    }
    case 837:
    {
        returnValue = F("Abreschviller Str.");
        break;
    }
    case 838:
    {
        returnValue = F("Abrichstr.");
        break;
    }
    case 839:
    {
        returnValue = F("Absang");
        break;
    }
    case 840:
    {
        returnValue = F("Absangerstr.");
        break;
    }
    case 841:
    {
        returnValue = F("Absbachhöhenweg");
        break;
    }
    case 842:
    {
        returnValue = F("Absbachstr.");
        break;
    }
    case 843:
    {
        returnValue = F("Abschiedskoppel");
        break;
    }
    case 844:
    {
        returnValue = F("Abschnede");
        break;
    }
    case 845:
    {
        returnValue = F("Abschnitt Wanderweg 7");
        break;
    }
    case 846:
    {
        returnValue = F("Abselstr.");
        break;
    }
    case 847:
    {
        returnValue = F("Absenreuterweg");
        break;
    }
    case 848:
    {
        returnValue = F("Abser Deich");
        break;
    }
    case 849:
    {
        returnValue = F("Abser Hellmer");
        break;
    }
    case 850:
    {
        returnValue = F("Abser Sand");
        break;
    }
    case 851:
    {
        returnValue = F("Abser Str.");
        break;
    }
    case 852:
    {
        returnValue = F("Abserhörne");
        break;
    }
    case 853:
    {
        returnValue = F("Abshof");
        break;
    }
    case 854:
    {
        returnValue = F("Abshofstr.");
        break;
    }
    case 855:
    {
        returnValue = F("Abstatter Str.");
        break;
    }
    case 856:
    {
        returnValue = F("Abstatter Weg");
        break;
    }
    case 857:
    {
        returnValue = F("Abstedt");
        break;
    }
    case 858:
    {
        returnValue = F("Abstellfläche für Hänger");
        break;
    }
    case 859:
    {
        returnValue = F("Abstetter");
        break;
    }
    case 860:
    {
        returnValue = F("Abstieg Felsenmühle");
        break;
    }
    case 861:
    {
        returnValue = F("Abstieg zur Rathsberger Wildniss");
        break;
    }
    case 862:
    {
        returnValue = F("Abstoß");
        break;
    }
    case 863:
    {
        returnValue = F("Abstäberhof");
        break;
    }
    case 864:
    {
        returnValue = F("Abt Konrad-Kner-Str.");
        break;
    }
    case 865:
    {
        returnValue = F("Abt-Adalbert-Weg");
        break;
    }
    case 866:
    {
        returnValue = F("Abt-Aemilius-Str.");
        break;
    }
    case 867:
    {
        returnValue = F("Abt-Aigler-Weg");
        break;
    }
    case 868:
    {
        returnValue = F("Abt-Albert-Hausner-Str.");
        break;
    }
    case 869:
    {
        returnValue = F("Abt-Albert-Str.");
        break;
    }
    case 870:
    {
        returnValue = F("Abt-Albert-Weg");
        break;
    }
    case 871:
    {
        returnValue = F("Abt-Andreas-Lang-Str.");
        break;
    }
    case 872:
    {
        returnValue = F("Abt-Angehrn-Str.");
        break;
    }
    case 873:
    {
        returnValue = F("Abt-Anno-Str.");
        break;
    }
    case 874:
    {
        returnValue = F("Abt-Anselm-Str.");
        break;
    }
    case 875:
    {
        returnValue = F("Abt-Anselm-Weg");
        break;
    }
    case 876:
    {
        returnValue = F("Abt-Bachmeyer-Str.");
        break;
    }
    case 877:
    {
        returnValue = F("Abt-Beda-Str.");
        break;
    }
    case 878:
    {
        returnValue = F("Abt-Benedikt-Str.");
        break;
    }
    case 879:
    {
        returnValue = F("Abt-Benedikt-Weg");
        break;
    }
    case 880:
    {
        returnValue = F("Abt-Berchtold-Str.");
        break;
    }
    case 881:
    {
        returnValue = F("Abt-Bernhard-Str.");
        break;
    }
    case 882:
    {
        returnValue = F("Abt-Bernhard-Weg");
        break;
    }
    case 883:
    {
        returnValue = F("Abt-Berno-Str.");
        break;
    }
    case 884:
    {
        returnValue = F("Abt-Bertho-Str.");
        break;
    }
    case 885:
    {
        returnValue = F("Abt-Bessel-Str.");
        break;
    }
    case 886:
    {
        returnValue = F("Abt-Bicker-Str.");
        break;
    }
    case 887:
    {
        returnValue = F("Abt-Bischof-Spies-Str.");
        break;
    }
    case 888:
    {
        returnValue = F("Abt-Blöchinger Str.");
        break;
    }
    case 889:
    {
        returnValue = F("Abt-Bootz-Str.");
        break;
    }
    case 890:
    {
        returnValue = F("Abt-Brandt-Str.");
        break;
    }
    case 891:
    {
        returnValue = F("Abt-Burkard-Str.");
        break;
    }
    case 892:
    {
        returnValue = F("Abt-Bürgi-Str.");
        break;
    }
    case 893:
    {
        returnValue = F("Abt-Candidus-Str.");
        break;
    }
    case 894:
    {
        returnValue = F("Abt-Castus-Str.");
        break;
    }
    case 895:
    {
        returnValue = F("Abt-Christoph-Str.");
        break;
    }
    case 896:
    {
        returnValue = F("Abt-Cloos-Weg");
        break;
    }
    case 897:
    {
        returnValue = F("Abt-Coelestin-Str.");
        break;
    }
    case 898:
    {
        returnValue = F("Abt-Columban-Weg");
        break;
    }
    case 899:
    {
        returnValue = F("Abt-Corbinian-Str.");
        break;
    }
    case 900:
    {
        returnValue = F("Abt-Cölestin Str.");
        break;
    }
    case 901:
    {
        returnValue = F("Abt-Cölestin-Str.");
        break;
    }
    case 902:
    {
        returnValue = F("Abt-Danner-Str.");
        break;
    }
    case 903:
    {
        returnValue = F("Abt-Degen-Str.");
        break;
    }
    case 904:
    {
        returnValue = F("Abt-Dennerlein-Str.");
        break;
    }
    case 905:
    {
        returnValue = F("Abt-Denzel-Weg");
        break;
    }
    case 906:
    {
        returnValue = F("Abt-Desing-Str.");
        break;
    }
    case 907:
    {
        returnValue = F("Abt-Detten-Str.");
        break;
    }
    case 908:
    {
        returnValue = F("Abt-Dilger-Weg");
        break;
    }
    case 909:
    {
        returnValue = F("Abt-Dobler-Str.");
        break;
    }
    case 910:
    {
        returnValue = F("Abt-Doser-Weg");
        break;
    }
    case 911:
    {
        returnValue = F("Abt-Drutmar-Str.");
        break;
    }
    case 912:
    {
        returnValue = F("Abt-Dullinger-Weg");
        break;
    }
    case 913:
    {
        returnValue = F("Abt-Düring-Str.");
        break;
    }
    case 914:
    {
        returnValue = F("Abt-Eberhard-Str.");
        break;
    }
    case 915:
    {
        returnValue = F("Abt-Eckhard-Str.");
        break;
    }
    case 916:
    {
        returnValue = F("Abt-Edmund-Str.");
        break;
    }
    case 917:
    {
        returnValue = F("Abt-Eigil-Str.");
        break;
    }
    case 918:
    {
        returnValue = F("Abt-Emanuel-Str.");
        break;
    }
    case 919:
    {
        returnValue = F("Abt-Ernst-Str.");
        break;
    }
    case 920:
    {
        returnValue = F("Abt-Eugen-Fiderer-Str.");
        break;
    }
    case 921:
    {
        returnValue = F("Abt-Eugen-Montag-Str.");
        break;
    }
    case 922:
    {
        returnValue = F("Abt-Farcher-Weg");
        break;
    }
    case 923:
    {
        returnValue = F("Abt-Fehr-Str.");
        break;
    }
    case 924:
    {
        returnValue = F("Abt-Ferdinand-Str.");
        break;
    }
    case 925:
    {
        returnValue = F("Abt-Fischer-Str.");
        break;
    }
    case 926:
    {
        returnValue = F("Abt-Frick-Str.");
        break;
    }
    case 927:
    {
        returnValue = F("Abt-Fritz-Weg");
        break;
    }
    case 928:
    {
        returnValue = F("Abt-Fuchs-Str.");
        break;
    }
    case 929:
    {
        returnValue = F("Abt-Fulrad-Brücke");
        break;
    }
    case 930:
    {
        returnValue = F("Abt-Fulrad-Str.");
        break;
    }
    case 931:
    {
        returnValue = F("Abt-Führer-Str.");
        break;
    }
    case 932:
    {
        returnValue = F("Abt-Gaiser-Str.");
        break;
    }
    case 933:
    {
        returnValue = F("Abt-Gaisser-Weg");
        break;
    }
    case 934:
    {
        returnValue = F("Abt-Gallus-Str.");
        break;
    }
    case 935:
    {
        returnValue = F("Abt-Gaßner-Str.");
        break;
    }
    case 936:
    {
        returnValue = F("Abt-Gero-Str.");
        break;
    }
    case 937:
    {
        returnValue = F("Abt-Gilbert-Michl-Str.");
        break;
    }
    case 938:
    {
        returnValue = F("Abt-Glunk-Weg");
        break;
    }
    case 939:
    {
        returnValue = F("Abt-Goßwin-Str.");
        break;
    }
    case 940:
    {
        returnValue = F("Abt-Gubitz-Str.");
        break;
    }
    case 941:
    {
        returnValue = F("Abt-Hadamar-Str.");
        break;
    }
    case 942:
    {
        returnValue = F("Abt-Hafner-Str.");
        break;
    }
    case 943:
    {
        returnValue = F("Abt-Hatto-Str.");
        break;
    }
    case 944:
    {
        returnValue = F("Abt-Hauck-Str.");
        break;
    }
    case 945:
    {
        returnValue = F("Abt-Heinrich-Str.");
        break;
    }
    case 946:
    {
        returnValue = F("Abt-Hemmerlein-Str.");
        break;
    }
    case 947:
    {
        returnValue = F("Abt-Hermann-Str.");
        break;
    }
    case 948:
    {
        returnValue = F("Abt-Hermann-Vogler-Str.");
        break;
    }
    case 949:
    {
        returnValue = F("Abt-Hermann-Weg");
        break;
    }
    case 950:
    {
        returnValue = F("Abt-Herwegen-Str.");
        break;
    }
    case 951:
    {
        returnValue = F("Abt-Heun-Str.");
        break;
    }
    case 952:
    {
        returnValue = F("Abt-Heyno-Str.");
        break;
    }
    case 953:
    {
        returnValue = F("Abt-Heß-Str.");
        break;
    }
    case 954:
    {
        returnValue = F("Abt-Honorat-Kolb-Weg");
        break;
    }
    case 955:
    {
        returnValue = F("Abt-Honorat-Str.");
        break;
    }
    case 956:
    {
        returnValue = F("Abt-Horchem-Str.");
        break;
    }
    case 957:
    {
        returnValue = F("Abt-Hugo-Lang-Str.");
        break;
    }
    case 958:
    {
        returnValue = F("Abt-Hugo-Str.");
        break;
    }
    case 959:
    {
        returnValue = F("Abt-Hugo-Straſse");
        break;
    }
    case 960:
    {
        returnValue = F("Abt-Hyller-Str.");
        break;
    }
    case 961:
    {
        returnValue = F("Abt-Häfele-Str.");
        break;
    }
    case 962:
    {
        returnValue = F("Abt-Höckelmann-Weg");
        break;
    }
    case 963:
    {
        returnValue = F("Abt-Hörl-Weg");
        break;
    }
    case 964:
    {
        returnValue = F("Abt-Irtel-Str.");
        break;
    }
    case 965:
    {
        returnValue = F("Abt-Jerusalem-Str.");
        break;
    }
    case 966:
    {
        returnValue = F("Abt-Johann-Str.");
        break;
    }
    case 967:
    {
        returnValue = F("Abt-Johannes-Höck-Str.");
        break;
    }
    case 968:
    {
        returnValue = F("Abt-Johannes-Str.");
        break;
    }
    case 969:
    {
        returnValue = F("Abt-Joscio-Weg");
        break;
    }
    case 970:
    {
        returnValue = F("Abt-Joseph-Str.");
        break;
    }
    case 971:
    {
        returnValue = F("Abt-Kaspar-Str.");
        break;
    }
    case 972:
    {
        returnValue = F("Abt-Keller-Str.");
        break;
    }
    case 973:
    {
        returnValue = F("Abt-Kilian-Str.");
        break;
    }
    case 974:
    {
        returnValue = F("Abt-Kinbacher-Str.");
        break;
    }
    case 975:
    {
        returnValue = F("Abt-Kindelmann-Str.");
        break;
    }
    case 976:
    {
        returnValue = F("Abt-Kleber-Str.");
        break;
    }
    case 977:
    {
        returnValue = F("Abt-Kloos-Str.");
        break;
    }
    case 978:
    {
        returnValue = F("Abt-Knauer-Str.");
        break;
    }
    case 979:
    {
        returnValue = F("Abt-Knittel-Allee");
        break;
    }
    case 980:
    {
        returnValue = F("Abt-Knittel-Str.");
        break;
    }
    case 981:
    {
        returnValue = F("Abt-Konrad-Kner-Str.");
        break;
    }
    case 982:
    {
        returnValue = F("Abt-Konrad-Str.");
        break;
    }
    case 983:
    {
        returnValue = F("Abt-Kruse-Weg");
        break;
    }
    case 984:
    {
        returnValue = F("Abt-Kuno-Str.");
        break;
    }
    case 985:
    {
        returnValue = F("Abt-Königsdorfer-Str.");
        break;
    }
    case 986:
    {
        returnValue = F("Abt-Külsheimer-Str.");
        break;
    }
    case 987:
    {
        returnValue = F("Abt-Leiterbach-Str.");
        break;
    }
    case 988:
    {
        returnValue = F("Abt-Leonhard-Weg");
        break;
    }
    case 989:
    {
        returnValue = F("Abt-Lienhardt-Weg");
        break;
    }
    case 990:
    {
        returnValue = F("Abt-Linienweg");
        break;
    }
    case 991:
    {
        returnValue = F("Abt-Luke-Str.");
        break;
    }
    case 992:
    {
        returnValue = F("Abt-Mahlmeister-Str.");
        break;
    }
    case 993:
    {
        returnValue = F("Abt-Marianus-Mayr-Str.");
        break;
    }
    case 994:
    {
        returnValue = F("Abt-Marius-Weg");
        break;
    }
    case 995:
    {
        returnValue = F("Abt-Martin-Ertle-Weg");
        break;
    }
    case 996:
    {
        returnValue = F("Abt-Mauch-Str.");
        break;
    }
    case 997:
    {
        returnValue = F("Abt-Maurus-Kaufmann-Weg");
        break;
    }
    case 998:
    {
        returnValue = F("Abt-Maurus-Str.");
        break;
    }
    case 999:
    {
        returnValue = F("Abt-Maurus-Weg");
        break;
    }
    case 1000:
    {
        returnValue = F("Abt-Mayr-Str.");
        break;
    }
    case 1001:
    {
        returnValue = F("Abt-Meiler-Str.");
        break;
    }
    case 1002:
    {
        returnValue = F("Abt-Meister-Str.");
        break;
    }
    case 1003:
    {
        returnValue = F("Abt-Mermos-Str.");
        break;
    }
    case 1004:
    {
        returnValue = F("Abt-Michael-Str.");
        break;
    }
    case 1005:
    {
        returnValue = F("Abt-Michler-Str.");
        break;
    }
    case 1006:
    {
        returnValue = F("Abt-Modest-Platz");
        break;
    }
    case 1007:
    {
        returnValue = F("Abt-Molitor-Str.");
        break;
    }
    case 1008:
    {
        returnValue = F("Abt-Montag-Str.");
        break;
    }
    case 1009:
    {
        returnValue = F("Abt-Moosmüller-Str.");
        break;
    }
    case 1010:
    {
        returnValue = F("Abt-Moser-Str.");
        break;
    }
    case 1011:
    {
        returnValue = F("Abt-Möhler-Str.");
        break;
    }
    case 1012:
    {
        returnValue = F("Abt-Mösinger-Str.");
        break;
    }
    case 1013:
    {
        returnValue = F("Abt-Müller-Str.");
        break;
    }
    case 1014:
    {
        returnValue = F("Abt-Neisser-Weg");
        break;
    }
    case 1015:
    {
        returnValue = F("Abt-Niblung-Str.");
        break;
    }
    case 1016:
    {
        returnValue = F("Abt-Niklas-Str.");
        break;
    }
    case 1017:
    {
        returnValue = F("Abt-Nikolaus-Pfad");
        break;
    }
    case 1018:
    {
        returnValue = F("Abt-Nikolaus-Str.");
        break;
    }
    case 1019:
    {
        returnValue = F("Abt-Oberleitner-Str.");
        break;
    }
    case 1020:
    {
        returnValue = F("Abt-Overgaer-Str.");
        break;
    }
    case 1021:
    {
        returnValue = F("Abt-Pacher-Str.");
        break;
    }
    case 1022:
    {
        returnValue = F("Abt-Paulus-Str.");
        break;
    }
    case 1023:
    {
        returnValue = F("Abt-Peter-Str.");
        break;
    }
    case 1024:
    {
        returnValue = F("Abt-Petrus-Str.");
        break;
    }
    case 1025:
    {
        returnValue = F("Abt-Petto-Str.");
        break;
    }
    case 1026:
    {
        returnValue = F("Abt-Plazidus-Str.");
        break;
    }
    case 1027:
    {
        returnValue = F("Abt-Prechtl-Str.");
        break;
    }
    case 1028:
    {
        returnValue = F("Abt-Reher-Str.");
        break;
    }
    case 1029:
    {
        returnValue = F("Abt-Reubi-Str.");
        break;
    }
    case 1030:
    {
        returnValue = F("Abt-Richard-Str.");
        break;
    }
    case 1031:
    {
        returnValue = F("Abt-Richard-Weg");
        break;
    }
    case 1032:
    {
        returnValue = F("Abt-Robert-Weg");
        break;
    }
    case 1033:
    {
        returnValue = F("Abt-Roger-Str.");
        break;
    }
    case 1034:
    {
        returnValue = F("Abt-Rogerius-Str.");
        break;
    }
    case 1035:
    {
        returnValue = F("Abt-Rohrer-Str.");
        break;
    }
    case 1036:
    {
        returnValue = F("Abt-Romuald-Weg");
        break;
    }
    case 1037:
    {
        returnValue = F("Abt-Rottenkolber-Str.");
        break;
    }
    case 1038:
    {
        returnValue = F("Abt-Rottler-Str.");
        break;
    }
    case 1039:
    {
        returnValue = F("Abt-Rudolf-Str.");
        break;
    }
    case 1040:
    {
        returnValue = F("Abt-Rulle-Str.");
        break;
    }
    case 1041:
    {
        returnValue = F("Abt-Röls-Str.");
        break;
    }
    case 1042:
    {
        returnValue = F("Abt-Sartor-Str.");
        break;
    }
    case 1043:
    {
        returnValue = F("Abt-Sauer-Str.");
        break;
    }
    case 1044:
    {
        returnValue = F("Abt-Sauter-Str.");
        break;
    }
    case 1045:
    {
        returnValue = F("Abt-Scheyrle-Str.");
        break;
    }
    case 1046:
    {
        returnValue = F("Abt-Schlecht-Weg");
        break;
    }
    case 1047:
    {
        returnValue = F("Abt-Simons-Str.");
        break;
    }
    case 1048:
    {
        returnValue = F("Abt-Speckle-Str.");
        break;
    }
    case 1049:
    {
        returnValue = F("Abt-Spielmann-Str.");
        break;
    }
    case 1050:
    {
        returnValue = F("Abt-Spleiß-Weg");
        break;
    }
    case 1051:
    {
        returnValue = F("Abt-Steiglehner-Str.");
        break;
    }
    case 1052:
    {
        returnValue = F("Abt-Stephan-Str.");
        break;
    }
    case 1053:
    {
        returnValue = F("Abt-Steyrer-Str.");
        break;
    }
    case 1054:
    {
        returnValue = F("Abt-Ströbele-Str.");
        break;
    }
    case 1055:
    {
        returnValue = F("Abt-Theobald-Str.");
        break;
    }
    case 1056:
    {
        returnValue = F("Abt-Theoderich-Str.");
        break;
    }
    case 1057:
    {
        returnValue = F("Abt-Theoger-Str.");
        break;
    }
    case 1058:
    {
        returnValue = F("Abt-Thoma-Str.");
        break;
    }
    case 1059:
    {
        returnValue = F("Abt-Thomas-Str.");
        break;
    }
    case 1060:
    {
        returnValue = F("Abt-Toto-Str.");
        break;
    }
    case 1061:
    {
        returnValue = F("Abt-Ulrich-Str.");
        break;
    }
    case 1062:
    {
        returnValue = F("Abt-Unold-Str.");
        break;
    }
    case 1063:
    {
        returnValue = F("Abt-Uto-Str.");
        break;
    }
    case 1064:
    {
        returnValue = F("Abt-Veit-Höser-Platz");
        break;
    }
    case 1065:
    {
        returnValue = F("Abt-Vestenberg-Str.");
        break;
    }
    case 1066:
    {
        returnValue = F("Abt-Vitalis-Str.");
        break;
    }
    case 1067:
    {
        returnValue = F("Abt-Vitus-Str.");
        break;
    }
    case 1068:
    {
        returnValue = F("Abt-Volkwich-Str.");
        break;
    }
    case 1069:
    {
        returnValue = F("Abt-Walter-Str.");
        break;
    }
    case 1070:
    {
        returnValue = F("Abt-Walter-Weg");
        break;
    }
    case 1071:
    {
        returnValue = F("Abt-Walther-Str.");
        break;
    }
    case 1072:
    {
        returnValue = F("Abt-Warin-Weg");
        break;
    }
    case 1073:
    {
        returnValue = F("Abt-Weltin-Str.");
        break;
    }
    case 1074:
    {
        returnValue = F("Abt-Werner-Str.");
        break;
    }
    case 1075:
    {
        returnValue = F("Abt-Wierith-Str.");
        break;
    }
    case 1076:
    {
        returnValue = F("Abt-Wilhelm-Str.");
        break;
    }
    case 1077:
    {
        returnValue = F("Abt-Willibald-Knoll-Str.");
        break;
    }
    case 1078:
    {
        returnValue = F("Abt-Willibald-Str.");
        break;
    }
    case 1079:
    {
        returnValue = F("Abt-Williram-Str.");
        break;
    }
    case 1080:
    {
        returnValue = F("Abt-Windolf-Str.");
        break;
    }
    case 1081:
    {
        returnValue = F("Abt-Winter-Str.");
        break;
    }
    case 1082:
    {
        returnValue = F("Abt-Wittmeyer-Str.");
        break;
    }
    case 1083:
    {
        returnValue = F("Abt-Wolf-Str.");
        break;
    }
    case 1084:
    {
        returnValue = F("Abt-Wolfram-Ring");
        break;
    }
    case 1085:
    {
        returnValue = F("Abt-Wolfram-Str.");
        break;
    }
    case 1086:
    {
        returnValue = F("Abt-Wundert-Str.");
        break;
    }
    case 1087:
    {
        returnValue = F("Abt. Grenzweg");
        break;
    }
    case 1088:
    {
        returnValue = F("Abtei");
        break;
    }
    case 1089:
    {
        returnValue = F("Abtei Mariawald");
        break;
    }
    case 1090:
    {
        returnValue = F("Abtei Schneise");
        break;
    }
    case 1091:
    {
        returnValue = F("Abteiberg");
        break;
    }
    case 1092:
    {
        returnValue = F("Abteiblick");
        break;
    }
    case 1093:
    {
        returnValue = F("Abteigarten");
        break;
    }
    case 1094:
    {
        returnValue = F("Abteigasse");
        break;
    }
    case 1095:
    {
        returnValue = F("Abteihofstr.");
        break;
    }
    case 1096:
    {
        returnValue = F("Abteiland");
        break;
    }
    case 1097:
    {
        returnValue = F("Abteilung 6 Mittelweg");
        break;
    }
    case 1098:
    {
        returnValue = F("Abteilungslinie");
        break;
    }
    case 1099:
    {
        returnValue = F("Abteilungslinienweg");
        break;
    }
    case 1100:
    {
        returnValue = F("Abteilungsweg");
        break;
    }
    case 1101:
    {
        returnValue = F("Abteipark");
        break;
    }
    case 1102:
    {
        returnValue = F("Abteiplatz");
        break;
    }
    case 1103:
    {
        returnValue = F("Abteiring");
        break;
    }
    case 1104:
    {
        returnValue = F("Abteisiedlung");
        break;
    }
    case 1105:
    {
        returnValue = F("Abteistr.");
        break;
    }
    case 1106:
    {
        returnValue = F("Abteiweg");
        break;
    }
    case 1107:
    {
        returnValue = F("Abtenberg");
        break;
    }
    case 1108:
    {
        returnValue = F("Abtenweg");
        break;
    }
    case 1109:
    {
        returnValue = F("Abterodaer Str.");
        break;
    }
    case 1110:
    {
        returnValue = F("Abterodaer Weg");
        break;
    }
    case 1111:
    {
        returnValue = F("Abteroder Str.");
        break;
    }
    case 1112:
    {
        returnValue = F("Abteröder Str.");
        break;
    }
    case 1113:
    {
        returnValue = F("Abteröder Weg");
        break;
    }
    case 1114:
    {
        returnValue = F("Abtfeld");
        break;
    }
    case 1115:
    {
        returnValue = F("Abthof");
        break;
    }
    case 1116:
    {
        returnValue = F("Abtissensee");
        break;
    }
    case 1117:
    {
        returnValue = F("Abtnaundorfer Str.");
        break;
    }
    case 1118:
    {
        returnValue = F("Abts-Acker-Str.");
        break;
    }
    case 1119:
    {
        returnValue = F("Abts-Höhe");
        break;
    }
    case 1120:
    {
        returnValue = F("Abtsbeinweg");
        break;
    }
    case 1121:
    {
        returnValue = F("Abtsberg");
        break;
    }
    case 1122:
    {
        returnValue = F("Abtsbessinger Str.");
        break;
    }
    case 1123:
    {
        returnValue = F("Abtsbrede");
        break;
    }
    case 1124:
    {
        returnValue = F("Abtschlag");
        break;
    }
    case 1125:
    {
        returnValue = F("Abtschlager Str.");
        break;
    }
    case 1126:
    {
        returnValue = F("Abtsdell");
        break;
    }
    case 1127:
    {
        returnValue = F("Abtsdorf");
        break;
    }
    case 1128:
    {
        returnValue = F("Abtsdorfer Gasse");
        break;
    }
    case 1129:
    {
        returnValue = F("Abtsdorfer Leite");
        break;
    }
    case 1130:
    {
        returnValue = F("Abtsdorfer Sand");
        break;
    }
    case 1131:
    {
        returnValue = F("Abtsdorfer Str.");
        break;
    }
    case 1132:
    {
        returnValue = F("Abtsfeld");
        break;
    }
    case 1133:
    {
        returnValue = F("Abtsgartenstr.");
        break;
    }
    case 1134:
    {
        returnValue = F("Abtsgasse");
        break;
    }
    case 1135:
    {
        returnValue = F("Abtsgmünd Schule");
        break;
    }
    case 1136:
    {
        returnValue = F("Abtsgmünder Str.");
        break;
    }
    case 1137:
    {
        returnValue = F("Abtsgrund");
        break;
    }
    case 1138:
    {
        returnValue = F("Abtsgäßchen");
        break;
    }
    case 1139:
    {
        returnValue = F("Abtshalde");
        break;
    }
    case 1140:
    {
        returnValue = F("Abtshof");
        break;
    }
    case 1141:
    {
        returnValue = F("Abtshofer Str.");
        break;
    }
    case 1142:
    {
        returnValue = F("Abtshäger Chaussee");
        break;
    }
    case 1143:
    {
        returnValue = F("Abtshäger Str.");
        break;
    }
    case 1144:
    {
        returnValue = F("Abtskamp");
        break;
    }
    case 1145:
    {
        returnValue = F("Abtsklingenweg");
        break;
    }
    case 1146:
    {
        returnValue = F("Abtskücher Str.");
        break;
    }
    case 1147:
    {
        returnValue = F("Abtsleite");
        break;
    }
    case 1148:
    {
        returnValue = F("Abtsleitenweg");
        break;
    }
    case 1149:
    {
        returnValue = F("Abtsried");
        break;
    }
    case 1150:
    {
        returnValue = F("Abtsrieder Str.");
        break;
    }
    case 1151:
    {
        returnValue = F("Abtsrodaer Weg");
        break;
    }
    case 1152:
    {
        returnValue = F("Abtssträßle");
        break;
    }
    case 1153:
    {
        returnValue = F("Abtsteinacher Str.");
        break;
    }
    case 1154:
    {
        returnValue = F("Abtstor");
        break;
    }
    case 1155:
    {
        returnValue = F("Abtstr.");
        break;
    }
    case 1156:
    {
        returnValue = F("Abtstr. Str.");
        break;
    }
    case 1157:
    {
        returnValue = F("Abtswaldstr.");
        break;
    }
    case 1158:
    {
        returnValue = F("Abtsweg");
        break;
    }
    case 1159:
    {
        returnValue = F("Abtswiesenstr.");
        break;
    }
    case 1160:
    {
        returnValue = F("Abtswinder Str.");
        break;
    }
    case 1161:
    {
        returnValue = F("Abtsäckerstr.");
        break;
    }
    case 1162:
    {
        returnValue = F("Abtweg");
        break;
    }
    case 1163:
    {
        returnValue = F("Abtweiler Str.");
        break;
    }
    case 1164:
    {
        returnValue = F("Abtwiese");
        break;
    }
    case 1165:
    {
        returnValue = F("Abtwiler Str.");
        break;
    }
    case 1166:
    {
        returnValue = F("Abwandten");
        break;
    }
    case 1167:
    {
        returnValue = F("Abwasserleiten");
        break;
    }
    case 1168:
    {
        returnValue = F("Abweg");
        break;
    }
    case 1169:
    {
        returnValue = F("Abwärtsweg");
        break;
    }
    case 1170:
    {
        returnValue = F("Abzuchtstr.");
        break;
    }
    case 1171:
    {
        returnValue = F("Abzw. Bahnhof");
        break;
    }
    case 1172:
    {
        returnValue = F("Abzweig Bienhütte");
        break;
    }
    case 1173:
    {
        returnValue = F("Abzweig Flughafen");
        break;
    }
    case 1174:
    {
        returnValue = F("Abzweig Katernberg");
        break;
    }
    case 1175:
    {
        returnValue = F("Abzweig Kreisstr.");
        break;
    }
    case 1176:
    {
        returnValue = F("Abzweig Mariechenweg");
        break;
    }
    case 1177:
    {
        returnValue = F("Abzweig Nordenfeldmark");
        break;
    }
    case 1178:
    {
        returnValue = F("Abzweig Zabeltitz");
        break;
    }
    case 1179:
    {
        returnValue = F("Abzweigung");
        break;
    }
    case 1180:
    {
        returnValue = F("Acaunusstr.");
        break;
    }
    case 1181:
    {
        returnValue = F("Accordhausstr.");
        break;
    }
    case 1182:
    {
        returnValue = F("Accumer Landstr.");
        break;
    }
    case 1183:
    {
        returnValue = F("Accumer Riege");
        break;
    }
    case 1184:
    {
        returnValue = F("Accumer Str.");
        break;
    }
    case 1185:
    {
        returnValue = F("Accumer Weg");
        break;
    }
    case 1186:
    {
        returnValue = F("Accumersiel");
        break;
    }
    case 1187:
    {
        returnValue = F("Achalm");
        break;
    }
    case 1188:
    {
        returnValue = F("Achalmer Sträßle");
        break;
    }
    case 1189:
    {
        returnValue = F("Achalmsteige");
        break;
    }
    case 1190:
    {
        returnValue = F("Achalmstr.");
        break;
    }
    case 1191:
    {
        returnValue = F("Achalmweg");
        break;
    }
    case 1192:
    {
        returnValue = F("Achardstr.");
        break;
    }
    case 1193:
    {
        returnValue = F("Achardweg");
        break;
    }
    case 1194:
    {
        returnValue = F("Achatiusstr.");
        break;
    }
    case 1195:
    {
        returnValue = F("Achatiusweg");
        break;
    }
    case 1196:
    {
        returnValue = F("Achatsmühle");
        break;
    }
    case 1197:
    {
        returnValue = F("Achatstr.");
        break;
    }
    case 1198:
    {
        returnValue = F("Achatswieser Str.");
        break;
    }
    case 1199:
    {
        returnValue = F("Achatweg");
        break;
    }
    case 1200:
    {
        returnValue = F("Achauerstr.");
        break;
    }
    case 1201:
    {
        returnValue = F("Achaz-Stehlin-Weg");
        break;
    }
    case 1202:
    {
        returnValue = F("Achberg");
        break;
    }
    case 1203:
    {
        returnValue = F("Achbergerstr.");
        break;
    }
    case 1204:
    {
        returnValue = F("Achbergstr.");
        break;
    }
    case 1205:
    {
        returnValue = F("Achbergweg");
        break;
    }
    case 1206:
    {
        returnValue = F("Achbuchweg");
        break;
    }
    case 1207:
    {
        returnValue = F("Achdorfer Isarsteg");
        break;
    }
    case 1208:
    {
        returnValue = F("Achdorfer Str.");
        break;
    }
    case 1209:
    {
        returnValue = F("Achdorfer Weg");
        break;
    }
    case 1210:
    {
        returnValue = F("Achelbrink");
        break;
    }
    case 1211:
    {
        returnValue = F("Achelestr.");
        break;
    }
    case 1212:
    {
        returnValue = F("Achelisweg");
        break;
    }
    case 1213:
    {
        returnValue = F("Achelstädter Str.");
        break;
    }
    case 1214:
    {
        returnValue = F("Achelstädter Weg");
        break;
    }
    case 1215:
    {
        returnValue = F("Achenauweg");
        break;
    }
    case 1216:
    {
        returnValue = F("Achenbacher Furt");
        break;
    }
    case 1217:
    {
        returnValue = F("Achenbacher Str.");
        break;
    }
    case 1218:
    {
        returnValue = F("Achenbacher Weg");
        break;
    }
    case 1219:
    {
        returnValue = F("Achenbachhang");
        break;
    }
    case 1220:
    {
        returnValue = F("Achenbachstr.");
        break;
    }
    case 1221:
    {
        returnValue = F("Achenbachtreppe");
        break;
    }
    case 1222:
    {
        returnValue = F("Achenbachweg");
        break;
    }
    case 1223:
    {
        returnValue = F("Achener Weg");
        break;
    }
    case 1224:
    {
        returnValue = F("Achenfeldstr.");
        break;
    }
    case 1225:
    {
        returnValue = F("Achenfeldweg");
        break;
    }
    case 1226:
    {
        returnValue = F("Achenkamp");
        break;
    }
    case 1227:
    {
        returnValue = F("Achenleiten");
        break;
    }
    case 1228:
    {
        returnValue = F("Achenpass");
        break;
    }
    case 1229:
    {
        returnValue = F("Achenseeplatz");
        break;
    }
    case 1230:
    {
        returnValue = F("Achenseeweg");
        break;
    }
    case 1231:
    {
        returnValue = F("Achenstr.");
        break;
    }
    case 1232:
    {
        returnValue = F("Achentalstr.");
        break;
    }
    case 1233:
    {
        returnValue = F("Achenweg");
        break;
    }
    case 1234:
    {
        returnValue = F("Achenwinkl");
        break;
    }
    case 1235:
    {
        returnValue = F("Acheringer Hauptstr.");
        break;
    }
    case 1236:
    {
        returnValue = F("Achern Passage");
        break;
    }
    case 1237:
    {
        returnValue = F("Acherner Str.");
        break;
    }
    case 1238:
    {
        returnValue = F("Acherner Weg");
        break;
    }
    case 1239:
    {
        returnValue = F("Acherstr.");
        break;
    }
    case 1240:
    {
        returnValue = F("Achert");
        break;
    }
    case 1241:
    {
        returnValue = F("Achertalstr.");
        break;
    }
    case 1242:
    {
        returnValue = F("Acherweg");
        break;
    }
    case 1243:
    {
        returnValue = F("Achgasse");
        break;
    }
    case 1244:
    {
        returnValue = F("Achheimer Str.");
        break;
    }
    case 1245:
    {
        returnValue = F("Achheimstr.");
        break;
    }
    case 1246:
    {
        returnValue = F("Achilleion");
        break;
    }
    case 1247:
    {
        returnValue = F("Achilles-​von-​Stahl-​Weg");
        break;
    }
    case 1248:
    {
        returnValue = F("Achillesstr.");
        break;
    }
    case 1249:
    {
        returnValue = F("Achim-Mentzel-Weg");
        break;
    }
    case 1250:
    {
        returnValue = F("Achim-von-Arnim-Str.");
        break;
    }
    case 1251:
    {
        returnValue = F("Achim-von-Arnim-Weg");
        break;
    }
    case 1252:
    {
        returnValue = F("Achimer Bruch");
        break;
    }
    case 1253:
    {
        returnValue = F("Achimer Brückenstr.");
        break;
    }
    case 1254:
    {
        returnValue = F("Achimer Feld");
        break;
    }
    case 1255:
    {
        returnValue = F("Achimer Hauptstr.");
        break;
    }
    case 1256:
    {
        returnValue = F("Achimer Landstr.");
        break;
    }
    case 1257:
    {
        returnValue = F("Achimer Rathauspark");
        break;
    }
    case 1258:
    {
        returnValue = F("Achimer Str.");
        break;
    }
    case 1259:
    {
        returnValue = F("Achkarrer Str.");
        break;
    }
    case 1260:
    {
        returnValue = F("Achkarrer Weg");
        break;
    }
    case 1261:
    {
        returnValue = F("Achldorf");
        break;
    }
    case 1262:
    {
        returnValue = F("Achleitenstr.");
        break;
    }
    case 1263:
    {
        returnValue = F("Achleitnerstr.");
        break;
    }
    case 1264:
    {
        returnValue = F("Achmer Grenzweg");
        break;
    }
    case 1265:
    {
        returnValue = F("Achmerstr.");
        break;
    }
    case 1266:
    {
        returnValue = F("Achmühle");
        break;
    }
    case 1267:
    {
        returnValue = F("Achnergrund");
        break;
    }
    case 1268:
    {
        returnValue = F("Acholshäuser Str.");
        break;
    }
    case 1269:
    {
        returnValue = F("Achrainweg");
        break;
    }
    case 1270:
    {
        returnValue = F("Achruthenweg");
        break;
    }
    case 1271:
    {
        returnValue = F("Achsberg");
        break;
    }
    case 1272:
    {
        returnValue = F("Achselschwanger Str.");
        break;
    }
    case 1273:
    {
        returnValue = F("Achsenkamp");
        break;
    }
    case 1274:
    {
        returnValue = F("Achsenrieder Str.");
        break;
    }
    case 1275:
    {
        returnValue = F("Achsenschmiede");
        break;
    }
    case 1276:
    {
        returnValue = F("Achsenweg");
        break;
    }
    case 1277:
    {
        returnValue = F("Achsgasse");
        break;
    }
    case 1278:
    {
        returnValue = F("Achsheimer Str.");
        break;
    }
    case 1279:
    {
        returnValue = F("Achslacher Str.");
        break;
    }
    case 1280:
    {
        returnValue = F("Achslandweg");
        break;
    }
    case 1281:
    {
        returnValue = F("Achstattring");
        break;
    }
    case 1282:
    {
        returnValue = F("Achstetter Str.");
        break;
    }
    case 1283:
    {
        returnValue = F("Achstr.");
        break;
    }
    case 1284:
    {
        returnValue = F("Acht");
        break;
    }
    case 1285:
    {
        returnValue = F("Acht Morgen");
        break;
    }
    case 1286:
    {
        returnValue = F("Acht Stücken");
        break;
    }
    case 1287:
    {
        returnValue = F("Achtallee");
        break;
    }
    case 1288:
    {
        returnValue = F("Achtalstr.");
        break;
    }
    case 1289:
    {
        returnValue = F("Achtalweg");
        break;
    }
    case 1290:
    {
        returnValue = F("Achtbachstr.");
        break;
    }
    case 1291:
    {
        returnValue = F("Achtbeeteweg");
        break;
    }
    case 1292:
    {
        returnValue = F("Achtbuchenweg");
        break;
    }
    case 1293:
    {
        returnValue = F("Achteck");
        break;
    }
    case 1294:
    {
        returnValue = F("Achtelkamp");
        break;
    }
    case 1295:
    {
        returnValue = F("Achtelsbergstr.");
        break;
    }
    case 1296:
    {
        returnValue = F("Achtelstr.");
        break;
    }
    case 1297:
    {
        returnValue = F("Achtelweg");
        break;
    }
    case 1298:
    {
        returnValue = F("Achtem Hoff");
        break;
    }
    case 1299:
    {
        returnValue = F("Achtenbecksweg");
        break;
    }
    case 1300:
    {
        returnValue = F("Achtenbüttelweg");
        break;
    }
    case 1301:
    {
        returnValue = F("Achter Ahlers");
        break;
    }
    case 1302:
    {
        returnValue = F("Achter Barg");
        break;
    }
    case 1303:
    {
        returnValue = F("Achter De Kark");
        break;
    }
    case 1304:
    {
        returnValue = F("Achter Fennenweg");
        break;
    }
    case 1305:
    {
        returnValue = F("Achter Gaste Weg");
        break;
    }
    case 1306:
    {
        returnValue = F("Achter Groth");
        break;
    }
    case 1307:
    {
        returnValue = F("Achter Haneklau");
        break;
    }
    case 1308:
    {
        returnValue = F("Achter Heidorns Huuse");
        break;
    }
    case 1309:
    {
        returnValue = F("Achter Hoef");
        break;
    }
    case 1310:
    {
        returnValue = F("Achter Höfe");
        break;
    }
    case 1311:
    {
        returnValue = F("Achter Höfen");
        break;
    }
    case 1312:
    {
        returnValue = F("Achter Jürns Hoff");
        break;
    }
    case 1313:
    {
        returnValue = F("Achter Lütt Maack");
        break;
    }
    case 1314:
    {
        returnValue = F("Achter Nordbusch");
        break;
    }
    case 1315:
    {
        returnValue = F("Achter Str.");
        break;
    }
    case 1316:
    {
        returnValue = F("Achter Thunen");
        break;
    }
    case 1317:
    {
        returnValue = F("Achter Weg");
        break;
    }
    case 1318:
    {
        returnValue = F("Achter d' Muer");
        break;
    }
    case 1319:
    {
        returnValue = F("Achter d'Diek");
        break;
    }
    case 1320:
    {
        returnValue = F("Achter de Bahn");
        break;
    }
    case 1321:
    {
        returnValue = F("Achter de Beeke");
        break;
    }
    case 1322:
    {
        returnValue = F("Achter de Borg");
        break;
    }
    case 1323:
    {
        returnValue = F("Achter de Brüch");
        break;
    }
    case 1324:
    {
        returnValue = F("Achter de Dann");
        break;
    }
    case 1325:
    {
        returnValue = F("Achter de Dannen");
        break;
    }
    case 1326:
    {
        returnValue = F("Achter de Diek");
        break;
    }
    case 1327:
    {
        returnValue = F("Achter de Dünen");
        break;
    }
    case 1328:
    {
        returnValue = F("Achter de Fenn");
        break;
    }
    case 1329:
    {
        returnValue = F("Achter de Fuhren");
        break;
    }
    case 1330:
    {
        returnValue = F("Achter de Füerwehr");
        break;
    }
    case 1331:
    {
        returnValue = F("Achter de Gast");
        break;
    }
    case 1332:
    {
        returnValue = F("Achter de Hoef");
        break;
    }
    case 1333:
    {
        returnValue = F("Achter de Hoern");
        break;
    }
    case 1334:
    {
        returnValue = F("Achter de Hofstie");
        break;
    }
    case 1335:
    {
        returnValue = F("Achter de Husen");
        break;
    }
    case 1336:
    {
        returnValue = F("Achter de Höf");
        break;
    }
    case 1337:
    {
        returnValue = F("Achter de Hülken");
        break;
    }
    case 1338:
    {
        returnValue = F("Achter de Hüsler");
        break;
    }
    case 1339:
    {
        returnValue = F("Achter de Isenbahn");
        break;
    }
    case 1340:
    {
        returnValue = F("Achter de Kark");
        break;
    }
    case 1341:
    {
        returnValue = F("Achter de Kat");
        break;
    }
    case 1342:
    {
        returnValue = F("Achter de Knick");
        break;
    }
    case 1343:
    {
        returnValue = F("Achter de Krog");
        break;
    }
    case 1344:
    {
        returnValue = F("Achter de Kroog");
        break;
    }
    case 1345:
    {
        returnValue = F("Achter de Lin");
        break;
    }
    case 1346:
    {
        returnValue = F("Achter de Mangel");
        break;
    }
    case 1347:
    {
        returnValue = F("Achter de Muer");
        break;
    }
    case 1348:
    {
        returnValue = F("Achter de Mur");
        break;
    }
    case 1349:
    {
        returnValue = F("Achter de Märtweg");
        break;
    }
    case 1350:
    {
        returnValue = F("Achter de Möhl");
        break;
    }
    case 1351:
    {
        returnValue = F("Achter de Retött");
        break;
    }
    case 1352:
    {
        returnValue = F("Achter de Schmee");
        break;
    }
    case 1353:
    {
        returnValue = F("Achter de Schmeed");
        break;
    }
    case 1354:
    {
        returnValue = F("Achter de School");
        break;
    }
    case 1355:
    {
        returnValue = F("Achter de Sixt");
        break;
    }
    case 1356:
    {
        returnValue = F("Achter de Stadt");
        break;
    }
    case 1357:
    {
        returnValue = F("Achter de Stellmokeri");
        break;
    }
    case 1358:
    {
        returnValue = F("Achter de Tunen");
        break;
    }
    case 1359:
    {
        returnValue = F("Achter de Waake");
        break;
    }
    case 1360:
    {
        returnValue = F("Achter de Wall");
        break;
    }
    case 1361:
    {
        returnValue = F("Achter de Weiden");
        break;
    }
    case 1362:
    {
        returnValue = F("Achter de Welt");
        break;
    }
    case 1363:
    {
        returnValue = F("Achter de Wirde");
        break;
    }
    case 1364:
    {
        returnValue = F("Achter de Wisch");
        break;
    }
    case 1365:
    {
        returnValue = F("Achter de Wischen");
        break;
    }
    case 1366:
    {
        returnValue = F("Achter dem Born");
        break;
    }
    case 1367:
    {
        returnValue = F("Achter den Höfen");
        break;
    }
    case 1368:
    {
        returnValue = F("Achter der Borg");
        break;
    }
    case 1369:
    {
        returnValue = F("Achter Öwer");
        break;
    }
    case 1370:
    {
        returnValue = F("Achter'd Diek");
        break;
    }
    case 1371:
    {
        returnValue = F("Achter'd Füürwehr");
        break;
    }
    case 1372:
    {
        returnValue = F("Achter'd Kark");
        break;
    }
    case 1373:
    {
        returnValue = F("Achter'd Toorn");
        break;
    }
    case 1374:
    {
        returnValue = F("Achter'n Diek");
        break;
    }
    case 1375:
    {
        returnValue = F("Achter'n Dörp");
        break;
    }
    case 1376:
    {
        returnValue = F("Achter'n Krankenhus");
        break;
    }
    case 1377:
    {
        returnValue = F("Achter't Hammerk");
        break;
    }
    case 1378:
    {
        returnValue = F("Achter't Holt");
        break;
    }
    case 1379:
    {
        returnValue = F("Achter't Verlaat");
        break;
    }
    case 1380:
    {
        returnValue = F("Achter-Gasten-Weg");
        break;
    }
    case 1381:
    {
        returnValue = F("Achterbach");
        break;
    }
    case 1382:
    {
        returnValue = F("Achterbahn");
        break;
    }
    case 1383:
    {
        returnValue = F("Achterbarger Weg");
        break;
    }
    case 1384:
    {
        returnValue = F("Achterbarger Weg 1");
        break;
    }
    case 1385:
    {
        returnValue = F("Achterbarger Weg 2");
        break;
    }
    case 1386:
    {
        returnValue = F("Achterbargsweg");
        break;
    }
    case 1387:
    {
        returnValue = F("Achterberg");
        break;
    }
    case 1388:
    {
        returnValue = F("Achterberger Str.");
        break;
    }
    case 1389:
    {
        returnValue = F("Achterbergstr.");
        break;
    }
    case 1390:
    {
        returnValue = F("Achterbergweg");
        break;
    }
    case 1391:
    {
        returnValue = F("Achterborgsweg");
        break;
    }
    case 1392:
    {
        returnValue = F("Achterbrandenweg");
        break;
    }
    case 1393:
    {
        returnValue = F("Achterbrook");
        break;
    }
    case 1394:
    {
        returnValue = F("Achterbruch");
        break;
    }
    case 1395:
    {
        returnValue = F("Achterbusch");
        break;
    }
    case 1396:
    {
        returnValue = F("Achterdal");
        break;
    }
    case 1397:
    {
        returnValue = F("Achterdamm");
        break;
    }
    case 1398:
    {
        returnValue = F("Achterdeck");
        break;
    }
    case 1399:
    {
        returnValue = F("Achterdeich");
        break;
    }
    case 1400:
    {
        returnValue = F("Achterdeicher Weg");
        break;
    }
    case 1401:
    {
        returnValue = F("Achterdieck");
        break;
    }
    case 1402:
    {
        returnValue = F("Achterdiek");
        break;
    }
    case 1403:
    {
        returnValue = F("Achterdiekpark");
        break;
    }
    case 1404:
    {
        returnValue = F("Achterdorp");
        break;
    }
    case 1405:
    {
        returnValue = F("Achterdurwech");
        break;
    }
    case 1406:
    {
        returnValue = F("Achterdörper Weg");
        break;
    }
    case 1407:
    {
        returnValue = F("Achterende");
        break;
    }
    case 1408:
    {
        returnValue = F("Achterenn");
        break;
    }
    case 1409:
    {
        returnValue = F("Achteresch");
        break;
    }
    case 1410:
    {
        returnValue = F("Achterfeld");
        break;
    }
    case 1411:
    {
        returnValue = F("Achterfeldstr.");
        break;
    }
    case 1412:
    {
        returnValue = F("Achterfeldweg");
        break;
    }
    case 1413:
    {
        returnValue = F("Achtergang");
        break;
    }
    case 1414:
    {
        returnValue = F("Achtergarten");
        break;
    }
    case 1415:
    {
        returnValue = F("Achtergaste");
        break;
    }
    case 1416:
    {
        returnValue = F("Achtergäßchen");
        break;
    }
    case 1417:
    {
        returnValue = F("Achterhagen");
        break;
    }
    case 1418:
    {
        returnValue = F("Achterhauk");
        break;
    }
    case 1419:
    {
        returnValue = F("Achterhoek");
        break;
    }
    case 1420:
    {
        returnValue = F("Achterhoeker Mühlenweg");
        break;
    }
    case 1421:
    {
        returnValue = F("Achterhoeker Rödchen");
        break;
    }
    case 1422:
    {
        returnValue = F("Achterhof");
        break;
    }
    case 1423:
    {
        returnValue = F("Achterhoff");
        break;
    }
    case 1424:
    {
        returnValue = F("Achterhofweg");
        break;
    }
    case 1425:
    {
        returnValue = F("Achterholz");
        break;
    }
    case 1426:
    {
        returnValue = F("Achterholzkamp");
        break;
    }
    case 1427:
    {
        returnValue = F("Achterhook");
        break;
    }
    case 1428:
    {
        returnValue = F("Achterhornweg");
        break;
    }
    case 1429:
    {
        returnValue = F("Achterhöfe");
        break;
    }
    case 1430:
    {
        returnValue = F("Achterhöfen");
        break;
    }
    case 1431:
    {
        returnValue = F("Achterhörn");
        break;
    }
    case 1432:
    {
        returnValue = F("Achterkamp");
        break;
    }
    case 1433:
    {
        returnValue = F("Achterkampenweg");
        break;
    }
    case 1434:
    {
        returnValue = F("Achterkampsweg");
        break;
    }
    case 1435:
    {
        returnValue = F("Achterkirchenstr.");
        break;
    }
    case 1436:
    {
        returnValue = F("Achterknöllenweg");
        break;
    }
    case 1437:
    {
        returnValue = F("Achterkoppel");
        break;
    }
    case 1438:
    {
        returnValue = F("Achterlandsweg");
        break;
    }
    case 1439:
    {
        returnValue = F("Achterlang");
        break;
    }
    case 1440:
    {
        returnValue = F("Achterlangsweg");
        break;
    }
    case 1441:
    {
        returnValue = F("Achterlinde");
        break;
    }
    case 1442:
    {
        returnValue = F("Achterloog");
        break;
    }
    case 1443:
    {
        returnValue = F("Achterm Waterkamp");
        break;
    }
    case 1444:
    {
        returnValue = F("Achtermannbrücke");
        break;
    }
    case 1445:
    {
        returnValue = F("Achtermannstr.");
        break;
    }
    case 1446:
    {
        returnValue = F("Achtermannweg");
        break;
    }
    case 1447:
    {
        returnValue = F("Achtermbergbredde");
        break;
    }
    case 1448:
    {
        returnValue = F("Achtermoor");
        break;
    }
    case 1449:
    {
        returnValue = F("Achtermoorweg");
        break;
    }
    case 1450:
    {
        returnValue = F("Achtermöhlen");
        break;
    }
    case 1451:
    {
        returnValue = F("Achtern Anewang");
        break;
    }
    case 1452:
    {
        returnValue = F("Achtern Barg");
        break;
    }
    case 1453:
    {
        returnValue = F("Achtern Beek");
        break;
    }
    case 1454:
    {
        returnValue = F("Achtern Bek");
        break;
    }
    case 1455:
    {
        returnValue = F("Achtern Bleeck");
        break;
    }
    case 1456:
    {
        returnValue = F("Achtern Bohnhoff");
        break;
    }
    case 1457:
    {
        returnValue = F("Achtern Born");
        break;
    }
    case 1458:
    {
        returnValue = F("Achtern Bredviert");
        break;
    }
    case 1459:
    {
        returnValue = F("Achtern Busch");
        break;
    }
    case 1460:
    {
        returnValue = F("Achtern Buschhoff");
        break;
    }
    case 1461:
    {
        returnValue = F("Achtern Bääk");
        break;
    }
    case 1462:
    {
        returnValue = F("Achtern Bült");
        break;
    }
    case 1463:
    {
        returnValue = F("Achtern Büttel");
        break;
    }
    case 1464:
    {
        returnValue = F("Achtern Dieck");
        break;
    }
    case 1465:
    {
        returnValue = F("Achtern Diek");
        break;
    }
    case 1466:
    {
        returnValue = F("Achtern Dom");
        break;
    }
    case 1467:
    {
        returnValue = F("Achtern Dörp");
        break;
    }
    case 1468:
    {
        returnValue = F("Achtern Esch");
        break;
    }
    case 1469:
    {
        returnValue = F("Achtern Felde");
        break;
    }
    case 1470:
    {
        returnValue = F("Achtern Felln");
        break;
    }
    case 1471:
    {
        returnValue = F("Achtern Flatthoff");
        break;
    }
    case 1472:
    {
        returnValue = F("Achtern Grode Feldhus");
        break;
    }
    case 1473:
    {
        returnValue = F("Achtern Habberg");
        break;
    }
    case 1474:
    {
        returnValue = F("Achtern Hasenkamp");
        break;
    }
    case 1475:
    {
        returnValue = F("Achtern Heben");
        break;
    }
    case 1476:
    {
        returnValue = F("Achtern Hoagen");
        break;
    }
    case 1477:
    {
        returnValue = F("Achtern Hoeben");
        break;
    }
    case 1478:
    {
        returnValue = F("Achtern Hof");
        break;
    }
    case 1479:
    {
        returnValue = F("Achtern Hoff");
        break;
    }
    case 1480:
    {
        returnValue = F("Achtern Hogen");
        break;
    }
    case 1481:
    {
        returnValue = F("Achtern Hollernbusch");
        break;
    }
    case 1482:
    {
        returnValue = F("Achtern Holm");
        break;
    }
    case 1483:
    {
        returnValue = F("Achtern Holt");
        break;
    }
    case 1484:
    {
        returnValue = F("Achtern Hoorn");
        break;
    }
    case 1485:
    {
        returnValue = F("Achtern Höben");
        break;
    }
    case 1486:
    {
        returnValue = F("Achtern Höfen");
        break;
    }
    case 1487:
    {
        returnValue = F("Achtern Hörn");
        break;
    }
    case 1488:
    {
        returnValue = F("Achtern Höven");
        break;
    }
    case 1489:
    {
        returnValue = F("Achtern Höwen");
        break;
    }
    case 1490:
    {
        returnValue = F("Achtern Immhoff");
        break;
    }
    case 1491:
    {
        returnValue = F("Achtern Jägerbarg");
        break;
    }
    case 1492:
    {
        returnValue = F("Achtern Kaaken Bleeck");
        break;
    }
    case 1493:
    {
        returnValue = F("Achtern Kamp");
        break;
    }
    case 1494:
    {
        returnValue = F("Achtern Karkenbleeck");
        break;
    }
    case 1495:
    {
        returnValue = F("Achtern Karkhoff");
        break;
    }
    case 1496:
    {
        returnValue = F("Achtern Klemp");
        break;
    }
    case 1497:
    {
        returnValue = F("Achtern Knick");
        break;
    }
    case 1498:
    {
        returnValue = F("Achtern Kronskamp");
        break;
    }
    case 1499:
    {
        returnValue = F("Achtern Kroog");
        break;
    }
    case 1500:
    {
        returnValue = F("Achtern Kugelfang");
        break;
    }
    case 1501:
    {
        returnValue = F("Achtern Lannen");
        break;
    }
    case 1502:
    {
        returnValue = F("Achtern Lohn");
        break;
    }
    case 1503:
    {
        returnValue = F("Achtern Moor");
        break;
    }
    case 1504:
    {
        returnValue = F("Achtern Nordpol");
        break;
    }
    case 1505:
    {
        returnValue = F("Achtern Ollerloh");
        break;
    }
    case 1506:
    {
        returnValue = F("Achtern Riep");
        break;
    }
    case 1507:
    {
        returnValue = F("Achtern Rießel");
        break;
    }
    case 1508:
    {
        returnValue = F("Achtern Sand");
        break;
    }
    case 1509:
    {
        returnValue = F("Achtern Schranken");
        break;
    }
    case 1510:
    {
        returnValue = F("Achtern Schünen");
        break;
    }
    case 1511:
    {
        returnValue = F("Achtern Sprüttenhus");
        break;
    }
    case 1512:
    {
        returnValue = F("Achtern Strand");
        break;
    }
    case 1513:
    {
        returnValue = F("Achtern Stroot");
        break;
    }
    case 1514:
    {
        returnValue = F("Achtern Thun");
        break;
    }
    case 1515:
    {
        returnValue = F("Achtern Toslag");
        break;
    }
    case 1516:
    {
        returnValue = F("Achtern Tun");
        break;
    }
    case 1517:
    {
        returnValue = F("Achtern Wall");
        break;
    }
    case 1518:
    {
        returnValue = F("Achtern Water");
        break;
    }
    case 1519:
    {
        returnValue = F("Achtern Wehrt Hoff");
        break;
    }
    case 1520:
    {
        returnValue = F("Achtern Wischen");
        break;
    }
    case 1521:
    {
        returnValue = F("Achtern Wischhoff");
        break;
    }
    case 1522:
    {
        returnValue = F("Achtern Wittenmoor");
        break;
    }
    case 1523:
    {
        returnValue = F("Achternbergstr.");
        break;
    }
    case 1524:
    {
        returnValue = F("Achternbroek");
        break;
    }
    case 1525:
    {
        returnValue = F("Achterndiek");
        break;
    }
    case 1526:
    {
        returnValue = F("Achternfelde");
        break;
    }
    case 1527:
    {
        returnValue = F("Achternhof");
        break;
    }
    case 1528:
    {
        returnValue = F("Achternhoff");
        break;
    }
    case 1529:
    {
        returnValue = F("Achternholt");
        break;
    }
    case 1530:
    {
        returnValue = F("Achternkamp");
        break;
    }
    case 1531:
    {
        returnValue = F("Achternkaten");
        break;
    }
    case 1532:
    {
        returnValue = F("Achternmeerer Str.");
        break;
    }
    case 1533:
    {
        returnValue = F("Achternstieg");
        break;
    }
    case 1534:
    {
        returnValue = F("Achternstr.");
        break;
    }
    case 1535:
    {
        returnValue = F("Achternweg");
        break;
    }
    case 1536:
    {
        returnValue = F("Achternümme");
        break;
    }
    case 1537:
    {
        returnValue = F("Achterort");
        break;
    }
    case 1538:
    {
        returnValue = F("Achterrumredder");
        break;
    }
    case 1539:
    {
        returnValue = F("Achterrumweg");
        break;
    }
    case 1540:
    {
        returnValue = F("Achterrut");
        break;
    }
    case 1541:
    {
        returnValue = F("Achters Hohenlieth");
        break;
    }
    case 1542:
    {
        returnValue = F("Achters Kamp");
        break;
    }
    case 1543:
    {
        returnValue = F("Achtersiet");
        break;
    }
    case 1544:
    {
        returnValue = F("Achterskamp");
        break;
    }
    case 1545:
    {
        returnValue = F("Achtersoll");
        break;
    }
    case 1546:
    {
        returnValue = F("Achterstadt");
        break;
    }
    case 1547:
    {
        returnValue = F("Achtersteven");
        break;
    }
    case 1548:
    {
        returnValue = F("Achterstr.");
        break;
    }
    case 1549:
    {
        returnValue = F("Achterstraat");
        break;
    }
    case 1550:
    {
        returnValue = F("Achterstücke");
        break;
    }
    case 1551:
    {
        returnValue = F("Achtersweg");
        break;
    }
    case 1552:
    {
        returnValue = F("Achtert Dickfehl");
        break;
    }
    case 1553:
    {
        returnValue = F("Achtert Diek");
        break;
    }
    case 1554:
    {
        returnValue = F("Achtert Dörp");
        break;
    }
    case 1555:
    {
        returnValue = F("Achtert Gast");
        break;
    }
    case 1556:
    {
        returnValue = F("Achtert Hanebarg");
        break;
    }
    case 1557:
    {
        returnValue = F("Achtert Holt");
        break;
    }
    case 1558:
    {
        returnValue = F("Achtert Hopptun");
        break;
    }
    case 1559:
    {
        returnValue = F("Achtert Kipp");
        break;
    }
    case 1560:
    {
        returnValue = F("Achtert Krog");
        break;
    }
    case 1561:
    {
        returnValue = F("Achtert Leegstücken");
        break;
    }
    case 1562:
    {
        returnValue = F("Achtert Möhlen");
        break;
    }
    case 1563:
    {
        returnValue = F("Achtert Neßmer Möhln");
        break;
    }
    case 1564:
    {
        returnValue = F("Achtert Plaatsen");
        break;
    }
    case 1565:
    {
        returnValue = F("Achtert Sandtog");
        break;
    }
    case 1566:
    {
        returnValue = F("Achtert Sandwater");
        break;
    }
    case 1567:
    {
        returnValue = F("Achtert Thunen");
        break;
    }
    case 1568:
    {
        returnValue = F("Achtert Tuun");
        break;
    }
    case 1569:
    {
        returnValue = F("Achtert Wallen");
        break;
    }
    case 1570:
    {
        returnValue = F("Achtert Wieken");
        break;
    }
    case 1571:
    {
        returnValue = F("Achtert-Land-Weg");
        break;
    }
    case 1572:
    {
        returnValue = F("Achtertoft");
        break;
    }
    case 1573:
    {
        returnValue = F("Achterum");
        break;
    }
    case 1574:
    {
        returnValue = F("Achterumshörn");
        break;
    }
    case 1575:
    {
        returnValue = F("Achterumsweg");
        break;
    }
    case 1576:
    {
        returnValue = F("Achterwaldstr.");
        break;
    }
    case 1577:
    {
        returnValue = F("Achterwall");
        break;
    }
    case 1578:
    {
        returnValue = F("Achterweg");
        break;
    }
    case 1579:
    {
        returnValue = F("Achterwehrer Str.");
        break;
    }
    case 1580:
    {
        returnValue = F("Achterwiek");
        break;
    }
    case 1581:
    {
        returnValue = F("Achterwisch");
        break;
    }
    case 1582:
    {
        returnValue = F("Achterworth");
        break;
    }
    case 1583:
    {
        returnValue = F("Achterwurth");
        break;
    }
    case 1584:
    {
        returnValue = F("Achterüm");
        break;
    }
    case 1585:
    {
        returnValue = F("Achtgrubenweg");
        break;
    }
    case 1586:
    {
        returnValue = F("Achthaler Str.");
        break;
    }
    case 1587:
    {
        returnValue = F("Achthausen");
        break;
    }
    case 1588:
    {
        returnValue = F("Achthusen");
        break;
    }
    case 1589:
    {
        returnValue = F("Achthöfen");
        break;
    }
    case 1590:
    {
        returnValue = F("Achtler Str.");
        break;
    }
    case 1591:
    {
        returnValue = F("Achtliede");
        break;
    }
    case 1592:
    {
        returnValue = F("Achtminutenweg");
        break;
    }
    case 1593:
    {
        returnValue = F("Achtmorgen");
        break;
    }
    case 1594:
    {
        returnValue = F("Achtmorgenfeld");
        break;
    }
    case 1595:
    {
        returnValue = F("Achtmorgenstr.");
        break;
    }
    case 1596:
    {
        returnValue = F("Achtmorgenweg");
        break;
    }
    case 1597:
    {
        returnValue = F("Achtmüllerweg");
        break;
    }
    case 1598:
    {
        returnValue = F("Achtruper Str.");
        break;
    }
    case 1599:
    {
        returnValue = F("Achtrutenweg");
        break;
    }
    case 1600:
    {
        returnValue = F("Achtstauden Schneise");
        break;
    }
    case 1601:
    {
        returnValue = F("Achtstr.");
        break;
    }
    case 1602:
    {
        returnValue = F("Achtstruth");
        break;
    }
    case 1603:
    {
        returnValue = F("Achtstücken");
        break;
    }
    case 1604:
    {
        returnValue = F("Achtstückenweg");
        break;
    }
    case 1605:
    {
        returnValue = F("Achtumer Lindenkamp");
        break;
    }
    case 1606:
    {
        returnValue = F("Achtumer Winkel");
        break;
    }
    case 1607:
    {
        returnValue = F("Achtungstr.");
        break;
    }
    case 1608:
    {
        returnValue = F("Achtweg");
        break;
    }
    case 1609:
    {
        returnValue = F("Achtweid");
        break;
    }
    case 1610:
    {
        returnValue = F("Achtwinkelhof");
        break;
    }
    case 1611:
    {
        returnValue = F("Achtzehn Morgen");
        break;
    }
    case 1612:
    {
        returnValue = F("Achtzehnberg");
        break;
    }
    case 1613:
    {
        returnValue = F("Achtzehnmorgen");
        break;
    }
    case 1614:
    {
        returnValue = F("Achtzehnmorgenpfad");
        break;
    }
    case 1615:
    {
        returnValue = F("Achtzehnmorgenweg");
        break;
    }
    case 1616:
    {
        returnValue = F("Achtzehnäckerweg");
        break;
    }
    case 1617:
    {
        returnValue = F("Achtäckerweg");
        break;
    }
    case 1618:
    {
        returnValue = F("Achumer Str.");
        break;
    }
    case 1619:
    {
        returnValue = F("Achumer Weg");
        break;
    }
    case 1620:
    {
        returnValue = F("Achumer Wiese");
        break;
    }
    case 1621:
    {
        returnValue = F("Achwaldstr.");
        break;
    }
    case 1622:
    {
        returnValue = F("Achweg");
        break;
    }
    case 1623:
    {
        returnValue = F("Achwiesen");
        break;
    }
    case 1624:
    {
        returnValue = F("Achwiesenweg");
        break;
    }
    case 1625:
    {
        returnValue = F("Achäcker");
        break;
    }
    case 1626:
    {
        returnValue = F("Acignering");
        break;
    }
    case 1627:
    {
        returnValue = F("Acisbrunnen");
        break;
    }
    case 1628:
    {
        returnValue = F("Acisweg");
        break;
    }
    case 1629:
    {
        returnValue = F("Ackebroe");
        break;
    }
    case 1630:
    {
        returnValue = F("Ackeleiweg");
        break;
    }
    case 1631:
    {
        returnValue = F("Ackenbrock");
        break;
    }
    case 1632:
    {
        returnValue = F("Ackendorfer Dorfstr.");
        break;
    }
    case 1633:
    {
        returnValue = F("Ackendorfer Landstr.");
        break;
    }
    case 1634:
    {
        returnValue = F("Ackendorfer Str.");
        break;
    }
    case 1635:
    {
        returnValue = F("Ackendorfer Weg");
        break;
    }
    case 1636:
    {
        returnValue = F("Ackenhusen-Ring");
        break;
    }
    case 1637:
    {
        returnValue = F("Ackenhäuser Weg");
        break;
    }
    case 1638:
    {
        returnValue = F("Ackenpaul");
        break;
    }
    case 1639:
    {
        returnValue = F("Acker");
        break;
    }
    case 1640:
    {
        returnValue = F("Ackerbach");
        break;
    }
    case 1641:
    {
        returnValue = F("Ackerbacher Weg");
        break;
    }
    case 1642:
    {
        returnValue = F("Ackerbachsweg");
        break;
    }
    case 1643:
    {
        returnValue = F("Ackerbeeke");
        break;
    }
    case 1644:
    {
        returnValue = F("Ackerbergsfeld");
        break;
    }
    case 1645:
    {
        returnValue = F("Ackerbergstr.");
        break;
    }
    case 1646:
    {
        returnValue = F("Ackerbergweg");
        break;
    }
    case 1647:
    {
        returnValue = F("Ackerbieke");
        break;
    }
    case 1648:
    {
        returnValue = F("Ackerbogen");
        break;
    }
    case 1649:
    {
        returnValue = F("Ackerbreede");
        break;
    }
    case 1650:
    {
        returnValue = F("Ackerbreite");
        break;
    }
    case 1651:
    {
        returnValue = F("Ackerbrink");
        break;
    }
    case 1652:
    {
        returnValue = F("Ackerbrucher Str.");
        break;
    }
    case 1653:
    {
        returnValue = F("Ackerbrunnengasse");
        break;
    }
    case 1654:
    {
        returnValue = F("Ackerbrunnenstr.");
        break;
    }
    case 1655:
    {
        returnValue = F("Ackerbrunnenweg");
        break;
    }
    case 1656:
    {
        returnValue = F("Ackerbrücke");
        break;
    }
    case 1657:
    {
        returnValue = F("Ackerbrückenweg");
        break;
    }
    case 1658:
    {
        returnValue = F("Ackerbürgerring");
        break;
    }
    case 1659:
    {
        returnValue = F("Ackerbürgerweg");
        break;
    }
    case 1660:
    {
        returnValue = F("Ackerdamm");
        break;
    }
    case 1661:
    {
        returnValue = F("Ackerdelle");
        break;
    }
    case 1662:
    {
        returnValue = F("Ackerdistelweg");
        break;
    }
    case 1663:
    {
        returnValue = F("Ackerende");
        break;
    }
    case 1664:
    {
        returnValue = F("Ackererbergweg");
        break;
    }
    case 1665:
    {
        returnValue = F("Ackerfeld");
        break;
    }
    case 1666:
    {
        returnValue = F("Ackerfelder Dorfstr.");
        break;
    }
    case 1667:
    {
        returnValue = F("Ackerfeldstr.");
        break;
    }
    case 1668:
    {
        returnValue = F("Ackerfenne");
        break;
    }
    case 1669:
    {
        returnValue = F("Ackergarten");
        break;
    }
    case 1670:
    {
        returnValue = F("Ackergasse");
        break;
    }
    case 1671:
    {
        returnValue = F("Ackergäßchen");
        break;
    }
    case 1672:
    {
        returnValue = F("Ackerhagen");
        break;
    }
    case 1673:
    {
        returnValue = F("Ackerhalde");
        break;
    }
    case 1674:
    {
        returnValue = F("Ackerhausen");
        break;
    }
    case 1675:
    {
        returnValue = F("Ackerhauser Weg");
        break;
    }
    case 1676:
    {
        returnValue = F("Ackerhof");
        break;
    }
    case 1677:
    {
        returnValue = F("Ackerhofweg");
        break;
    }
    case 1678:
    {
        returnValue = F("Ackerhummelweg");
        break;
    }
    case 1679:
    {
        returnValue = F("Ackerhöven");
        break;
    }
    case 1680:
    {
        returnValue = F("Ackerkamp");
        break;
    }
    case 1681:
    {
        returnValue = F("Ackerköpfe");
        break;
    }
    case 1682:
    {
        returnValue = F("Ackerlandstr.");
        break;
    }
    case 1683:
    {
        returnValue = F("Ackerlandweg");
        break;
    }
    case 1684:
    {
        returnValue = F("Ackerlebrandstr.");
        break;
    }
    case 1685:
    {
        returnValue = F("Ackerleite");
        break;
    }
    case 1686:
    {
        returnValue = F("Ackerlesweg");
        break;
    }
    case 1687:
    {
        returnValue = F("Ackerlochweg");
        break;
    }
    case 1688:
    {
        returnValue = F("Ackerloh");
        break;
    }
    case 1689:
    {
        returnValue = F("Ackerlweg");
        break;
    }
    case 1690:
    {
        returnValue = F("Ackerlänge");
        break;
    }
    case 1691:
    {
        returnValue = F("Ackermanns Feldweg");
        break;
    }
    case 1692:
    {
        returnValue = F("Ackermanns Weg");
        break;
    }
    case 1693:
    {
        returnValue = F("Ackermannsgasse");
        break;
    }
    case 1694:
    {
        returnValue = F("Ackermannshof");
        break;
    }
    case 1695:
    {
        returnValue = F("Ackermannstr.");
        break;
    }
    case 1696:
    {
        returnValue = F("Ackermannsweg");
        break;
    }
    case 1697:
    {
        returnValue = F("Ackermannswiesenweg");
        break;
    }
    case 1698:
    {
        returnValue = F("Ackermannweg");
        break;
    }
    case 1699:
    {
        returnValue = F("Ackermansfeld");
        break;
    }
    case 1700:
    {
        returnValue = F("Ackermatte");
        break;
    }
    case 1701:
    {
        returnValue = F("Ackern");
        break;
    }
    case 1702:
    {
        returnValue = F("Ackernstr.");
        break;
    }
    case 1703:
    {
        returnValue = F("Ackerpad");
        break;
    }
    case 1704:
    {
        returnValue = F("Ackerpfad");
        break;
    }
    case 1705:
    {
        returnValue = F("Ackerpointstr.");
        break;
    }
    case 1706:
    {
        returnValue = F("Ackerrain");
        break;
    }
    case 1707:
    {
        returnValue = F("Ackerrainstr.");
        break;
    }
    case 1708:
    {
        returnValue = F("Ackerrainweg");
        break;
    }
    case 1709:
    {
        returnValue = F("Ackerring");
        break;
    }
    case 1710:
    {
        returnValue = F("Ackerrose");
        break;
    }
    case 1711:
    {
        returnValue = F("Ackerröte");
        break;
    }
    case 1712:
    {
        returnValue = F("Ackers");
        break;
    }
    case 1713:
    {
        returnValue = F("Ackersbergstr.");
        break;
    }
    case 1714:
    {
        returnValue = F("Ackerscheuer");
        break;
    }
    case 1715:
    {
        returnValue = F("Ackerschlägerweg");
        break;
    }
    case 1716:
    {
        returnValue = F("Ackerschneise");
        break;
    }
    case 1717:
    {
        returnValue = F("Ackersdorf");
        break;
    }
    case 1718:
    {
        returnValue = F("Ackersegenweg");
        break;
    }
    case 1719:
    {
        returnValue = F("Ackersgang");
        break;
    }
    case 1720:
    {
        returnValue = F("Ackersgarten");
        break;
    }
    case 1721:
    {
        returnValue = F("Ackersheide");
        break;
    }
    case 1722:
    {
        returnValue = F("Ackersiepen");
        break;
    }
    case 1723:
    {
        returnValue = F("Ackersieper Weg");
        break;
    }
    case 1724:
    {
        returnValue = F("Ackerskaul");
        break;
    }
    case 1725:
    {
        returnValue = F("Ackersmannstr.");
        break;
    }
    case 1726:
    {
        returnValue = F("Ackersmoor");
        break;
    }
    case 1727:
    {
        returnValue = F("Ackersteige");
        break;
    }
    case 1728:
    {
        returnValue = F("Ackerstr.");
        break;
    }
    case 1729:
    {
        returnValue = F("Ackerstücken");
        break;
    }
    case 1730:
    {
        returnValue = F("Ackersweg");
        break;
    }
    case 1731:
    {
        returnValue = F("Ackert");
        break;
    }
    case 1732:
    {
        returnValue = F("Ackertalstr.");
        break;
    }
    case 1733:
    {
        returnValue = F("Ackerteufelweg");
        break;
    }
    case 1734:
    {
        returnValue = F("Ackertklippe");
        break;
    }
    case 1735:
    {
        returnValue = F("Ackertspforte");
        break;
    }
    case 1736:
    {
        returnValue = F("Ackerwaldweg");
        break;
    }
    case 1737:
    {
        returnValue = F("Ackerwand");
        break;
    }
    case 1738:
    {
        returnValue = F("Ackerweg");
        break;
    }
    case 1739:
    {
        returnValue = F("Ackerweingärten");
        break;
    }
    case 1740:
    {
        returnValue = F("Ackerwiese");
        break;
    }
    case 1741:
    {
        returnValue = F("Ackerwiesen");
        break;
    }
    case 1742:
    {
        returnValue = F("Ackerwiesenstr.");
        break;
    }
    case 1743:
    {
        returnValue = F("Ackerwinde");
        break;
    }
    case 1744:
    {
        returnValue = F("Ackerwindenweg");
        break;
    }
    case 1745:
    {
        returnValue = F("Ackerwinkel");
        break;
    }
    case 1746:
    {
        returnValue = F("Ackfelder Str.");
        break;
    }
    case 1747:
    {
        returnValue = F("Ackhof");
        break;
    }
    case 1748:
    {
        returnValue = F("Ackhöfe");
        break;
    }
    case 1749:
    {
        returnValue = F("Ackstallerweg");
        break;
    }
    case 1750:
    {
        returnValue = F("Acolonweg");
        break;
    }
    case 1751:
    {
        returnValue = F("Acordialstr.");
        break;
    }
    case 1752:
    {
        returnValue = F("Ada-Lessing-Platz");
        break;
    }
    case 1753:
    {
        returnValue = F("Ada-Lessing-Str.");
        break;
    }
    case 1754:
    {
        returnValue = F("Ada-Lovelace-Str.");
        break;
    }
    case 1755:
    {
        returnValue = F("Ada-Lovelace-Weg");
        break;
    }
    case 1756:
    {
        returnValue = F("Adackerstr.");
        break;
    }
    case 1757:
    {
        returnValue = F("Adalastr.");
        break;
    }
    case 1758:
    {
        returnValue = F("Adalberogasse");
        break;
    }
    case 1759:
    {
        returnValue = F("Adalberostr.");
        break;
    }
    case 1760:
    {
        returnValue = F("Adalbert-Brunner-Str.");
        break;
    }
    case 1761:
    {
        returnValue = F("Adalbert-Dengler-Weg");
        break;
    }
    case 1762:
    {
        returnValue = F("Adalbert-Dickhut-Str.");
        break;
    }
    case 1763:
    {
        returnValue = F("Adalbert-Eisenhuth-Str.");
        break;
    }
    case 1764:
    {
        returnValue = F("Adalbert-Falk-Str.");
        break;
    }
    case 1765:
    {
        returnValue = F("Adalbert-Färber-Str.");
        break;
    }
    case 1766:
    {
        returnValue = F("Adalbert-Geheeb-Str.");
        break;
    }
    case 1767:
    {
        returnValue = F("Adalbert-Hein-Weg");
        break;
    }
    case 1768:
    {
        returnValue = F("Adalbert-Kaiser-Str.");
        break;
    }
    case 1769:
    {
        returnValue = F("Adalbert-Kapperer-Platz");
        break;
    }
    case 1770:
    {
        returnValue = F("Adalbert-Keis-Str.");
        break;
    }
    case 1771:
    {
        returnValue = F("Adalbert-Kinzinger-Str.");
        break;
    }
    case 1772:
    {
        returnValue = F("Adalbert-Kraus-Str.");
        break;
    }
    case 1773:
    {
        returnValue = F("Adalbert-Lindner-Str.");
        break;
    }
    case 1774:
    {
        returnValue = F("Adalbert-Menze-Weg");
        break;
    }
    case 1775:
    {
        returnValue = F("Adalbert-Müller-Str.");
        break;
    }
    case 1776:
    {
        returnValue = F("Adalbert-Pilipp-Str.");
        break;
    }
    case 1777:
    {
        returnValue = F("Adalbert-Probst-Str.");
        break;
    }
    case 1778:
    {
        returnValue = F("Adalbert-Raps-Str.");
        break;
    }
    case 1779:
    {
        returnValue = F("Adalbert-Schnatterer-Str.");
        break;
    }
    case 1780:
    {
        returnValue = F("Adalbert-Seifriz-Str.");
        break;
    }
    case 1781:
    {
        returnValue = F("Adalbert-Sifter-Str.");
        break;
    }
    case 1782:
    {
        returnValue = F("Adalbert-Stifter-Allee");
        break;
    }
    case 1783:
    {
        returnValue = F("Adalbert-Stifter-Platz");
        break;
    }
    case 1784:
    {
        returnValue = F("Adalbert-Stifter-Ring");
        break;
    }
    case 1785:
    {
        returnValue = F("Adalbert-Stifter-Siedlung");
        break;
    }
    case 1786:
    {
        returnValue = F("Adalbert-Stifter-Str.");
        break;
    }
    case 1787:
    {
        returnValue = F("Adalbert-Stifter-Weg");
        break;
    }
    case 1788:
    {
        returnValue = F("Adalbert-Stifter-Zeile");
        break;
    }
    case 1789:
    {
        returnValue = F("Adalbert-Stoll-Str.");
        break;
    }
    case 1790:
    {
        returnValue = F("Adalbert-Strifter-Str.");
        break;
    }
    case 1791:
    {
        returnValue = F("Adalbert-Vogl-Str.");
        break;
    }
    case 1792:
    {
        returnValue = F("Adalberthof");
        break;
    }
    case 1793:
    {
        returnValue = F("Adalbertplatz");
        break;
    }
    case 1794:
    {
        returnValue = F("Adalbertsberg");
        break;
    }
    case 1795:
    {
        returnValue = F("Adalbertsteinweg");
        break;
    }
    case 1796:
    {
        returnValue = F("Adalbertstr.");
        break;
    }
    case 1797:
    {
        returnValue = F("Adalfridweg");
        break;
    }
    case 1798:
    {
        returnValue = F("Adalfriedstr.");
        break;
    }
    case 1799:
    {
        returnValue = F("Adalgerstr.");
        break;
    }
    case 1800:
    {
        returnValue = F("Adalhardstr.");
        break;
    }
    case 1801:
    {
        returnValue = F("Adalhildisweg");
        break;
    }
    case 1802:
    {
        returnValue = F("Adalmundstr.");
        break;
    }
    case 1803:
    {
        returnValue = F("Adalmuntstr.");
        break;
    }
    case 1804:
    {
        returnValue = F("Adaloweg");
        break;
    }
    case 1805:
    {
        returnValue = F("Adalperostr.");
        break;
    }
    case 1806:
    {
        returnValue = F("Adam und Eva Weg");
        break;
    }
    case 1807:
    {
        returnValue = F("Adam-Allendorf-Weg");
        break;
    }
    case 1808:
    {
        returnValue = F("Adam-Bausenwein-Str.");
        break;
    }
    case 1809:
    {
        returnValue = F("Adam-Bayer-Str.");
        break;
    }
    case 1810:
    {
        returnValue = F("Adam-Becker-Str.");
        break;
    }
    case 1811:
    {
        returnValue = F("Adam-Berberich-Str.");
        break;
    }
    case 1812:
    {
        returnValue = F("Adam-Berg-Str.");
        break;
    }
    case 1813:
    {
        returnValue = F("Adam-Berner-Str.");
        break;
    }
    case 1814:
    {
        returnValue = F("Adam-Bieber-Str.");
        break;
    }
    case 1815:
    {
        returnValue = F("Adam-Brill-Weg");
        break;
    }
    case 1816:
    {
        returnValue = F("Adam-Bräunig-Str.");
        break;
    }
    case 1817:
    {
        returnValue = F("Adam-Brüderle-Str.");
        break;
    }
    case 1818:
    {
        returnValue = F("Adam-Bürkle-Weg");
        break;
    }
    case 1819:
    {
        returnValue = F("Adam-Dallinger-Str.");
        break;
    }
    case 1820:
    {
        returnValue = F("Adam-Elsheimer-Str.");
        break;
    }
    case 1821:
    {
        returnValue = F("Adam-Eppler-Str.");
        break;
    }
    case 1822:
    {
        returnValue = F("Adam-Erminger-Platz");
        break;
    }
    case 1823:
    {
        returnValue = F("Adam-Fauser-Gässle");
        break;
    }
    case 1824:
    {
        returnValue = F("Adam-Fell-Str.");
        break;
    }
    case 1825:
    {
        returnValue = F("Adam-Fetzer-Weg");
        break;
    }
    case 1826:
    {
        returnValue = F("Adam-Foßhag-Str.");
        break;
    }
    case 1827:
    {
        returnValue = F("Adam-Friedrich-Zürner-Str.");
        break;
    }
    case 1828:
    {
        returnValue = F("Adam-Fuchs-Str.");
        break;
    }
    case 1829:
    {
        returnValue = F("Adam-Geck-Str.");
        break;
    }
    case 1830:
    {
        returnValue = F("Adam-Giesen-Ring");
        break;
    }
    case 1831:
    {
        returnValue = F("Adam-Gottschalk-Str.");
        break;
    }
    case 1832:
    {
        returnValue = F("Adam-Gumpelzhaimer-Str.");
        break;
    }
    case 1833:
    {
        returnValue = F("Adam-Göschl-Str.");
        break;
    }
    case 1834:
    {
        returnValue = F("Adam-Güthlein-Str.");
        break;
    }
    case 1835:
    {
        returnValue = F("Adam-Hall-Str.");
        break;
    }
    case 1836:
    {
        returnValue = F("Adam-Heinstadt-Str.");
        break;
    }
    case 1837:
    {
        returnValue = F("Adam-Henkel-Str.");
        break;
    }
    case 1838:
    {
        returnValue = F("Adam-Herdt-Str.");
        break;
    }
    case 1839:
    {
        returnValue = F("Adam-Hoffmann-Str.");
        break;
    }
    case 1840:
    {
        returnValue = F("Adam-Houx-Str.");
        break;
    }
    case 1841:
    {
        returnValue = F("Adam-Höfle-Weg");
        break;
    }
    case 1842:
    {
        returnValue = F("Adam-Hörber-Str.");
        break;
    }
    case 1843:
    {
        returnValue = F("Adam-Ileborgh-Str.");
        break;
    }
    case 1844:
    {
        returnValue = F("Adam-J.-Krusenstern-Str.");
        break;
    }
    case 1845:
    {
        returnValue = F("Adam-Jessin-Weg");
        break;
    }
    case 1846:
    {
        returnValue = F("Adam-Jourdan-Platz");
        break;
    }
    case 1847:
    {
        returnValue = F("Adam-Karrillon-Str.");
        break;
    }
    case 1848:
    {
        returnValue = F("Adam-Keller-Str.");
        break;
    }
    case 1849:
    {
        returnValue = F("Adam-Klein-Str.");
        break;
    }
    case 1850:
    {
        returnValue = F("Adam-Krafft-Str.");
        break;
    }
    case 1851:
    {
        returnValue = F("Adam-Krafft-Weg");
        break;
    }
    case 1852:
    {
        returnValue = F("Adam-Kraft-Str.");
        break;
    }
    case 1853:
    {
        returnValue = F("Adam-Krapp-Str.");
        break;
    }
    case 1854:
    {
        returnValue = F("Adam-Kreuz-Str.");
        break;
    }
    case 1855:
    {
        returnValue = F("Adam-Krämer-Platz");
        break;
    }
    case 1856:
    {
        returnValue = F("Adam-Kuckhoff-Platz");
        break;
    }
    case 1857:
    {
        returnValue = F("Adam-Kuckhoff-Str.");
        break;
    }
    case 1858:
    {
        returnValue = F("Adam-Lang-Str.");
        break;
    }
    case 1859:
    {
        returnValue = F("Adam-Lattrell-Str.");
        break;
    }
    case 1860:
    {
        returnValue = F("Adam-Lauterbach-Weg");
        break;
    }
    case 1861:
    {
        returnValue = F("Adam-Lechner-Str.");
        break;
    }
    case 1862:
    {
        returnValue = F("Adam-Lehnen-Str.");
        break;
    }
    case 1863:
    {
        returnValue = F("Adam-Leis-Str.");
        break;
    }
    case 1864:
    {
        returnValue = F("Adam-Linden-Str.");
        break;
    }
    case 1865:
    {
        returnValue = F("Adam-Mann-Str.");
        break;
    }
    case 1866:
    {
        returnValue = F("Adam-Marsch-Str.");
        break;
    }
    case 1867:
    {
        returnValue = F("Adam-Mattern-Str.");
        break;
    }
    case 1868:
    {
        returnValue = F("Adam-Möller-Weg");
        break;
    }
    case 1869:
    {
        returnValue = F("Adam-Müller-Guttenbrunn-Str.");
        break;
    }
    case 1870:
    {
        returnValue = F("Adam-Müller-Platz");
        break;
    }
    case 1871:
    {
        returnValue = F("Adam-Müller-Str.");
        break;
    }
    case 1872:
    {
        returnValue = F("Adam-Oechsner-Str.");
        break;
    }
    case 1873:
    {
        returnValue = F("Adam-Olearius-Str.");
        break;
    }
    case 1874:
    {
        returnValue = F("Adam-Olearius-Weg");
        break;
    }
    case 1875:
    {
        returnValue = F("Adam-Opel-Str.");
        break;
    }
    case 1876:
    {
        returnValue = F("Adam-Opel-Weg");
        break;
    }
    case 1877:
    {
        returnValue = F("Adam-Orth-Str.");
        break;
    }
    case 1878:
    {
        returnValue = F("Adam-Pfeuffer-Str.");
        break;
    }
    case 1879:
    {
        returnValue = F("Adam-Preuschl-Str.");
        break;
    }
    case 1880:
    {
        returnValue = F("Adam-Rauch-Str.");
        break;
    }
    case 1881:
    {
        returnValue = F("Adam-Regensburger-Str.");
        break;
    }
    case 1882:
    {
        returnValue = F("Adam-Remmele-Str.");
        break;
    }
    case 1883:
    {
        returnValue = F("Adam-Rettig-Str.");
        break;
    }
    case 1884:
    {
        returnValue = F("Adam-Richter-Weg");
        break;
    }
    case 1885:
    {
        returnValue = F("Adam-Ries-Str.");
        break;
    }
    case 1886:
    {
        returnValue = F("Adam-Riese-Str.");
        break;
    }
    case 1887:
    {
        returnValue = F("Adam-Riese-Weg");
        break;
    }
    case 1888:
    {
        returnValue = F("Adam-Romboy-Str.");
        break;
    }
    case 1889:
    {
        returnValue = F("Adam-Rückert-Str.");
        break;
    }
    case 1890:
    {
        returnValue = F("Adam-Schall-Str.");
        break;
    }
    case 1891:
    {
        returnValue = F("Adam-Scharrer-Weg");
        break;
    }
    case 1892:
    {
        returnValue = F("Adam-Schenk-Str.");
        break;
    }
    case 1893:
    {
        returnValue = F("Adam-Schmitt-Weg");
        break;
    }
    case 1894:
    {
        returnValue = F("Adam-Schreiber-Str.");
        break;
    }
    case 1895:
    {
        returnValue = F("Adam-Schwinn-Str.");
        break;
    }
    case 1896:
    {
        returnValue = F("Adam-Seiler-Str.");
        break;
    }
    case 1897:
    {
        returnValue = F("Adam-Selbert-Str.");
        break;
    }
    case 1898:
    {
        returnValue = F("Adam-Senger-Str.");
        break;
    }
    case 1899:
    {
        returnValue = F("Adam-Siefert-Str.");
        break;
    }
    case 1900:
    {
        returnValue = F("Adam-Stegerwald-Str.");
        break;
    }
    case 1901:
    {
        returnValue = F("Adam-Stegerwald-Weg");
        break;
    }
    case 1902:
    {
        returnValue = F("Adam-Stier-Str.");
        break;
    }
    case 1903:
    {
        returnValue = F("Adam-Thiem-Weg");
        break;
    }
    case 1904:
    {
        returnValue = F("Adam-Titz-Str.");
        break;
    }
    case 1905:
    {
        returnValue = F("Adam-Trabert-Str.");
        break;
    }
    case 1906:
    {
        returnValue = F("Adam-Vogt-Str.");
        break;
    }
    case 1907:
    {
        returnValue = F("Adam-Wagner-Str.");
        break;
    }
    case 1908:
    {
        returnValue = F("Adam-Waldeck-Str.");
        break;
    }
    case 1909:
    {
        returnValue = F("Adam-Weber-Weg");
        break;
    }
    case 1910:
    {
        returnValue = F("Adam-Wehner-Str.");
        break;
    }
    case 1911:
    {
        returnValue = F("Adam-Wehnert-Str.");
        break;
    }
    case 1912:
    {
        returnValue = F("Adam-Weise-Str.");
        break;
    }
    case 1913:
    {
        returnValue = F("Adam-Weiß-Str.");
        break;
    }
    case 1914:
    {
        returnValue = F("Adam-Wiegand-Weg");
        break;
    }
    case 1915:
    {
        returnValue = F("Adam-Wild-Str.");
        break;
    }
    case 1916:
    {
        returnValue = F("Adam-Winkler-Str.");
        break;
    }
    case 1917:
    {
        returnValue = F("Adam-Wolff-Str.");
        break;
    }
    case 1918:
    {
        returnValue = F("Adam-Wrede-Str.");
        break;
    }
    case 1919:
    {
        returnValue = F("Adam-Zeiß-Str.");
        break;
    }
    case 1920:
    {
        returnValue = F("Adam-Zirkel-Str.");
        break;
    }
    case 1921:
    {
        returnValue = F("Adam-Zorn-Str.");
        break;
    }
    case 1922:
    {
        returnValue = F("Adam-Zöller-Str.");
        break;
    }
    case 1923:
    {
        returnValue = F("Adam-von-Au-Str.");
        break;
    }
    case 1924:
    {
        returnValue = F("Adam-von-Itzstein-Str.");
        break;
    }
    case 1925:
    {
        returnValue = F("Adam-von-Pernau-Weg");
        break;
    }
    case 1926:
    {
        returnValue = F("Adam-von-Trott-Str.");
        break;
    }
    case 1927:
    {
        returnValue = F("Adam-von-Trott-Weg");
        break;
    }
    case 1928:
    {
        returnValue = F("Adamenhofweg");
        break;
    }
    case 1929:
    {
        returnValue = F("Adamiberg");
        break;
    }
    case 1930:
    {
        returnValue = F("Adamistr.");
        break;
    }
    case 1931:
    {
        returnValue = F("Adamiwiese");
        break;
    }
    case 1932:
    {
        returnValue = F("Adams-Lehmann-Str.");
        break;
    }
    case 1933:
    {
        returnValue = F("Adamsbacher Str.");
        break;
    }
    case 1934:
    {
        returnValue = F("Adamsberg");
        break;
    }
    case 1935:
    {
        returnValue = F("Adamsbusch");
        break;
    }
    case 1936:
    {
        returnValue = F("Adamschenke");
        break;
    }
    case 1937:
    {
        returnValue = F("Adamsdorf");
        break;
    }
    case 1938:
    {
        returnValue = F("Adamsfeld");
        break;
    }
    case 1939:
    {
        returnValue = F("Adamsgarten");
        break;
    }
    case 1940:
    {
        returnValue = F("Adamsgasse");
        break;
    }
    case 1941:
    {
        returnValue = F("Adamsgärten");
        break;
    }
    case 1942:
    {
        returnValue = F("Adamshof");
        break;
    }
    case 1943:
    {
        returnValue = F("Adamsmühle");
        break;
    }
    case 1944:
    {
        returnValue = F("Adamspfad");
        break;
    }
    case 1945:
    {
        returnValue = F("Adamspforte");
        break;
    }
    case 1946:
    {
        returnValue = F("Adamsschneise");
        break;
    }
    case 1947:
    {
        returnValue = F("Adamsstr.");
        break;
    }
    case 1948:
    {
        returnValue = F("Adamstieg");
        break;
    }
    case 1949:
    {
        returnValue = F("Adamstr.");
        break;
    }
    case 1950:
    {
        returnValue = F("Adamswalder Weg");
        break;
    }
    case 1951:
    {
        returnValue = F("Adamsweg");
        break;
    }
    case 1952:
    {
        returnValue = F("Adamweg");
        break;
    }
    case 1953:
    {
        returnValue = F("Adastr.");
        break;
    }
    case 1954:
    {
        returnValue = F("Addebüll");
        break;
    }
    case 1955:
    {
        returnValue = F("Addebüller Weg");
        break;
    }
    case 1956:
    {
        returnValue = F("Addenhausen");
        break;
    }
    case 1957:
    {
        returnValue = F("Addenstorfer Str.");
        break;
    }
    case 1958:
    {
        returnValue = F("Addenstorfer Weg");
        break;
    }
    case 1959:
    {
        returnValue = F("Addermoor");
        break;
    }
    case 1960:
    {
        returnValue = F("Addernhausener Str.");
        break;
    }
    case 1961:
    {
        returnValue = F("Addernhauser Str.");
        break;
    }
    case 1962:
    {
        returnValue = F("Addernhauser Weg");
        break;
    }
    case 1963:
    {
        returnValue = F("Addi-Merten-Str.");
        break;
    }
    case 1964:
    {
        returnValue = F("Addicksweg");
        break;
    }
    case 1965:
    {
        returnValue = F("Addinggaster Weg");
        break;
    }
    case 1966:
    {
        returnValue = F("Adebarstr.");
        break;
    }
    case 1967:
    {
        returnValue = F("Adebarsweg");
        break;
    }
    case 1968:
    {
        returnValue = F("Adebarweg");
        break;
    }
    case 1969:
    {
        returnValue = F("Adeborsweg");
        break;
    }
    case 1970:
    {
        returnValue = F("Adegasse");
        break;
    }
    case 1971:
    {
        returnValue = F("Adelagasse");
        break;
    }
    case 1972:
    {
        returnValue = F("Adelbachstr.");
        break;
    }
    case 1973:
    {
        returnValue = F("Adelberg");
        break;
    }
    case 1974:
    {
        returnValue = F("Adelberger Haldeweg");
        break;
    }
    case 1975:
    {
        returnValue = F("Adelberger Str.");
        break;
    }
    case 1976:
    {
        returnValue = F("Adelberger Weg");
        break;
    }
    case 1977:
    {
        returnValue = F("Adelbergergasse");
        break;
    }
    case 1978:
    {
        returnValue = F("Adelbergerweg");
        break;
    }
    case 1979:
    {
        returnValue = F("Adelbergstr.");
        break;
    }
    case 1980:
    {
        returnValue = F("Adelbergweg");
        break;
    }
    case 1981:
    {
        returnValue = F("Adelberostr.");
        break;
    }
    case 1982:
    {
        returnValue = F("Adelbert-Beck-Str.");
        break;
    }
    case 1983:
    {
        returnValue = F("Adelbert-Haas-Str.");
        break;
    }
    case 1984:
    {
        returnValue = F("Adelbert-Hofmann-Str.");
        break;
    }
    case 1985:
    {
        returnValue = F("Adelbert-Kühmstädt-Str.");
        break;
    }
    case 1986:
    {
        returnValue = F("Adelbert-Schröter-Str.");
        break;
    }
    case 1987:
    {
        returnValue = F("Adelbertstr.");
        break;
    }
    case 1988:
    {
        returnValue = F("Adelbertusstr.");
        break;
    }
    case 1989:
    {
        returnValue = F("Adelbertweg");
        break;
    }
    case 1990:
    {
        returnValue = F("Adelbortenstr.");
        break;
    }
    case 1991:
    {
        returnValue = F("Adelbyer Kirchenweg");
        break;
    }
    case 1992:
    {
        returnValue = F("Adelbyer Str.");
        break;
    }
    case 1993:
    {
        returnValue = F("Adelbyer Weg");
        break;
    }
    case 1994:
    {
        returnValue = F("Adelbyheck");
        break;
    }
    case 1995:
    {
        returnValue = F("Adelbykamp");
        break;
    }
    case 1996:
    {
        returnValue = F("Adelbylund");
        break;
    }
    case 1997:
    {
        returnValue = F("Adelbytoft");
        break;
    }
    case 1998:
    {
        returnValue = F("Adeldornring");
        break;
    }
    case 1999:
    {
        returnValue = F("Adele-Bartsch-Str.");
        break;
    }
    case 2000:
    {
        returnValue = F("Adele-Elkan-Str.");
        break;
    }
    case 2001:
    {
        returnValue = F("Adele-Gerhard-Str.");
        break;
    }
    case 2002:
    {
        returnValue = F("Adele-Hartmann-Str.");
        break;
    }
    case 2003:
    {
        returnValue = F("Adele-Sandrock-Stieg");
        break;
    }
    case 2004:
    {
        returnValue = F("Adele-Schopenhauer-Weg");
        break;
    }
    case 2005:
    {
        returnValue = F("Adele-Tiesler-Weg");
        break;
    }
    case 2006:
    {
        returnValue = F("Adele-Weidtman-Str.");
        break;
    }
    case 2007:
    {
        returnValue = F("Adelebser Str.");
        break;
    }
    case 2008:
    {
        returnValue = F("Adelebser Weg");
        break;
    }
    case 2009:
    {
        returnValue = F("Adelegg");
        break;
    }
    case 2010:
    {
        returnValue = F("Adeleggstr.");
        break;
    }
    case 2011:
    {
        returnValue = F("Adeleggweg");
        break;
    }
    case 2012:
    {
        returnValue = F("Adelenhof");
        break;
    }
    case 2013:
    {
        returnValue = F("Adelenstr.");
        break;
    }
    case 2014:
    {
        returnValue = F("Adelenweg");
        break;
    }
    case 2015:
    {
        returnValue = F("Adelgardweg");
        break;
    }
    case 2016:
    {
        returnValue = F("Adelgonda-Wolbring-Weg");
        break;
    }
    case 2017:
    {
        returnValue = F("Adelgonde-Wolbring-Str.");
        break;
    }
    case 2018:
    {
        returnValue = F("Adelgunde-Gottsched-Weg");
        break;
    }
    case 2019:
    {
        returnValue = F("Adelgundenstr.");
        break;
    }
    case 2020:
    {
        returnValue = F("Adelgundenweg");
        break;
    }
    case 2021:
    {
        returnValue = F("Adelgundeweg");
        break;
    }
    case 2022:
    {
        returnValue = F("Adelgundisstr.");
        break;
    }
    case 2023:
    {
        returnValue = F("Adelgundisweg");
        break;
    }
    case 2024:
    {
        returnValue = F("Adelhardsgasse");
        break;
    }
    case 2025:
    {
        returnValue = F("Adelhartstr.");
        break;
    }
    case 2026:
    {
        returnValue = F("Adelhartweg");
        break;
    }
    case 2027:
    {
        returnValue = F("Adelhauser Str.");
        break;
    }
    case 2028:
    {
        returnValue = F("Adelheid");
        break;
    }
    case 2029:
    {
        returnValue = F("Adelheid-Braun-Str.");
        break;
    }
    case 2030:
    {
        returnValue = F("Adelheid-Dietrich-Str.");
        break;
    }
    case 2031:
    {
        returnValue = F("Adelheid-Donderer-Str.");
        break;
    }
    case 2032:
    {
        returnValue = F("Adelheid-Reinbold-Hof");
        break;
    }
    case 2033:
    {
        returnValue = F("Adelheid-Steinmann-Str.");
        break;
    }
    case 2034:
    {
        returnValue = F("Adelheiden");
        break;
    }
    case 2035:
    {
        returnValue = F("Adelheider Str.");
        break;
    }
    case 2036:
    {
        returnValue = F("Adelheider Weg");
        break;
    }
    case 2037:
    {
        returnValue = F("Adelheidisplatz");
        break;
    }
    case 2038:
    {
        returnValue = F("Adelheidisstr.");
        break;
    }
    case 2039:
    {
        returnValue = F("Adelheidpark");
        break;
    }
    case 2040:
    {
        returnValue = F("Adelheidring");
        break;
    }
    case 2041:
    {
        returnValue = F("Adelheidsruh");
        break;
    }
    case 2042:
    {
        returnValue = F("Adelheidstr.");
        break;
    }
    case 2043:
    {
        returnValue = F("Adelheidweg");
        break;
    }
    case 2044:
    {
        returnValue = F("Adelheitstr.");
        break;
    }
    case 2045:
    {
        returnValue = F("Adelhof");
        break;
    }
    case 2046:
    {
        returnValue = F("Adelhofen");
        break;
    }
    case 2047:
    {
        returnValue = F("Adelhofer Str.");
        break;
    }
    case 2048:
    {
        returnValue = F("Adelholmstr.");
        break;
    }
    case 2049:
    {
        returnValue = F("Adelholzener Str.");
        break;
    }
    case 2050:
    {
        returnValue = F("Adelholzweg");
        break;
    }
    case 2051:
    {
        returnValue = F("Adelhäuser Dorfstr.");
        break;
    }
    case 2052:
    {
        returnValue = F("Adelhäuser Kirchgasse");
        break;
    }
    case 2053:
    {
        returnValue = F("Adelhäuser Str.");
        break;
    }
    case 2054:
    {
        returnValue = F("Adelhöferstr.");
        break;
    }
    case 2055:
    {
        returnValue = F("Adelindastr.");
        break;
    }
    case 2056:
    {
        returnValue = F("Adelindisstr.");
        break;
    }
    case 2057:
    {
        returnValue = F("Adeline-Jöster-Weg");
        break;
    }
    case 2058:
    {
        returnValue = F("Adelinenstr.");
        break;
    }
    case 2059:
    {
        returnValue = F("Adelingstr.");
        break;
    }
    case 2060:
    {
        returnValue = F("Adelkampstr.");
        break;
    }
    case 2061:
    {
        returnValue = F("Adelmannsdorf");
        break;
    }
    case 2062:
    {
        returnValue = F("Adelmannsfelder Str.");
        break;
    }
    case 2063:
    {
        returnValue = F("Adelmannsgasse");
        break;
    }
    case 2064:
    {
        returnValue = F("Adelmannsgehrenstr.");
        break;
    }
    case 2065:
    {
        returnValue = F("Adelmannssitz");
        break;
    }
    case 2066:
    {
        returnValue = F("Adelmannstr.");
        break;
    }
    case 2067:
    {
        returnValue = F("Adelmannweg");
        break;
    }
    case 2068:
    {
        returnValue = F("Adelmundsmoor");
        break;
    }
    case 2069:
    {
        returnValue = F("Adelmutstr.");
        break;
    }
    case 2070:
    {
        returnValue = F("Adelogstr.");
        break;
    }
    case 2071:
    {
        returnValue = F("Adelonstr.");
        break;
    }
    case 2072:
    {
        returnValue = F("Adelphusweg");
        break;
    }
    case 2073:
    {
        returnValue = F("Adelrichstr.");
        break;
    }
    case 2074:
    {
        returnValue = F("Adelsbach-Kreisel");
        break;
    }
    case 2075:
    {
        returnValue = F("Adelsbachstr.");
        break;
    }
    case 2076:
    {
        returnValue = F("Adelsbachweg");
        break;
    }
    case 2077:
    {
        returnValue = F("Adelsberg");
        break;
    }
    case 2078:
    {
        returnValue = F("Adelsberg-Blauen");
        break;
    }
    case 2079:
    {
        returnValue = F("Adelsberger Höhe");
        break;
    }
    case 2080:
    {
        returnValue = F("Adelsberger Str.");
        break;
    }
    case 2081:
    {
        returnValue = F("Adelsberger Weg");
        break;
    }
    case 2082:
    {
        returnValue = F("Adelsbergstr.");
        break;
    }
    case 2083:
    {
        returnValue = F("Adelsbergweg");
        break;
    }
    case 2084:
    {
        returnValue = F("Adelsborn");
        break;
    }
    case 2085:
    {
        returnValue = F("Adelsbredde");
        break;
    }
    case 2086:
    {
        returnValue = F("Adelsbrunnenweg");
        break;
    }
    case 2087:
    {
        returnValue = F("Adelsbühnstr.");
        break;
    }
    case 2088:
    {
        returnValue = F("Adelsdorfer Blick");
        break;
    }
    case 2089:
    {
        returnValue = F("Adelsdorfer Dorfstr.");
        break;
    }
    case 2090:
    {
        returnValue = F("Adelsdorfer Str.");
        break;
    }
    case 2091:
    {
        returnValue = F("Adelsdorfer Weg");
        break;
    }
    case 2092:
    {
        returnValue = F("Adelsgasse");
        break;
    }
    case 2093:
    {
        returnValue = F("Adelsgraben");
        break;
    }
    case 2094:
    {
        returnValue = F("Adelsgrundstr.");
        break;
    }
    case 2095:
    {
        returnValue = F("Adelshausen");
        break;
    }
    case 2096:
    {
        returnValue = F("Adelshausener Str.");
        break;
    }
    case 2097:
    {
        returnValue = F("Adelshausener Weg");
        break;
    }
    case 2098:
    {
        returnValue = F("Adelsheimer Str.");
        break;
    }
    case 2099:
    {
        returnValue = F("Adelshof");
        break;
    }
    case 2100:
    {
        returnValue = F("Adelshofener Str.");
        break;
    }
    case 2101:
    {
        returnValue = F("Adelshofer Str.");
        break;
    }
    case 2102:
    {
        returnValue = F("Adelshäuserweg");
        break;
    }
    case 2103:
    {
        returnValue = F("Adelspfad");
        break;
    }
    case 2104:
    {
        returnValue = F("Adelsreute");
        break;
    }
    case 2105:
    {
        returnValue = F("Adelsreuter Str.");
        break;
    }
    case 2106:
    {
        returnValue = F("Adelsrieder Str.");
        break;
    }
    case 2107:
    {
        returnValue = F("Adelstedt");
        break;
    }
    case 2108:
    {
        returnValue = F("Adelstedter Str.");
        break;
    }
    case 2109:
    {
        returnValue = F("Adelstetter Str.");
        break;
    }
    case 2110:
    {
        returnValue = F("Adelstr.");
        break;
    }
    case 2111:
    {
        returnValue = F("Adelstätter Weg");
        break;
    }
    case 2112:
    {
        returnValue = F("Adelsweg");
        break;
    }
    case 2113:
    {
        returnValue = F("Adeltal");
        break;
    }
    case 2114:
    {
        returnValue = F("Adelungstr.");
        break;
    }
    case 2115:
    {
        returnValue = F("Adelword");
        break;
    }
    case 2116:
    {
        returnValue = F("Adenau Str.");
        break;
    }
    case 2117:
    {
        returnValue = F("Adenauer Allee");
        break;
    }
    case 2118:
    {
        returnValue = F("Adenauer Forst");
        break;
    }
    case 2119:
    {
        returnValue = F("Adenauer Kreuzweg");
        break;
    }
    case 2120:
    {
        returnValue = F("Adenauer Str.");
        break;
    }
    case 2121:
    {
        returnValue = F("Adenauer Weg");
        break;
    }
    case 2122:
    {
        returnValue = F("Adenauer-Park");
        break;
    }
    case 2123:
    {
        returnValue = F("Adenauer-Str.");
        break;
    }
    case 2124:
    {
        returnValue = F("Adenauerallee");
        break;
    }
    case 2125:
    {
        returnValue = F("Adenauerbrücke");
        break;
    }
    case 2126:
    {
        returnValue = F("Adenauerdamm");
        break;
    }
    case 2127:
    {
        returnValue = F("Adenauerpark");
        break;
    }
    case 2128:
    {
        returnValue = F("Adenauerplatz");
        break;
    }
    case 2129:
    {
        returnValue = F("Adenauerring");
        break;
    }
    case 2130:
    {
        returnValue = F("Adenauerstr.");
        break;
    }
    case 2131:
    {
        returnValue = F("Adenauerweg");
        break;
    }
    case 2132:
    {
        returnValue = F("Adenbacher Str.");
        break;
    }
    case 2133:
    {
        returnValue = F("Adenbachhutstr.");
        break;
    }
    case 2134:
    {
        returnValue = F("Adenbauerneckleweg");
        break;
    }
    case 2135:
    {
        returnValue = F("Adenbergstr.");
        break;
    }
    case 2136:
    {
        returnValue = F("Adenbergweg");
        break;
    }
    case 2137:
    {
        returnValue = F("Adenbühl");
        break;
    }
    case 2138:
    {
        returnValue = F("Adendorfer Allee");
        break;
    }
    case 2139:
    {
        returnValue = F("Adendorfer Str.");
        break;
    }
    case 2140:
    {
        returnValue = F("Adendorfer Weg");
        break;
    }
    case 2141:
    {
        returnValue = F("Adenemer Weg");
        break;
    }
    case 2142:
    {
        returnValue = F("Adenhausen");
        break;
    }
    case 2143:
    {
        returnValue = F("Adenmühle");
        break;
    }
    case 2144:
    {
        returnValue = F("Adenoyser Str.");
        break;
    }
    case 2145:
    {
        returnValue = F("Adenrother Weg");
        break;
    }
    case 2146:
    {
        returnValue = F("Adenseifen");
        break;
    }
    case 2147:
    {
        returnValue = F("Adenser Str.");
        break;
    }
    case 2148:
    {
        returnValue = F("Adenstedter Str.");
        break;
    }
    case 2149:
    {
        returnValue = F("Adental");
        break;
    }
    case 2150:
    {
        returnValue = F("Aderbornstr.");
        break;
    }
    case 2151:
    {
        returnValue = F("Aderdamm");
        break;
    }
    case 2152:
    {
        returnValue = F("Aderkirchweg");
        break;
    }
    case 2153:
    {
        returnValue = F("Aderkrutweg");
        break;
    }
    case 2154:
    {
        returnValue = F("Aderlaake");
        break;
    }
    case 2155:
    {
        returnValue = F("Aderleiten");
        break;
    }
    case 2156:
    {
        returnValue = F("Aderluch");
        break;
    }
    case 2157:
    {
        returnValue = F("Adermann");
        break;
    }
    case 2158:
    {
        returnValue = F("Aderräuscherweg");
        break;
    }
    case 2159:
    {
        returnValue = F("Adersbacher Str.");
        break;
    }
    case 2160:
    {
        returnValue = F("Adersbacher Weg");
        break;
    }
    case 2161:
    {
        returnValue = F("Adersberger Str.");
        break;
    }
    case 2162:
    {
        returnValue = F("Adersheimer Str.");
        break;
    }
    case 2163:
    {
        returnValue = F("Adersstr.");
        break;
    }
    case 2164:
    {
        returnValue = F("Aderstedter Str.");
        break;
    }
    case 2165:
    {
        returnValue = F("Adertshausen");
        break;
    }
    case 2166:
    {
        returnValue = F("Aderweg");
        break;
    }
    case 2167:
    {
        returnValue = F("Adessoplatz");
        break;
    }
    case 2168:
    {
        returnValue = F("Adestr.");
        break;
    }
    case 2169:
    {
        returnValue = F("Adeweg");
        break;
    }
    case 2170:
    {
        returnValue = F("Adi-Dassler-Str.");
        break;
    }
    case 2171:
    {
        returnValue = F("Adi-Preißler-Allee");
        break;
    }
    case 2172:
    {
        returnValue = F("Adickesallee");
        break;
    }
    case 2173:
    {
        returnValue = F("Adickesstr.");
        break;
    }
    case 2174:
    {
        returnValue = F("Adigstr.");
        break;
    }
    case 2175:
    {
        returnValue = F("Adigweg");
        break;
    }
    case 2176:
    {
        returnValue = F("Adilgerstr.");
        break;
    }
    case 2177:
    {
        returnValue = F("Adilostr.");
        break;
    }
    case 2178:
    {
        returnValue = F("Adinda-Flemmich-Str.");
        break;
    }
    case 2179:
    {
        returnValue = F("Adjutantenkamp");
        break;
    }
    case 2180:
    {
        returnValue = F("Adjutantenweg");
        break;
    }
    case 2181:
    {
        returnValue = F("Adlatenthun");
        break;
    }
    case 2182:
    {
        returnValue = F("Adlding");
        break;
    }
    case 2183:
    {
        returnValue = F("Adler");
        break;
    }
    case 2184:
    {
        returnValue = F("Adler Kali");
        break;
    }
    case 2185:
    {
        returnValue = F("Adler Kreisverkehr");
        break;
    }
    case 2186:
    {
        returnValue = F("Adler-Gang");
        break;
    }
    case 2187:
    {
        returnValue = F("Adler-Kreisel");
        break;
    }
    case 2188:
    {
        returnValue = F("Adlerberg");
        break;
    }
    case 2189:
    {
        returnValue = F("Adlerbergstr.");
        break;
    }
    case 2190:
    {
        returnValue = F("Adlerbräustr.");
        break;
    }
    case 2191:
    {
        returnValue = F("Adlerdamm");
        break;
    }
    case 2192:
    {
        returnValue = F("Adlereck");
        break;
    }
    case 2193:
    {
        returnValue = F("Adlerfarn");
        break;
    }
    case 2194:
    {
        returnValue = F("Adlerfarnstr.");
        break;
    }
    case 2195:
    {
        returnValue = F("Adlerfelsenweg");
        break;
    }
    case 2196:
    {
        returnValue = F("Adlerflychtplatz");
        break;
    }
    case 2197:
    {
        returnValue = F("Adlerflychtstr.");
        break;
    }
    case 2198:
    {
        returnValue = F("Adlergasse");
        break;
    }
    case 2199:
    {
        returnValue = F("Adlergebirgsstr.");
        break;
    }
    case 2200:
    {
        returnValue = F("Adlergässchen");
        break;
    }
    case 2201:
    {
        returnValue = F("Adlergässle");
        break;
    }
    case 2202:
    {
        returnValue = F("Adlergäßchen");
        break;
    }
    case 2203:
    {
        returnValue = F("Adlergäßlein");
        break;
    }
    case 2204:
    {
        returnValue = F("Adlerhof");
        break;
    }
    case 2205:
    {
        returnValue = F("Adlerhorst");
        break;
    }
    case 2206:
    {
        returnValue = F("Adlerhügelweg");
        break;
    }
    case 2207:
    {
        returnValue = F("Adlerhütte");
        break;
    }
    case 2208:
    {
        returnValue = F("Adlerkamp");
        break;
    }
    case 2209:
    {
        returnValue = F("Adlermühle");
        break;
    }
    case 2210:
    {
        returnValue = F("Adlernest");
        break;
    }
    case 2211:
    {
        returnValue = F("Adlernestweg");
        break;
    }
    case 2212:
    {
        returnValue = F("Adlerpassage");
        break;
    }
    case 2213:
    {
        returnValue = F("Adlerpfad");
        break;
    }
    case 2214:
    {
        returnValue = F("Adlerplatz");
        break;
    }
    case 2215:
    {
        returnValue = F("Adlerring");
        break;
    }
    case 2216:
    {
        returnValue = F("Adlersbach");
        break;
    }
    case 2217:
    {
        returnValue = F("Adlersberg");
        break;
    }
    case 2218:
    {
        returnValue = F("Adlersbergstr.");
        break;
    }
    case 2219:
    {
        returnValue = F("Adlerschanze");
        break;
    }
    case 2220:
    {
        returnValue = F("Adlershelmstr.");
        break;
    }
    case 2221:
    {
        returnValue = F("Adlershorster Weg");
        break;
    }
    case 2222:
    {
        returnValue = F("Adlershorststr.");
        break;
    }
    case 2223:
    {
        returnValue = F("Adlerskron");
        break;
    }
    case 2224:
    {
        returnValue = F("Adlerstaffel");
        break;
    }
    case 2225:
    {
        returnValue = F("Adlersteige");
        break;
    }
    case 2226:
    {
        returnValue = F("Adlersteinweg");
        break;
    }
    case 2227:
    {
        returnValue = F("Adlerstieg");
        break;
    }
    case 2228:
    {
        returnValue = F("Adlerstonberg");
        break;
    }
    case 2229:
    {
        returnValue = F("Adlerstr.");
        break;
    }
    case 2230:
    {
        returnValue = F("Adlerwarte");
        break;
    }
    case 2231:
    {
        returnValue = F("Adlerweg");
        break;
    }
    case 2232:
    {
        returnValue = F("Adlerwiese");
        break;
    }
    case 2233:
    {
        returnValue = F("Adlerwiesenschneise");
        break;
    }
    case 2234:
    {
        returnValue = F("Adlerwirtsgasse");
        break;
    }
    case 2235:
    {
        returnValue = F("Adlerwirtsweg");
        break;
    }
    case 2236:
    {
        returnValue = F("Adlesweg");
        break;
    }
    case 2237:
    {
        returnValue = F("Adlfurter Str.");
        break;
    }
    case 2238:
    {
        returnValue = F("Adlgasse");
        break;
    }
    case 2239:
    {
        returnValue = F("Adlgasser Str.");
        break;
    }
    case 2240:
    {
        returnValue = F("Adlgastag");
        break;
    }
    case 2241:
    {
        returnValue = F("Adlgaß");
        break;
    }
    case 2242:
    {
        returnValue = F("Adlgehring");
        break;
    }
    case 2243:
    {
        returnValue = F("Adlig Reetz");
        break;
    }
    case 2244:
    {
        returnValue = F("Adling");
        break;
    }
    case 2245:
    {
        returnValue = F("Adlinger Str.");
        break;
    }
    case 2246:
    {
        returnValue = F("Adlitzer Weg");
        break;
    }
    case 2247:
    {
        returnValue = F("Adlmannig");
        break;
    }
    case 2248:
    {
        returnValue = F("Adlmannsberger Weg");
        break;
    }
    case 2249:
    {
        returnValue = F("Adloffstr.");
        break;
    }
    case 2250:
    {
        returnValue = F("Adlschalkweg");
        break;
    }
    case 2251:
    {
        returnValue = F("Adlsteiner Str.");
        break;
    }
    case 2252:
    {
        returnValue = F("Adlumer Str.");
        break;
    }
    case 2253:
    {
        returnValue = F("Adlusstr.");
        break;
    }
    case 2254:
    {
        returnValue = F("Adlzreiterstr.");
        break;
    }
    case 2255:
    {
        returnValue = F("Admannshäger Damm");
        break;
    }
    case 2256:
    {
        returnValue = F("Admannshäger Weg");
        break;
    }
    case 2257:
    {
        returnValue = F("Admiral-Brommy-Weg");
        break;
    }
    case 2258:
    {
        returnValue = F("Admiral-Hipper-Passage");
        break;
    }
    case 2259:
    {
        returnValue = F("Admiral-Hipper-Str.");
        break;
    }
    case 2260:
    {
        returnValue = F("Admiral-Klatt-Str.");
        break;
    }
    case 2261:
    {
        returnValue = F("Admiral-Knorr-Str.");
        break;
    }
    case 2262:
    {
        returnValue = F("Admiral-Rosendahl-Str.");
        break;
    }
    case 2263:
    {
        returnValue = F("Admiral-Scheer-Blick");
        break;
    }
    case 2264:
    {
        returnValue = F("Admiral-Scheer-Str.");
        break;
    }
    case 2265:
    {
        returnValue = F("Admiral-Spee-Str.");
        break;
    }
    case 2266:
    {
        returnValue = F("Admiral-Zenker-Str.");
        break;
    }
    case 2267:
    {
        returnValue = F("Admiralbogen");
        break;
    }
    case 2268:
    {
        returnValue = F("Admiralplatz");
        break;
    }
    case 2269:
    {
        returnValue = F("Admiralskoppel");
        break;
    }
    case 2270:
    {
        returnValue = F("Admiralstr.");
        break;
    }
    case 2271:
    {
        returnValue = F("Admiralsweg");
        break;
    }
    case 2272:
    {
        returnValue = F("Admiralweg");
        break;
    }
    case 2273:
    {
        returnValue = F("Admonter Ring");
        break;
    }
    case 2274:
    {
        returnValue = F("Admonter Str.");
        break;
    }
    case 2275:
    {
        returnValue = F("Adnet-Str.");
        break;
    }
    case 2276:
    {
        returnValue = F("Adolf von Braunmuehl Str.");
        break;
    }
    case 2277:
    {
        returnValue = F("Adolf-Aber-Str.");
        break;
    }
    case 2278:
    {
        returnValue = F("Adolf-Ahlers-Str.");
        break;
    }
    case 2279:
    {
        returnValue = F("Adolf-Aich-Str.");
        break;
    }
    case 2280:
    {
        returnValue = F("Adolf-Alter-Str.");
        break;
    }
    case 2281:
    {
        returnValue = F("Adolf-Amann-Str.");
        break;
    }
    case 2282:
    {
        returnValue = F("Adolf-Amberg-Str.");
        break;
    }
    case 2283:
    {
        returnValue = F("Adolf-Amelung-Weg");
        break;
    }
    case 2284:
    {
        returnValue = F("Adolf-Armbruster-Str.");
        break;
    }
    case 2285:
    {
        returnValue = F("Adolf-Arnold-Weg");
        break;
    }
    case 2286:
    {
        returnValue = F("Adolf-August-Str.");
        break;
    }
    case 2287:
    {
        returnValue = F("Adolf-Baader-Str.");
        break;
    }
    case 2288:
    {
        returnValue = F("Adolf-Bach-Promenade");
        break;
    }
    case 2289:
    {
        returnValue = F("Adolf-Baer-Platz");
        break;
    }
    case 2290:
    {
        returnValue = F("Adolf-Baeyer-Damm");
        break;
    }
    case 2291:
    {
        returnValue = F("Adolf-Baeyer-Str.");
        break;
    }
    case 2292:
    {
        returnValue = F("Adolf-Barth-Str.");
        break;
    }
    case 2293:
    {
        returnValue = F("Adolf-Bauer-Str.");
        break;
    }
    case 2294:
    {
        returnValue = F("Adolf-Bauer-Weg");
        break;
    }
    case 2295:
    {
        returnValue = F("Adolf-Bayer-Str.");
        break;
    }
    case 2296:
    {
        returnValue = F("Adolf-Bechler-Str.");
        break;
    }
    case 2297:
    {
        returnValue = F("Adolf-Becker-Str.");
        break;
    }
    case 2298:
    {
        returnValue = F("Adolf-Beermann-Str.");
        break;
    }
    case 2299:
    {
        returnValue = F("Adolf-Behrens-Str.");
        break;
    }
    case 2300:
    {
        returnValue = F("Adolf-Bell-Weg");
        break;
    }
    case 2301:
    {
        returnValue = F("Adolf-Bensinger-Str.");
        break;
    }
    case 2302:
    {
        returnValue = F("Adolf-Berckhemer-Str.");
        break;
    }
    case 2303:
    {
        returnValue = F("Adolf-Berger-Str.");
        break;
    }
    case 2304:
    {
        returnValue = F("Adolf-Bernhard-Str.");
        break;
    }
    case 2305:
    {
        returnValue = F("Adolf-Bessel-Str.");
        break;
    }
    case 2306:
    {
        returnValue = F("Adolf-Best-Weg");
        break;
    }
    case 2307:
    {
        returnValue = F("Adolf-Bidlingmaier-Str.");
        break;
    }
    case 2308:
    {
        returnValue = F("Adolf-Bieringer-Str.");
        break;
    }
    case 2309:
    {
        returnValue = F("Adolf-Bingel-Str.");
        break;
    }
    case 2310:
    {
        returnValue = F("Adolf-Blomeyer Brücke");
        break;
    }
    case 2311:
    {
        returnValue = F("Adolf-Bohnen-Weg");
        break;
    }
    case 2312:
    {
        returnValue = F("Adolf-Bolte-Str.");
        break;
    }
    case 2313:
    {
        returnValue = F("Adolf-Braun-Str.");
        break;
    }
    case 2314:
    {
        returnValue = F("Adolf-Brechter-Str.");
        break;
    }
    case 2315:
    {
        returnValue = F("Adolf-Brenne-Weg");
        break;
    }
    case 2316:
    {
        returnValue = F("Adolf-Brochhaus-Str.");
        break;
    }
    case 2317:
    {
        returnValue = F("Adolf-Brütt-Str.");
        break;
    }
    case 2318:
    {
        returnValue = F("Adolf-Brütt-Weg");
        break;
    }
    case 2319:
    {
        returnValue = F("Adolf-Budde-Str.");
        break;
    }
    case 2320:
    {
        returnValue = F("Adolf-Butenandt-Str.");
        break;
    }
    case 2321:
    {
        returnValue = F("Adolf-Bätge-Str.");
        break;
    }
    case 2322:
    {
        returnValue = F("Adolf-Bäumle-Str.");
        break;
    }
    case 2323:
    {
        returnValue = F("Adolf-Böhl-Str.");
        break;
    }
    case 2324:
    {
        returnValue = F("Adolf-Böhle-Weg");
        break;
    }
    case 2325:
    {
        returnValue = F("Adolf-Bühler-Weg");
        break;
    }
    case 2326:
    {
        returnValue = F("Adolf-Clarenbach-Str.");
        break;
    }
    case 2327:
    {
        returnValue = F("Adolf-Cloeter-Str.");
        break;
    }
    case 2328:
    {
        returnValue = F("Adolf-Cluss-Brücke");
        break;
    }
    case 2329:
    {
        returnValue = F("Adolf-Cramer-Str.");
        break;
    }
    case 2330:
    {
        returnValue = F("Adolf-Cuntz-Str.");
        break;
    }
    case 2331:
    {
        returnValue = F("Adolf-Damaschke-Platz");
        break;
    }
    case 2332:
    {
        returnValue = F("Adolf-Damaschke-Ring");
        break;
    }
    case 2333:
    {
        returnValue = F("Adolf-Damaschke-Str.");
        break;
    }
    case 2334:
    {
        returnValue = F("Adolf-Dambach-Str.");
        break;
    }
    case 2335:
    {
        returnValue = F("Adolf-Dasbach-Str.");
        break;
    }
    case 2336:
    {
        returnValue = F("Adolf-Dechert-Str.");
        break;
    }
    case 2337:
    {
        returnValue = F("Adolf-Dembach-Str.");
        break;
    }
    case 2338:
    {
        returnValue = F("Adolf-Diesterweg-Ring");
        break;
    }
    case 2339:
    {
        returnValue = F("Adolf-Diesterweg-Str.");
        break;
    }
    case 2340:
    {
        returnValue = F("Adolf-Diestweg-Ring");
        break;
    }
    case 2341:
    {
        returnValue = F("Adolf-Dietz-Str.");
        break;
    }
    case 2342:
    {
        returnValue = F("Adolf-Donders-Allee");
        break;
    }
    case 2343:
    {
        returnValue = F("Adolf-Dunkmann-Str.");
        break;
    }
    case 2344:
    {
        returnValue = F("Adolf-Edel-Str.");
        break;
    }
    case 2345:
    {
        returnValue = F("Adolf-Ehmann-Str.");
        break;
    }
    case 2346:
    {
        returnValue = F("Adolf-Ehrtmann-Str.");
        break;
    }
    case 2347:
    {
        returnValue = F("Adolf-Eiermann-Str.");
        break;
    }
    case 2348:
    {
        returnValue = F("Adolf-Ellissen-Weg");
        break;
    }
    case 2349:
    {
        returnValue = F("Adolf-Emmelmann-Str.");
        break;
    }
    case 2350:
    {
        returnValue = F("Adolf-Engelhardt-Str.");
        break;
    }
    case 2351:
    {
        returnValue = F("Adolf-Engler-Str.");
        break;
    }
    case 2352:
    {
        returnValue = F("Adolf-Engster-Weg");
        break;
    }
    case 2353:
    {
        returnValue = F("Adolf-Ernst-Schuth-Str.");
        break;
    }
    case 2354:
    {
        returnValue = F("Adolf-Ey-Str.");
        break;
    }
    case 2355:
    {
        returnValue = F("Adolf-Falke-Weg");
        break;
    }
    case 2356:
    {
        returnValue = F("Adolf-Feucht-Weg");
        break;
    }
    case 2357:
    {
        returnValue = F("Adolf-Fischer-Str.");
        break;
    }
    case 2358:
    {
        returnValue = F("Adolf-Flöring-Str.");
        break;
    }
    case 2359:
    {
        returnValue = F("Adolf-Fraaß-Str.");
        break;
    }
    case 2360:
    {
        returnValue = F("Adolf-Fremd-Weg");
        break;
    }
    case 2361:
    {
        returnValue = F("Adolf-Freudenberg-Anlage");
        break;
    }
    case 2362:
    {
        returnValue = F("Adolf-Friedrich-Pfreundt-Str.");
        break;
    }
    case 2363:
    {
        returnValue = F("Adolf-Friedrich-Str.");
        break;
    }
    case 2364:
    {
        returnValue = F("Adolf-Färber-Str.");
        break;
    }
    case 2365:
    {
        returnValue = F("Adolf-Galland-Weg");
        break;
    }
    case 2366:
    {
        returnValue = F("Adolf-Geck-Str.");
        break;
    }
    case 2367:
    {
        returnValue = F("Adolf-Gerhard-Str.");
        break;
    }
    case 2368:
    {
        returnValue = F("Adolf-Gesswein-Str.");
        break;
    }
    case 2369:
    {
        returnValue = F("Adolf-Geyer-Str.");
        break;
    }
    case 2370:
    {
        returnValue = F("Adolf-Geyger-Str.");
        break;
    }
    case 2371:
    {
        returnValue = F("Adolf-Glattacker-Str.");
        break;
    }
    case 2372:
    {
        returnValue = F("Adolf-Glattacker-Weg");
        break;
    }
    case 2373:
    {
        returnValue = F("Adolf-Graf-Str.");
        break;
    }
    case 2374:
    {
        returnValue = F("Adolf-Greinert-Weg");
        break;
    }
    case 2375:
    {
        returnValue = F("Adolf-Grimme-Allee");
        break;
    }
    case 2376:
    {
        returnValue = F("Adolf-Grimme-Ring");
        break;
    }
    case 2377:
    {
        returnValue = F("Adolf-Grimme-Str.");
        break;
    }
    case 2378:
    {
        returnValue = F("Adolf-Groz-Str.");
        break;
    }
    case 2379:
    {
        returnValue = F("Adolf-Gröber-Str.");
        break;
    }
    case 2380:
    {
        returnValue = F("Adolf-Grünberger-Str.");
        break;
    }
    case 2381:
    {
        returnValue = F("Adolf-Guckes-Weg");
        break;
    }
    case 2382:
    {
        returnValue = F("Adolf-Guhl-Str.");
        break;
    }
    case 2383:
    {
        returnValue = F("Adolf-Gänshirt-Str.");
        break;
    }
    case 2384:
    {
        returnValue = F("Adolf-Göbel-Str.");
        break;
    }
    case 2385:
    {
        returnValue = F("Adolf-Göken-Padd");
        break;
    }
    case 2386:
    {
        returnValue = F("Adolf-Göschel-Str.");
        break;
    }
    case 2387:
    {
        returnValue = F("Adolf-Haack-Str.");
        break;
    }
    case 2388:
    {
        returnValue = F("Adolf-Hackenberg-Str.");
        break;
    }
    case 2389:
    {
        returnValue = F("Adolf-Haeuser-Str.");
        break;
    }
    case 2390:
    {
        returnValue = F("Adolf-Haff-Weg");
        break;
    }
    case 2391:
    {
        returnValue = F("Adolf-Halstrick-Str.");
        break;
    }
    case 2392:
    {
        returnValue = F("Adolf-Heer-Str.");
        break;
    }
    case 2393:
    {
        returnValue = F("Adolf-Heilig-Str.");
        break;
    }
    case 2394:
    {
        returnValue = F("Adolf-Heim-Str.");
        break;
    }
    case 2395:
    {
        returnValue = F("Adolf-Heinz-Str.");
        break;
    }
    case 2396:
    {
        returnValue = F("Adolf-Hell-Weg");
        break;
    }
    case 2397:
    {
        returnValue = F("Adolf-Hermann-Str.");
        break;
    }
    case 2398:
    {
        returnValue = F("Adolf-Herzer-Str.");
        break;
    }
    case 2399:
    {
        returnValue = F("Adolf-Hetzler-Str.");
        break;
    }
    case 2400:
    {
        returnValue = F("Adolf-Heuser-Weg");
        break;
    }
    case 2401:
    {
        returnValue = F("Adolf-Hieber-Weg");
        break;
    }
    case 2402:
    {
        returnValue = F("Adolf-Hildenbrand-Str.");
        break;
    }
    case 2403:
    {
        returnValue = F("Adolf-Hoelzel-Weg");
        break;
    }
    case 2404:
    {
        returnValue = F("Adolf-Hoff-Weg");
        break;
    }
    case 2405:
    {
        returnValue = F("Adolf-Hoffmann-Str.");
        break;
    }
    case 2406:
    {
        returnValue = F("Adolf-Hofmeister-Weg");
        break;
    }
    case 2407:
    {
        returnValue = F("Adolf-Holst-Str.");
        break;
    }
    case 2408:
    {
        returnValue = F("Adolf-Holzinger-Platz");
        break;
    }
    case 2409:
    {
        returnValue = F("Adolf-Hombitzer-Str.");
        break;
    }
    case 2410:
    {
        returnValue = F("Adolf-Homeyer-Weg");
        break;
    }
    case 2411:
    {
        returnValue = F("Adolf-Hopmann-Str.");
        break;
    }
    case 2412:
    {
        returnValue = F("Adolf-Hoyer-Str.");
        break;
    }
    case 2413:
    {
        returnValue = F("Adolf-Hueg-Wall");
        break;
    }
    case 2414:
    {
        returnValue = F("Adolf-Häger-Str.");
        break;
    }
    case 2415:
    {
        returnValue = F("Adolf-Hällmayr-Weg");
        break;
    }
    case 2416:
    {
        returnValue = F("Adolf-Hättig-Str.");
        break;
    }
    case 2417:
    {
        returnValue = F("Adolf-Höllinger-Str.");
        break;
    }
    case 2418:
    {
        returnValue = F("Adolf-Hölzel-Str.");
        break;
    }
    case 2419:
    {
        returnValue = F("Adolf-Hölzel-Weg");
        break;
    }
    case 2420:
    {
        returnValue = F("Adolf-Hörle-Str.");
        break;
    }
    case 2421:
    {
        returnValue = F("Adolf-Jandorf-Str.");
        break;
    }
    case 2422:
    {
        returnValue = F("Adolf-Jentzen-Str.");
        break;
    }
    case 2423:
    {
        returnValue = F("Adolf-Johannes-Str.");
        break;
    }
    case 2424:
    {
        returnValue = F("Adolf-Juckenack-Str.");
        break;
    }
    case 2425:
    {
        returnValue = F("Adolf-Just-Str.");
        break;
    }
    case 2426:
    {
        returnValue = F("Adolf-Kaiser-Str.");
        break;
    }
    case 2427:
    {
        returnValue = F("Adolf-Kallhoff-Str.");
        break;
    }
    case 2428:
    {
        returnValue = F("Adolf-Kalsbach-Str.");
        break;
    }
    case 2429:
    {
        returnValue = F("Adolf-Kalwac-Str.");
        break;
    }
    case 2430:
    {
        returnValue = F("Adolf-Kaschny-Str.");
        break;
    }
    case 2431:
    {
        returnValue = F("Adolf-Keller-Str.");
        break;
    }
    case 2432:
    {
        returnValue = F("Adolf-Keller-Weg");
        break;
    }
    case 2433:
    {
        returnValue = F("Adolf-Kempken-Weg");
        break;
    }
    case 2434:
    {
        returnValue = F("Adolf-Kempter-Str.");
        break;
    }
    case 2435:
    {
        returnValue = F("Adolf-Kessler-Str.");
        break;
    }
    case 2436:
    {
        returnValue = F("Adolf-Kirsch-Str.");
        break;
    }
    case 2437:
    {
        returnValue = F("Adolf-Klarenbach-Str.");
        break;
    }
    case 2438:
    {
        returnValue = F("Adolf-Klose-Str.");
        break;
    }
    case 2439:
    {
        returnValue = F("Adolf-Knecht-Str.");
        break;
    }
    case 2440:
    {
        returnValue = F("Adolf-Knoop-Str.");
        break;
    }
    case 2441:
    {
        returnValue = F("Adolf-Kober-Str.");
        break;
    }
    case 2442:
    {
        returnValue = F("Adolf-Koch-Str.");
        break;
    }
    case 2443:
    {
        returnValue = F("Adolf-Kohl-Platz");
        break;
    }
    case 2444:
    {
        returnValue = F("Adolf-Kolping-Hof");
        break;
    }
    case 2445:
    {
        returnValue = F("Adolf-Kolping-Platz");
        break;
    }
    case 2446:
    {
        returnValue = F("Adolf-Kolping-Ring");
        break;
    }
    case 2447:
    {
        returnValue = F("Adolf-Kolping-Siedlung");
        break;
    }
    case 2448:
    {
        returnValue = F("Adolf-Kolping-Str.");
        break;
    }
    case 2449:
    {
        returnValue = F("Adolf-Kolping-Ufer");
        break;
    }
    case 2450:
    {
        returnValue = F("Adolf-Kolping-Weg");
        break;
    }
    case 2451:
    {
        returnValue = F("Adolf-Koppe-Str.");
        break;
    }
    case 2452:
    {
        returnValue = F("Adolf-Korell-Str.");
        break;
    }
    case 2453:
    {
        returnValue = F("Adolf-Krummacher-Str.");
        break;
    }
    case 2454:
    {
        returnValue = F("Adolf-Kruse-Str.");
        break;
    }
    case 2455:
    {
        returnValue = F("Adolf-Krämer-Weg");
        break;
    }
    case 2456:
    {
        returnValue = F("Adolf-Kröner-Str.");
        break;
    }
    case 2457:
    {
        returnValue = F("Adolf-Kärger-Str.");
        break;
    }
    case 2458:
    {
        returnValue = F("Adolf-Kögel-Str.");
        break;
    }
    case 2459:
    {
        returnValue = F("Adolf-Köhne-Str.");
        break;
    }
    case 2460:
    {
        returnValue = F("Adolf-Köppe-Str.");
        break;
    }
    case 2461:
    {
        returnValue = F("Adolf-Landes-Str.");
        break;
    }
    case 2462:
    {
        returnValue = F("Adolf-Langer-Weg");
        break;
    }
    case 2463:
    {
        returnValue = F("Adolf-Lauer-Str.");
        break;
    }
    case 2464:
    {
        returnValue = F("Adolf-Laufer-Weg");
        break;
    }
    case 2465:
    {
        returnValue = F("Adolf-Layer-Weg");
        break;
    }
    case 2466:
    {
        returnValue = F("Adolf-Ledebur-Ring");
        break;
    }
    case 2467:
    {
        returnValue = F("Adolf-Ledebur-Str.");
        break;
    }
    case 2468:
    {
        returnValue = F("Adolf-Lehne-Weg");
        break;
    }
    case 2469:
    {
        returnValue = F("Adolf-Lengersdorf-Str.");
        break;
    }
    case 2470:
    {
        returnValue = F("Adolf-Leweke-Str.");
        break;
    }
    case 2471:
    {
        returnValue = F("Adolf-Ley-Str.");
        break;
    }
    case 2472:
    {
        returnValue = F("Adolf-Lieb-Str.");
        break;
    }
    case 2473:
    {
        returnValue = F("Adolf-Lier-Str.");
        break;
    }
    case 2474:
    {
        returnValue = F("Adolf-Lins-Str.");
        break;
    }
    case 2475:
    {
        returnValue = F("Adolf-Lins-Weg");
        break;
    }
    case 2476:
    {
        returnValue = F("Adolf-Litz-Str.");
        break;
    }
    case 2477:
    {
        returnValue = F("Adolf-Loos-Weg");
        break;
    }
    case 2478:
    {
        returnValue = F("Adolf-Ludwig-Ring");
        break;
    }
    case 2479:
    {
        returnValue = F("Adolf-Lupp-Platz");
        break;
    }
    case 2480:
    {
        returnValue = F("Adolf-Lüchau-Weg");
        break;
    }
    case 2481:
    {
        returnValue = F("Adolf-Lücke-Weg");
        break;
    }
    case 2482:
    {
        returnValue = F("Adolf-Lüders-Str.");
        break;
    }
    case 2483:
    {
        returnValue = F("Adolf-Mann-Platz");
        break;
    }
    case 2484:
    {
        returnValue = F("Adolf-Manns-Str.");
        break;
    }
    case 2485:
    {
        returnValue = F("Adolf-Mantz-Str.");
        break;
    }
    case 2486:
    {
        returnValue = F("Adolf-Meier-Str.");
        break;
    }
    case 2487:
    {
        returnValue = F("Adolf-Menge-Str.");
        break;
    }
    case 2488:
    {
        returnValue = F("Adolf-Menges-Str.");
        break;
    }
    case 2489:
    {
        returnValue = F("Adolf-Menzel-Str.");
        break;
    }
    case 2490:
    {
        returnValue = F("Adolf-Menzel-Weg");
        break;
    }
    case 2491:
    {
        returnValue = F("Adolf-Merkel-Str.");
        break;
    }
    case 2492:
    {
        returnValue = F("Adolf-Mertens-Str.");
        break;
    }
    case 2493:
    {
        returnValue = F("Adolf-Merz-Str.");
        break;
    }
    case 2494:
    {
        returnValue = F("Adolf-Metzner-Anlage");
        break;
    }
    case 2495:
    {
        returnValue = F("Adolf-Meyer-Str.");
        break;
    }
    case 2496:
    {
        returnValue = F("Adolf-Michelssen-Str.");
        break;
    }
    case 2497:
    {
        returnValue = F("Adolf-Miersch-Str.");
        break;
    }
    case 2498:
    {
        returnValue = F("Adolf-Miethe-Ufer");
        break;
    }
    case 2499:
    {
        returnValue = F("Adolf-Mohr-Anlage");
        break;
    }
    case 2500:
    {
        returnValue = F("Adolf-Murthum-Str.");
        break;
    }
    case 2501:
    {
        returnValue = F("Adolf-Märkt-Str.");
        break;
    }
    case 2502:
    {
        returnValue = F("Adolf-Möller-Str.");
        break;
    }
    case 2503:
    {
        returnValue = F("Adolf-Mühe-Weg");
        break;
    }
    case 2504:
    {
        returnValue = F("Adolf-Müller-Str.");
        break;
    }
    case 2505:
    {
        returnValue = F("Adolf-Münch-Weg");
        break;
    }
    case 2506:
    {
        returnValue = F("Adolf-Münzer-Str.");
        break;
    }
    case 2507:
    {
        returnValue = F("Adolf-Münzinger-Str.");
        break;
    }
    case 2508:
    {
        returnValue = F("Adolf-Noosten-Str.");
        break;
    }
    case 2509:
    {
        returnValue = F("Adolf-Ockert-Weg");
        break;
    }
    case 2510:
    {
        returnValue = F("Adolf-Oeser-Str.");
        break;
    }
    case 2511:
    {
        returnValue = F("Adolf-Oesterheld-Str.");
        break;
    }
    case 2512:
    {
        returnValue = F("Adolf-Ohm-Weg");
        break;
    }
    case 2513:
    {
        returnValue = F("Adolf-Ohrenberg-Str.");
        break;
    }
    case 2514:
    {
        returnValue = F("Adolf-Otto-Str.");
        break;
    }
    case 2515:
    {
        returnValue = F("Adolf-Paul-Gasse");
        break;
    }
    case 2516:
    {
        returnValue = F("Adolf-Peter-Krönke-Weg");
        break;
    }
    case 2517:
    {
        returnValue = F("Adolf-Pfeiffer-Weg");
        break;
    }
    case 2518:
    {
        returnValue = F("Adolf-Pfisterer-Str.");
        break;
    }
    case 2519:
    {
        returnValue = F("Adolf-Pfleiderer-Str.");
        break;
    }
    case 2520:
    {
        returnValue = F("Adolf-Piening-Str.");
        break;
    }
    case 2521:
    {
        returnValue = F("Adolf-Pirrung-Str.");
        break;
    }
    case 2522:
    {
        returnValue = F("Adolf-Pohlmann-Str.");
        break;
    }
    case 2523:
    {
        returnValue = F("Adolf-Pompe-Str.");
        break;
    }
    case 2524:
    {
        returnValue = F("Adolf-Pott-Str.");
        break;
    }
    case 2525:
    {
        returnValue = F("Adolf-Quad-Str.");
        break;
    }
    case 2526:
    {
        returnValue = F("Adolf-Rath-Str.");
        break;
    }
    case 2527:
    {
        returnValue = F("Adolf-Rauchheld-Str.");
        break;
    }
    case 2528:
    {
        returnValue = F("Adolf-Rausch-Str.");
        break;
    }
    case 2529:
    {
        returnValue = F("Adolf-Rebl-Str.");
        break;
    }
    case 2530:
    {
        returnValue = F("Adolf-Redeker-Str.");
        break;
    }
    case 2531:
    {
        returnValue = F("Adolf-Reichwein-Platz");
        break;
    }
    case 2532:
    {
        returnValue = F("Adolf-Reichwein-Str.");
        break;
    }
    case 2533:
    {
        returnValue = F("Adolf-Reichwein-Weg");
        break;
    }
    case 2534:
    {
        returnValue = F("Adolf-Reuter-Str.");
        break;
    }
    case 2535:
    {
        returnValue = F("Adolf-Riedlin-Weg");
        break;
    }
    case 2536:
    {
        returnValue = F("Adolf-Risse-Weg");
        break;
    }
    case 2537:
    {
        returnValue = F("Adolf-Ritzhaupt-Str.");
        break;
    }
    case 2538:
    {
        returnValue = F("Adolf-Rohde-Str.");
        break;
    }
    case 2539:
    {
        returnValue = F("Adolf-Rolle-Platz");
        break;
    }
    case 2540:
    {
        returnValue = F("Adolf-Rombach-Str.");
        break;
    }
    case 2541:
    {
        returnValue = F("Adolf-Rüdiger-Str.");
        break;
    }
    case 2542:
    {
        returnValue = F("Adolf-Saenger-Str.");
        break;
    }
    case 2543:
    {
        returnValue = F("Adolf-Saenger-Weg");
        break;
    }
    case 2544:
    {
        returnValue = F("Adolf-Safft-Str.");
        break;
    }
    case 2545:
    {
        returnValue = F("Adolf-Sautter-Str.");
        break;
    }
    case 2546:
    {
        returnValue = F("Adolf-Schachtner-Str.");
        break;
    }
    case 2547:
    {
        returnValue = F("Adolf-Schaible-Weg");
        break;
    }
    case 2548:
    {
        returnValue = F("Adolf-Schauder-Str.");
        break;
    }
    case 2549:
    {
        returnValue = F("Adolf-Scheufelen-Str.");
        break;
    }
    case 2550:
    {
        returnValue = F("Adolf-Schillupp-Str.");
        break;
    }
    case 2551:
    {
        returnValue = F("Adolf-Schinzel-Str.");
        break;
    }
    case 2552:
    {
        returnValue = F("Adolf-Schlitter-Str.");
        break;
    }
    case 2553:
    {
        returnValue = F("Adolf-Schmetzer-Str.");
        break;
    }
    case 2554:
    {
        returnValue = F("Adolf-Schmid-Str.");
        break;
    }
    case 2555:
    {
        returnValue = F("Adolf-Schmidt-Str.");
        break;
    }
    case 2556:
    {
        returnValue = F("Adolf-Schmitthenner-Str.");
        break;
    }
    case 2557:
    {
        returnValue = F("Adolf-Schnaufer-Weg");
        break;
    }
    case 2558:
    {
        returnValue = F("Adolf-Schneider-Str.");
        break;
    }
    case 2559:
    {
        returnValue = F("Adolf-Scholz-Allee");
        break;
    }
    case 2560:
    {
        returnValue = F("Adolf-Schroedter-Str.");
        break;
    }
    case 2561:
    {
        returnValue = F("Adolf-Schröder-Weg");
        break;
    }
    case 2562:
    {
        returnValue = F("Adolf-Schwark-Str.");
        break;
    }
    case 2563:
    {
        returnValue = F("Adolf-Schwarzer-Str.");
        break;
    }
    case 2564:
    {
        returnValue = F("Adolf-Schweer-Str.");
        break;
    }
    case 2565:
    {
        returnValue = F("Adolf-Seebacher-Str.");
        break;
    }
    case 2566:
    {
        returnValue = F("Adolf-Seeber-Str.");
        break;
    }
    case 2567:
    {
        returnValue = F("Adolf-Sendele-Str.");
        break;
    }
    case 2568:
    {
        returnValue = F("Adolf-Senger-Str.");
        break;
    }
    case 2569:
    {
        returnValue = F("Adolf-Sexauer-Str.");
        break;
    }
    case 2570:
    {
        returnValue = F("Adolf-Seyfried-Str.");
        break;
    }
    case 2571:
    {
        returnValue = F("Adolf-Sievers-Weg");
        break;
    }
    case 2572:
    {
        returnValue = F("Adolf-Sievert-Str.");
        break;
    }
    case 2573:
    {
        returnValue = F("Adolf-Silverberg-Str.");
        break;
    }
    case 2574:
    {
        returnValue = F("Adolf-Spengler-Str.");
        break;
    }
    case 2575:
    {
        returnValue = F("Adolf-Spiegel-Str.");
        break;
    }
    case 2576:
    {
        returnValue = F("Adolf-Spieß-Str.");
        break;
    }
    case 2577:
    {
        returnValue = F("Adolf-Stahr-Str.");
        break;
    }
    case 2578:
    {
        returnValue = F("Adolf-Steckel-Str.");
        break;
    }
    case 2579:
    {
        returnValue = F("Adolf-Steige");
        break;
    }
    case 2580:
    {
        returnValue = F("Adolf-Stein-Str.");
        break;
    }
    case 2581:
    {
        returnValue = F("Adolf-Steinau-Weg");
        break;
    }
    case 2582:
    {
        returnValue = F("Adolf-Stock-Str.");
        break;
    }
    case 2583:
    {
        returnValue = F("Adolf-Strübe-Str.");
        break;
    }
    case 2584:
    {
        returnValue = F("Adolf-Sturm-Str.");
        break;
    }
    case 2585:
    {
        returnValue = F("Adolf-Stöcker-Str.");
        break;
    }
    case 2586:
    {
        returnValue = F("Adolf-Sänger-Weg");
        break;
    }
    case 2587:
    {
        returnValue = F("Adolf-Sültemeier-Str.");
        break;
    }
    case 2588:
    {
        returnValue = F("Adolf-Tauche-Str.");
        break;
    }
    case 2589:
    {
        returnValue = F("Adolf-Tegtmeier-Allee");
        break;
    }
    case 2590:
    {
        returnValue = F("Adolf-Theis-Str.");
        break;
    }
    case 2591:
    {
        returnValue = F("Adolf-Thomas-Str.");
        break;
    }
    case 2592:
    {
        returnValue = F("Adolf-Tibus-Str.");
        break;
    }
    case 2593:
    {
        returnValue = F("Adolf-Todt-Str.");
        break;
    }
    case 2594:
    {
        returnValue = F("Adolf-Trefz-Weg");
        break;
    }
    case 2595:
    {
        returnValue = F("Adolf-Trieb-Str.");
        break;
    }
    case 2596:
    {
        returnValue = F("Adolf-Veit-Weg");
        break;
    }
    case 2597:
    {
        returnValue = F("Adolf-Vetter-Weg");
        break;
    }
    case 2598:
    {
        returnValue = F("Adolf-Vielhauer-Str.");
        break;
    }
    case 2599:
    {
        returnValue = F("Adolf-Vinnen-Str.");
        break;
    }
    case 2600:
    {
        returnValue = F("Adolf-Vogt-Str.");
        break;
    }
    case 2601:
    {
        returnValue = F("Adolf-Vorwerk-Str.");
        break;
    }
    case 2602:
    {
        returnValue = F("Adolf-Vältl-Str.");
        break;
    }
    case 2603:
    {
        returnValue = F("Adolf-Wagenbrenner-Str.");
        break;
    }
    case 2604:
    {
        returnValue = F("Adolf-Wagner-Str.");
        break;
    }
    case 2605:
    {
        returnValue = F("Adolf-Waldrich-Weg");
        break;
    }
    case 2606:
    {
        returnValue = F("Adolf-Walz-Str.");
        break;
    }
    case 2607:
    {
        returnValue = F("Adolf-Wandersleb-Weg");
        break;
    }
    case 2608:
    {
        returnValue = F("Adolf-Weber-Str.");
        break;
    }
    case 2609:
    {
        returnValue = F("Adolf-Weiland-Weg");
        break;
    }
    case 2610:
    {
        returnValue = F("Adolf-Weiler-Weg");
        break;
    }
    case 2611:
    {
        returnValue = F("Adolf-Weinhold-Str.");
        break;
    }
    case 2612:
    {
        returnValue = F("Adolf-Weiss-Str.");
        break;
    }
    case 2613:
    {
        returnValue = F("Adolf-Weiß-Str.");
        break;
    }
    case 2614:
    {
        returnValue = F("Adolf-Wentrup-Weg");
        break;
    }
    case 2615:
    {
        returnValue = F("Adolf-Werner-Str.");
        break;
    }
    case 2616:
    {
        returnValue = F("Adolf-Westen-Str.");
        break;
    }
    case 2617:
    {
        returnValue = F("Adolf-Westphal-Str.");
        break;
    }
    case 2618:
    {
        returnValue = F("Adolf-Wieber-Str.");
        break;
    }
    case 2619:
    {
        returnValue = F("Adolf-Wilbrandt-Str.");
        break;
    }
    case 2620:
    {
        returnValue = F("Adolf-Wilhelm-Nefflen-Weg");
        break;
    }
    case 2621:
    {
        returnValue = F("Adolf-Wilhelm-Str.");
        break;
    }
    case 2622:
    {
        returnValue = F("Adolf-Wissel-Str.");
        break;
    }
    case 2623:
    {
        returnValue = F("Adolf-Wolf-Str.");
        break;
    }
    case 2624:
    {
        returnValue = F("Adolf-Wurmbach-Str.");
        break;
    }
    case 2625:
    {
        returnValue = F("Adolf-Wächter-Str.");
        break;
    }
    case 2626:
    {
        returnValue = F("Adolf-Zinsmayer-Platz");
        break;
    }
    case 2627:
    {
        returnValue = F("Adolf-Zschiedrich-Str.");
        break;
    }
    case 2628:
    {
        returnValue = F("Adolf-de-Beer-Str.");
        break;
    }
    case 2629:
    {
        returnValue = F("Adolf-von-Baeyer-Str.");
        break;
    }
    case 2630:
    {
        returnValue = F("Adolf-von-Groß-Str.");
        break;
    }
    case 2631:
    {
        returnValue = F("Adolf-von-Harleß-Str.");
        break;
    }
    case 2632:
    {
        returnValue = F("Adolf-von-Harnack-Str.");
        break;
    }
    case 2633:
    {
        returnValue = F("Adolf-von-Hatzfeld-Str.");
        break;
    }
    case 2634:
    {
        returnValue = F("Adolf-von-Kleve-Str.");
        break;
    }
    case 2635:
    {
        returnValue = F("Adolf-von-Menzel-Str.");
        break;
    }
    case 2636:
    {
        returnValue = F("Adolf-von-Menzel-Weg");
        break;
    }
    case 2637:
    {
        returnValue = F("Adolf-von-Nassau-Str.");
        break;
    }
    case 2638:
    {
        returnValue = F("Adolf-von-Nassau-Weg");
        break;
    }
    case 2639:
    {
        returnValue = F("Adolf-von-Nickel-Str.");
        break;
    }
    case 2640:
    {
        returnValue = F("Adolf-von-Richter-Str.");
        break;
    }
    case 2641:
    {
        returnValue = F("Adolffstr.");
        break;
    }
    case 2642:
    {
        returnValue = F("Adolfinenstr.");
        break;
    }
    case 2643:
    {
        returnValue = F("Adolfplatz");
        break;
    }
    case 2644:
    {
        returnValue = F("Adolfsallee");
        break;
    }
    case 2645:
    {
        returnValue = F("Adolfsberg");
        break;
    }
    case 2646:
    {
        returnValue = F("Adolfsecker Str.");
        break;
    }
    case 2647:
    {
        returnValue = F("Adolfsecker Weg");
        break;
    }
    case 2648:
    {
        returnValue = F("Adolfsgäßchen");
        break;
    }
    case 2649:
    {
        returnValue = F("Adolfshausen");
        break;
    }
    case 2650:
    {
        returnValue = F("Adolfshauser Weg");
        break;
    }
    case 2651:
    {
        returnValue = F("Adolfshöhe");
        break;
    }
    case 2652:
    {
        returnValue = F("Adolfsschlucht");
        break;
    }
    case 2653:
    {
        returnValue = F("Adolfsstr.");
        break;
    }
    case 2654:
    {
        returnValue = F("Adolfstr.");
        break;
    }
    case 2655:
    {
        returnValue = F("Adolph Kolping Weg");
        break;
    }
    case 2656:
    {
        returnValue = F("Adolph-Baar-Str.");
        break;
    }
    case 2657:
    {
        returnValue = F("Adolph-Bermpohl-Weg");
        break;
    }
    case 2658:
    {
        returnValue = F("Adolph-Diesterweg-Ring");
        break;
    }
    case 2659:
    {
        returnValue = F("Adolph-Diesterweg-Str.");
        break;
    }
    case 2660:
    {
        returnValue = F("Adolph-Geyer-Str.");
        break;
    }
    case 2661:
    {
        returnValue = F("Adolph-Hoeltich-Weg");
        break;
    }
    case 2662:
    {
        returnValue = F("Adolph-Kienzl-Str.");
        break;
    }
    case 2663:
    {
        returnValue = F("Adolph-Kolging-Str.");
        break;
    }
    case 2664:
    {
        returnValue = F("Adolph-Kolping-Anlage");
        break;
    }
    case 2665:
    {
        returnValue = F("Adolph-Kolping-Gasse");
        break;
    }
    case 2666:
    {
        returnValue = F("Adolph-Kolping-Platz");
        break;
    }
    case 2667:
    {
        returnValue = F("Adolph-Kolping-Ring");
        break;
    }
    case 2668:
    {
        returnValue = F("Adolph-Kolping-Str.");
        break;
    }
    case 2669:
    {
        returnValue = F("Adolph-Kolping-Weg");
        break;
    }
    case 2670:
    {
        returnValue = F("Adolph-Menzel-Ring");
        break;
    }
    case 2671:
    {
        returnValue = F("Adolph-Menzel-Str.");
        break;
    }
    case 2672:
    {
        returnValue = F("Adolph-Menzel-Weg");
        break;
    }
    case 2673:
    {
        returnValue = F("Adolph-Roemer-Str.");
        break;
    }
    case 2674:
    {
        returnValue = F("Adolph-Varnhagen-Str.");
        break;
    }
    case 2675:
    {
        returnValue = F("Adolph-von-Holzhausen-Park");
        break;
    }
    case 2676:
    {
        returnValue = F("Adolph-von-Menzel-Str.");
        break;
    }
    case 2677:
    {
        returnValue = F("Adolph-von-Vagedes-Platz");
        break;
    }
    case 2678:
    {
        returnValue = F("Adolphsbühlstr.");
        break;
    }
    case 2679:
    {
        returnValue = F("Adolphsdorfer Str.");
        break;
    }
    case 2680:
    {
        returnValue = F("Adolphsgasse");
        break;
    }
    case 2681:
    {
        returnValue = F("Adolphsheider Str.");
        break;
    }
    case 2682:
    {
        returnValue = F("Adolphstr.");
        break;
    }
    case 2683:
    {
        returnValue = F("Adolphus-Busch-Allee");
        break;
    }
    case 2684:
    {
        returnValue = F("Adolphweg");
        break;
    }
    case 2685:
    {
        returnValue = F("Adolpi-Stiftung");
        break;
    }
    case 2686:
    {
        returnValue = F("Adolzfurter Str.");
        break;
    }
    case 2687:
    {
        returnValue = F("Adonisröschen-Weg");
        break;
    }
    case 2688:
    {
        returnValue = F("Adonisröschenstr.");
        break;
    }
    case 2689:
    {
        returnValue = F("Adorf");
        break;
    }
    case 2690:
    {
        returnValue = F("Adorf-Seifener-Str.");
        break;
    }
    case 2691:
    {
        returnValue = F("Adorfer Hauptstr.");
        break;
    }
    case 2692:
    {
        returnValue = F("Adorfer Str.");
        break;
    }
    case 2693:
    {
        returnValue = F("Adorfer Weg");
        break;
    }
    case 2694:
    {
        returnValue = F("Adornostr.");
        break;
    }
    case 2695:
    {
        returnValue = F("Adrazhofer Berg");
        break;
    }
    case 2696:
    {
        returnValue = F("Adriaanskamp");
        break;
    }
    case 2697:
    {
        returnValue = F("Adrian-Beier-Stieg");
        break;
    }
    case 2698:
    {
        returnValue = F("Adrian-Bohlen-Str.");
        break;
    }
    case 2699:
    {
        returnValue = F("Adrian-Diel-Str.");
        break;
    }
    case 2700:
    {
        returnValue = F("Adrian-Ganter-Str.");
        break;
    }
    case 2701:
    {
        returnValue = F("Adrian-Kiels-Str.");
        break;
    }
    case 2702:
    {
        returnValue = F("Adrian-Meller-Str.");
        break;
    }
    case 2703:
    {
        returnValue = F("Adrian-Pletsch-Str.");
        break;
    }
    case 2704:
    {
        returnValue = F("Adrian-Stoop-Str.");
        break;
    }
    case 2705:
    {
        returnValue = F("Adrian-Wilhelm-Weg");
        break;
    }
    case 2706:
    {
        returnValue = F("Adrian-de-Vries-Str.");
        break;
    }
    case 2707:
    {
        returnValue = F("Adrian-von-Riedel-Str.");
        break;
    }
    case 2708:
    {
        returnValue = F("Adrian-von-Riedl-Str.");
        break;
    }
    case 2709:
    {
        returnValue = F("Adriangasse");
        break;
    }
    case 2710:
    {
        returnValue = F("Adrianistr.");
        break;
    }
    case 2711:
    {
        returnValue = F("Adriansberg");
        break;
    }
    case 2712:
    {
        returnValue = F("Adrianstal");
        break;
    }
    case 2713:
    {
        returnValue = F("Adrianstr.");
        break;
    }
    case 2714:
    {
        returnValue = F("Adriansweg");
        break;
    }
    case 2715:
    {
        returnValue = F("Adriastr.");
        break;
    }
    case 2716:
    {
        returnValue = F("Adriatsweiler");
        break;
    }
    case 2717:
    {
        returnValue = F("Adrigstr.");
        break;
    }
    case 2718:
    {
        returnValue = F("Adriondack Way");
        break;
    }
    case 2719:
    {
        returnValue = F("Adtring");
        break;
    }
    case 2720:
    {
        returnValue = F("Aduastr.");
        break;
    }
    case 2721:
    {
        returnValue = F("Aduchtstr.");
        break;
    }
    case 2722:
    {
        returnValue = F("Adulastr.");
        break;
    }
    case 2723:
    {
        returnValue = F("Advenastr.");
        break;
    }
    case 2724:
    {
        returnValue = F("Adventus-Str.");
        break;
    }
    case 2725:
    {
        returnValue = F("Advokatenstieg");
        break;
    }
    case 2726:
    {
        returnValue = F("Advokatenweg");
        break;
    }
    case 2727:
    {
        returnValue = F("Advokatweg");
        break;
    }
    case 2728:
    {
        returnValue = F("Adzenweg");
        break;
    }
    case 2729:
    {
        returnValue = F("Aechterhoek");
        break;
    }
    case 2730:
    {
        returnValue = F("Aechterhook");
        break;
    }
    case 2731:
    {
        returnValue = F("Aechternhöfen");
        break;
    }
    case 2732:
    {
        returnValue = F("Aechternstr.");
        break;
    }
    case 2733:
    {
        returnValue = F("Aeckern");
        break;
    }
    case 2734:
    {
        returnValue = F("Aeckernweg");
        break;
    }
    case 2735:
    {
        returnValue = F("Aedeberg");
        break;
    }
    case 2736:
    {
        returnValue = F("Aeferleinweg");
        break;
    }
    case 2737:
    {
        returnValue = F("Aegidienberger Str.");
        break;
    }
    case 2738:
    {
        returnValue = F("Aegidiendamm");
        break;
    }
    case 2739:
    {
        returnValue = F("Aegidienhof");
        break;
    }
    case 2740:
    {
        returnValue = F("Aegidienkirchhof");
        break;
    }
    case 2741:
    {
        returnValue = F("Aegidienstr.");
        break;
    }
    case 2742:
    {
        returnValue = F("Aegidientorplatz");
        break;
    }
    case 2743:
    {
        returnValue = F("Aegidienwall");
        break;
    }
    case 2744:
    {
        returnValue = F("Aegidigäßchen");
        break;
    }
    case 2745:
    {
        returnValue = F("Aegidiikirchhof");
        break;
    }
    case 2746:
    {
        returnValue = F("Aegidiikirchplatz");
        break;
    }
    case 2747:
    {
        returnValue = F("Aegidiimarkt");
        break;
    }
    case 2748:
    {
        returnValue = F("Aegidiistr.");
        break;
    }
    case 2749:
    {
        returnValue = F("Aegidistr.");
        break;
    }
    case 2750:
    {
        returnValue = F("Aegidiusblick");
        break;
    }
    case 2751:
    {
        returnValue = F("Aegidiusplatz");
        break;
    }
    case 2752:
    {
        returnValue = F("Aegidiusstr.");
        break;
    }
    case 2753:
    {
        returnValue = F("Aegidiusweg");
        break;
    }
    case 2754:
    {
        returnValue = F("Aegierweg");
        break;
    }
    case 2755:
    {
        returnValue = F("Aehlenbach");
        break;
    }
    case 2756:
    {
        returnValue = F("Aehlenbergstr.");
        break;
    }
    case 2757:
    {
        returnValue = F("Aeilt-Frese-Weg");
        break;
    }
    case 2758:
    {
        returnValue = F("Aeltersgasse");
        break;
    }
    case 2759:
    {
        returnValue = F("Aeltgen-Dünwald-Str.");
        break;
    }
    case 2760:
    {
        returnValue = F("Aemilian-Öttlinger-Str.");
        break;
    }
    case 2761:
    {
        returnValue = F("Aemilianstr.");
        break;
    }
    case 2762:
    {
        returnValue = F("Aemilianusstr.");
        break;
    }
    case 2763:
    {
        returnValue = F("Aendelweg");
        break;
    }
    case 2764:
    {
        returnValue = F("Aeneas-Hertzig-Str.");
        break;
    }
    case 2765:
    {
        returnValue = F("Aengenesch");
        break;
    }
    case 2766:
    {
        returnValue = F("Aengenescher Weg");
        break;
    }
    case 2767:
    {
        returnValue = F("Aennchenplatz");
        break;
    }
    case 2768:
    {
        returnValue = F("Aennchenstr.");
        break;
    }
    case 2769:
    {
        returnValue = F("Aenne-Biermann-Str.");
        break;
    }
    case 2770:
    {
        returnValue = F("Aenne-Brauksiepe-Str.");
        break;
    }
    case 2771:
    {
        returnValue = F("Aenne-Burda-Str.");
        break;
    }
    case 2772:
    {
        returnValue = F("Aenne-Ludwig-Str.");
        break;
    }
    case 2773:
    {
        returnValue = F("Aerbecker Str.");
        break;
    }
    case 2774:
    {
        returnValue = F("Aerlingsweg");
        break;
    }
    case 2775:
    {
        returnValue = F("Aerzener Weg");
        break;
    }
    case 2776:
    {
        returnValue = F("Aeschacher Ufer");
        break;
    }
    case 2777:
    {
        returnValue = F("Aeschenweg");
        break;
    }
    case 2778:
    {
        returnValue = F("Aesculap-Platz");
        break;
    }
    case 2779:
    {
        returnValue = F("Aesenweg");
        break;
    }
    case 2780:
    {
        returnValue = F("Aeule");
        break;
    }
    case 2781:
    {
        returnValue = F("Aeulemerweg");
        break;
    }
    case 2782:
    {
        returnValue = F("Aeulestr.");
        break;
    }
    case 2783:
    {
        returnValue = F("AfA-Passage");
        break;
    }
    case 2784:
    {
        returnValue = F("Afdener Str.");
        break;
    }
    case 2785:
    {
        returnValue = F("Afderfelder Str.");
        break;
    }
    case 2786:
    {
        returnValue = F("Afeield");
        break;
    }
    case 2787:
    {
        returnValue = F("Afelskreuzstr.");
        break;
    }
    case 2788:
    {
        returnValue = F("Afelspfad");
        break;
    }
    case 2789:
    {
        returnValue = F("Affalter Str.");
        break;
    }
    case 2790:
    {
        returnValue = F("Affalterbacher Allee");
        break;
    }
    case 2791:
    {
        returnValue = F("Affalterbacher Str.");
        break;
    }
    case 2792:
    {
        returnValue = F("Affalterbacher Sträßle");
        break;
    }
    case 2793:
    {
        returnValue = F("Affalterbacher Weg");
        break;
    }
    case 2794:
    {
        returnValue = F("Affalterner Str.");
        break;
    }
    case 2795:
    {
        returnValue = F("Affalterstr.");
        break;
    }
    case 2796:
    {
        returnValue = F("Affalterthal");
        break;
    }
    case 2797:
    {
        returnValue = F("Affalterweg");
        break;
    }
    case 2798:
    {
        returnValue = F("Affaltracher Str.");
        break;
    }
    case 2799:
    {
        returnValue = F("Affaltracher Weg");
        break;
    }
    case 2800:
    {
        returnValue = F("Affe");
        break;
    }
    case 2801:
    {
        returnValue = F("Affeckinger Str.");
        break;
    }
    case 2802:
    {
        returnValue = F("Affelner Mühle");
        break;
    }
    case 2803:
    {
        returnValue = F("Affelner Str.");
        break;
    }
    case 2804:
    {
        returnValue = F("Affenbergstr.");
        break;
    }
    case 2805:
    {
        returnValue = F("Affenfelsen");
        break;
    }
    case 2806:
    {
        returnValue = F("Affengehege");
        break;
    }
    case 2807:
    {
        returnValue = F("Affenplatz");
        break;
    }
    case 2808:
    {
        returnValue = F("Affenschaukel");
        break;
    }
    case 2809:
    {
        returnValue = F("Affenschlucht");
        break;
    }
    case 2810:
    {
        returnValue = F("Affenstein");
        break;
    }
    case 2811:
    {
        returnValue = F("Affentaler Str.");
        break;
    }
    case 2812:
    {
        returnValue = F("Affentorplatz");
        break;
    }
    case 2813:
    {
        returnValue = F("Affentälestr.");
        break;
    }
    case 2814:
    {
        returnValue = F("Afferbachstr.");
        break;
    }
    case 2815:
    {
        returnValue = F("Afferder Str.");
        break;
    }
    case 2816:
    {
        returnValue = F("Afferder Weg");
        break;
    }
    case 2817:
    {
        returnValue = F("Affhöllerbacher Str.");
        break;
    }
    case 2818:
    {
        returnValue = F("Affinger Berg");
        break;
    }
    case 2819:
    {
        returnValue = F("Affinger Str.");
        break;
    }
    case 2820:
    {
        returnValue = F("Affinger Weg");
        break;
    }
    case 2821:
    {
        returnValue = F("Affinghäuser Str.");
        break;
    }
    case 2822:
    {
        returnValue = F("Affinghäuser Weg");
        break;
    }
    case 2823:
    {
        returnValue = F("Affler Str.");
        break;
    }
    case 2824:
    {
        returnValue = F("Affolderner Str.");
        break;
    }
    case 2825:
    {
        returnValue = F("Affstätter Str.");
        break;
    }
    case 2826:
    {
        returnValue = F("Affstätter Tal");
        break;
    }
    case 2827:
    {
        returnValue = F("Afföllerstr.");
        break;
    }
    case 2828:
    {
        returnValue = F("Afföllerwiesen");
        break;
    }
    case 2829:
    {
        returnValue = F("Afham");
        break;
    }
    case 2830:
    {
        returnValue = F("Aflenzer Weg");
        break;
    }
    case 2831:
    {
        returnValue = F("Aflerweg");
        break;
    }
    case 2832:
    {
        returnValue = F("Afraberg");
        break;
    }
    case 2833:
    {
        returnValue = F("Afrader Weg");
        break;
    }
    case 2834:
    {
        returnValue = F("Afragäßchen");
        break;
    }
    case 2835:
    {
        returnValue = F("Afrastr.");
        break;
    }
    case 2836:
    {
        returnValue = F("Afrawald");
        break;
    }
    case 2837:
    {
        returnValue = F("Afraweg");
        break;
    }
    case 2838:
    {
        returnValue = F("Afrika");
        break;
    }
    case 2839:
    {
        returnValue = F("Afrikaanlage");
        break;
    }
    case 2840:
    {
        returnValue = F("Afrikanische Haustiere");
        break;
    }
    case 2841:
    {
        returnValue = F("Afrikanische Huftiere, Strauße");
        break;
    }
    case 2842:
    {
        returnValue = F("Afrikanischer Elefant");
        break;
    }
    case 2843:
    {
        returnValue = F("Afrikastr.");
        break;
    }
    case 2844:
    {
        returnValue = F("Afrikaweg");
        break;
    }
    case 2845:
    {
        returnValue = F("Afrisoweg");
        break;
    }
    case 2846:
    {
        returnValue = F("Aftergraben");
        break;
    }
    case 2847:
    {
        returnValue = F("Afternhaldenstr.");
        break;
    }
    case 2848:
    {
        returnValue = F("Afterschlagweg");
        break;
    }
    case 2849:
    {
        returnValue = F("Aftestr.");
        break;
    }
    case 2850:
    {
        returnValue = F("Aftetal");
        break;
    }
    case 2851:
    {
        returnValue = F("Aftholderbacher Str.");
        break;
    }
    case 2852:
    {
        returnValue = F("Aftholderberger Str.");
        break;
    }
    case 2853:
    {
        returnValue = F("Aftholderweg");
        break;
    }
    case 2854:
    {
        returnValue = F("Afyonring");
        break;
    }
    case 2855:
    {
        returnValue = F("Aga Ahornstr.");
        break;
    }
    case 2856:
    {
        returnValue = F("Aga Birkenstr.");
        break;
    }
    case 2857:
    {
        returnValue = F("Aga Forststr.");
        break;
    }
    case 2858:
    {
        returnValue = F("Aga Hainstr.");
        break;
    }
    case 2859:
    {
        returnValue = F("Aga Kiefernstr.");
        break;
    }
    case 2860:
    {
        returnValue = F("Aga Lindenstr.");
        break;
    }
    case 2861:
    {
        returnValue = F("Aga Rosa-Luxemburg-Str.");
        break;
    }
    case 2862:
    {
        returnValue = F("Aga Schulstr.");
        break;
    }
    case 2863:
    {
        returnValue = F("Aga Zeitzer Str.");
        break;
    }
    case 2864:
    {
        returnValue = F("Agaer Str.");
        break;
    }
    case 2865:
    {
        returnValue = F("Agathaberg");
        break;
    }
    case 2866:
    {
        returnValue = F("Agathaberger Str.");
        break;
    }
    case 2867:
    {
        returnValue = F("Agathaberger Weg");
        break;
    }
    case 2868:
    {
        returnValue = F("Agathagasse");
        break;
    }
    case 2869:
    {
        returnValue = F("Agathaplatz");
        break;
    }
    case 2870:
    {
        returnValue = F("Agatharieder Weg");
        break;
    }
    case 2871:
    {
        returnValue = F("Agathastr.");
        break;
    }
    case 2872:
    {
        returnValue = F("Agathawall");
        break;
    }
    case 2873:
    {
        returnValue = F("Agathaweg");
        break;
    }
    case 2874:
    {
        returnValue = F("Agathazeller Weg");
        break;
    }
    case 2875:
    {
        returnValue = F("Agathe-Fleissner-Weg");
        break;
    }
    case 2876:
    {
        returnValue = F("Agathe-Heim-Str.");
        break;
    }
    case 2877:
    {
        returnValue = F("Agathe-Humler-Str.");
        break;
    }
    case 2878:
    {
        returnValue = F("Agathe-Stille-Str.");
        break;
    }
    case 2879:
    {
        returnValue = F("Agathe-Stille-Weg");
        break;
    }
    case 2880:
    {
        returnValue = F("Agathe-Streicher-Weg");
        break;
    }
    case 2881:
    {
        returnValue = F("Agathe-Zeis-Str.");
        break;
    }
    case 2882:
    {
        returnValue = F("Agathenstr.");
        break;
    }
    case 2883:
    {
        returnValue = F("Agathenweg");
        break;
    }
    case 2884:
    {
        returnValue = F("Agathofstr.");
        break;
    }
    case 2885:
    {
        returnValue = F("Agavenstr.");
        break;
    }
    case 2886:
    {
        returnValue = F("Agavenweg");
        break;
    }
    case 2887:
    {
        returnValue = F("Agawanger Str.");
        break;
    }
    case 2888:
    {
        returnValue = F("Agbachweg");
        break;
    }
    case 2889:
    {
        returnValue = F("Agdenstr.");
        break;
    }
    case 2890:
    {
        returnValue = F("Agenastr.");
        break;
    }
    case 2891:
    {
        returnValue = F("Agenbacher Str.");
        break;
    }
    case 2892:
    {
        returnValue = F("Agendawaldschneise");
        break;
    }
    case 2893:
    {
        returnValue = F("Agendorfer Str.");
        break;
    }
    case 2894:
    {
        returnValue = F("Agendorfer Weg");
        break;
    }
    case 2895:
    {
        returnValue = F("Agentur für Arbeit / Katholische Hochschule");
        break;
    }
    case 2896:
    {
        returnValue = F("Agentur für Arbeit / ­Katholische Hochschule");
        break;
    }
    case 2897:
    {
        returnValue = F("Ageschuad");
        break;
    }
    case 2898:
    {
        returnValue = F("Agetexstr.");
        break;
    }
    case 2899:
    {
        returnValue = F("Agethenstr.");
        break;
    }
    case 2900:
    {
        returnValue = F("Aggensteinstr.");
        break;
    }
    case 2901:
    {
        returnValue = F("Aggensteinweg");
        break;
    }
    case 2902:
    {
        returnValue = F("Agger Str.");
        break;
    }
    case 2903:
    {
        returnValue = F("Agger-Sülz-Weg");
        break;
    }
    case 2904:
    {
        returnValue = F("Aggeraueler Weg");
        break;
    }
    case 2905:
    {
        returnValue = F("Aggerauenweg");
        break;
    }
    case 2906:
    {
        returnValue = F("Aggerdamm");
        break;
    }
    case 2907:
    {
        returnValue = F("Aggerfeld");
        break;
    }
    case 2908:
    {
        returnValue = F("Aggerhof");
        break;
    }
    case 2909:
    {
        returnValue = F("Aggerhöhe");
        break;
    }
    case 2910:
    {
        returnValue = F("Aggerstr.");
        break;
    }
    case 2911:
    {
        returnValue = F("Aggertalstr.");
        break;
    }
    case 2912:
    {
        returnValue = F("Aggerufer");
        break;
    }
    case 2913:
    {
        returnValue = F("Aggerweg");
        break;
    }
    case 2914:
    {
        returnValue = F("Aggerwiese");
        break;
    }
    case 2915:
    {
        returnValue = F("Aggstall");
        break;
    }
    case 2916:
    {
        returnValue = F("Aggstaller Berg");
        break;
    }
    case 2917:
    {
        returnValue = F("Aggstaller Graben");
        break;
    }
    case 2918:
    {
        returnValue = F("Agia-Strell-Str.");
        break;
    }
    case 2919:
    {
        returnValue = F("Agilatrudstr.");
        break;
    }
    case 2920:
    {
        returnValue = F("Agilofingertstr.");
        break;
    }
    case 2921:
    {
        returnValue = F("Agilolfingerring");
        break;
    }
    case 2922:
    {
        returnValue = F("Agilolfingerstr.");
        break;
    }
    case 2923:
    {
        returnValue = F("Agilolfstr.");
        break;
    }
    case 2924:
    {
        returnValue = F("Agirostr.");
        break;
    }
    case 2925:
    {
        returnValue = F("Agissenstr.");
        break;
    }
    case 2926:
    {
        returnValue = F("Aglishardter Str.");
        break;
    }
    case 2927:
    {
        returnValue = F("Agnes-Asche-Weg");
        break;
    }
    case 2928:
    {
        returnValue = F("Agnes-Bernauer-Str.");
        break;
    }
    case 2929:
    {
        returnValue = F("Agnes-Bluhm-Str.");
        break;
    }
    case 2930:
    {
        returnValue = F("Agnes-Carvalho-Str.");
        break;
    }
    case 2931:
    {
        returnValue = F("Agnes-Decker-Str.");
        break;
    }
    case 2932:
    {
        returnValue = F("Agnes-Deutschbein-Str.");
        break;
    }
    case 2933:
    {
        returnValue = F("Agnes-Gerlach-Ring");
        break;
    }
    case 2934:
    {
        returnValue = F("Agnes-Giering-Str.");
        break;
    }
    case 2935:
    {
        returnValue = F("Agnes-Gosche-Str.");
        break;
    }
    case 2936:
    {
        returnValue = F("Agnes-Graf-Str.");
        break;
    }
    case 2937:
    {
        returnValue = F("Agnes-Günther-Platz");
        break;
    }
    case 2938:
    {
        returnValue = F("Agnes-Günther-Str.");
        break;
    }
    case 2939:
    {
        returnValue = F("Agnes-Günther-Weg");
        break;
    }
    case 2940:
    {
        returnValue = F("Agnes-Heineken-Str.");
        break;
    }
    case 2941:
    {
        returnValue = F("Agnes-Huenninger-Str.");
        break;
    }
    case 2942:
    {
        returnValue = F("Agnes-Kaiser-Weg");
        break;
    }
    case 2943:
    {
        returnValue = F("Agnes-Karll-Str.");
        break;
    }
    case 2944:
    {
        returnValue = F("Agnes-Karll-Weg");
        break;
    }
    case 2945:
    {
        returnValue = F("Agnes-Kimmle-Str.");
        break;
    }
    case 2946:
    {
        returnValue = F("Agnes-Kindermann-Str.");
        break;
    }
    case 2947:
    {
        returnValue = F("Agnes-Kneher-Platz");
        break;
    }
    case 2948:
    {
        returnValue = F("Agnes-Löscher-Str.");
        break;
    }
    case 2949:
    {
        returnValue = F("Agnes-Meyerhof-Str.");
        break;
    }
    case 2950:
    {
        returnValue = F("Agnes-Miegel Str.");
        break;
    }
    case 2951:
    {
        returnValue = F("Agnes-Miegel-Hof");
        break;
    }
    case 2952:
    {
        returnValue = F("Agnes-Miegel-Platz");
        break;
    }
    case 2953:
    {
        returnValue = F("Agnes-Miegel-Ring");
        break;
    }
    case 2954:
    {
        returnValue = F("Agnes-Miegel-Str.");
        break;
    }
    case 2955:
    {
        returnValue = F("Agnes-Miegel-Weg");
        break;
    }
    case 2956:
    {
        returnValue = F("Agnes-Müller-Weg");
        break;
    }
    case 2957:
    {
        returnValue = F("Agnes-Neef-Winz-Platz");
        break;
    }
    case 2958:
    {
        returnValue = F("Agnes-Neuhaus-Allee");
        break;
    }
    case 2959:
    {
        returnValue = F("Agnes-Neuhaus-Str.");
        break;
    }
    case 2960:
    {
        returnValue = F("Agnes-Nordmeier-Weg");
        break;
    }
    case 2961:
    {
        returnValue = F("Agnes-Pockels-Str.");
        break;
    }
    case 2962:
    {
        returnValue = F("Agnes-Pockels-Weg");
        break;
    }
    case 2963:
    {
        returnValue = F("Agnes-Pütreich-Str.");
        break;
    }
    case 2964:
    {
        returnValue = F("Agnes-Raith-Str.");
        break;
    }
    case 2965:
    {
        returnValue = F("Agnes-Sapper-Str.");
        break;
    }
    case 2966:
    {
        returnValue = F("Agnes-Sapper-Weg");
        break;
    }
    case 2967:
    {
        returnValue = F("Agnes-Schlu-Str.");
        break;
    }
    case 2968:
    {
        returnValue = F("Agnes-Schmitz-Weg");
        break;
    }
    case 2969:
    {
        returnValue = F("Agnes-Schreiber-Str.");
        break;
    }
    case 2970:
    {
        returnValue = F("Agnes-Schwanfelder-Str.");
        break;
    }
    case 2971:
    {
        returnValue = F("Agnes-Smedley-Str.");
        break;
    }
    case 2972:
    {
        returnValue = F("Agnes-Tütel-Weg");
        break;
    }
    case 2973:
    {
        returnValue = F("Agnes-van-Brakel-Str.");
        break;
    }
    case 2974:
    {
        returnValue = F("Agnes-von-Bentheim-Str.");
        break;
    }
    case 2975:
    {
        returnValue = F("Agnes-von-Brandis-Weg");
        break;
    }
    case 2976:
    {
        returnValue = F("Agnes-von-Plesse-Hof");
        break;
    }
    case 2977:
    {
        returnValue = F("Agnes-von-Rietberg-Str.");
        break;
    }
    case 2978:
    {
        returnValue = F("Agnes-von-Württemberg-Str.");
        break;
    }
    case 2979:
    {
        returnValue = F("Agnesbrunnen");
        break;
    }
    case 2980:
    {
        returnValue = F("Agnesbrücke");
        break;
    }
    case 2981:
    {
        returnValue = F("Agnesdorfer Hauptstr.");
        break;
    }
    case 2982:
    {
        returnValue = F("Agnesdorfer Str.");
        break;
    }
    case 2983:
    {
        returnValue = F("Agnese-Schebest-Str.");
        break;
    }
    case 2984:
    {
        returnValue = F("Agnesenhof");
        break;
    }
    case 2985:
    {
        returnValue = F("Agnesenstr.");
        break;
    }
    case 2986:
    {
        returnValue = F("Agnesgarten");
        break;
    }
    case 2987:
    {
        returnValue = F("Agnesgasse");
        break;
    }
    case 2988:
    {
        returnValue = F("Agneshöhe");
        break;
    }
    case 2989:
    {
        returnValue = F("Agnesienberg");
        break;
    }
    case 2990:
    {
        returnValue = F("Agnesienstr.");
        break;
    }
    case 2991:
    {
        returnValue = F("Agnesistr.");
        break;
    }
    case 2992:
    {
        returnValue = F("Agnespromenade");
        break;
    }
    case 2993:
    {
        returnValue = F("Agnesruheweg");
        break;
    }
    case 2994:
    {
        returnValue = F("Agnessteg");
        break;
    }
    case 2995:
    {
        returnValue = F("Agnesstr.");
        break;
    }
    case 2996:
    {
        returnValue = F("Agnestr.");
        break;
    }
    case 2997:
    {
        returnValue = F("Agnesweg");
        break;
    }
    case 2998:
    {
        returnValue = F("Agnetenberg");
        break;
    }
    case 2999:
    {
        returnValue = F("Agnetendorfer Str.");
        break;
    }
    case 3000:
    {
        returnValue = F("Agnetendorfweg");
        break;
    }
    case 3001:
    {
        returnValue = F("Agnetenstr.");
        break;
    }
    case 3002:
    {
        returnValue = F("Agnonweg");
        break;
    }
    case 3003:
    {
        returnValue = F("Agrargenossenschaft Ottendorf eG");
        break;
    }
    case 3004:
    {
        returnValue = F("Agrarstr.");
        break;
    }
    case 3005:
    {
        returnValue = F("Agricolaplatz");
        break;
    }
    case 3006:
    {
        returnValue = F("Agricolastr.");
        break;
    }
    case 3007:
    {
        returnValue = F("Agricolaweg");
        break;
    }
    case 3008:
    {
        returnValue = F("Agrippastr.");
        break;
    }
    case 3009:
    {
        returnValue = F("Agrippinaufer");
        break;
    }
    case 3010:
    {
        returnValue = F("Agrippinaweg");
        break;
    }
    case 3011:
    {
        returnValue = F("Agrippinenstr.");
        break;
    }
    case 3012:
    {
        returnValue = F("Agrisstr.");
        break;
    }
    case 3013:
    {
        returnValue = F("Agritiusstr.");
        break;
    }
    case 3014:
    {
        returnValue = F("Agriweg");
        break;
    }
    case 3015:
    {
        returnValue = F("Agrobstr.");
        break;
    }
    case 3016:
    {
        returnValue = F("Agterhorner Str.");
        break;
    }
    case 3017:
    {
        returnValue = F("Agterum");
        break;
    }
    case 3018:
    {
        returnValue = F("Agust Burr Platz");
        break;
    }
    case 3019:
    {
        returnValue = F("Agustenallee");
        break;
    }
    case 3020:
    {
        returnValue = F("Ahaberggrundweg");
        break;
    }
    case 3021:
    {
        returnValue = F("Ahaer Str.");
        break;
    }
    case 3022:
    {
        returnValue = F("Aham");
        break;
    }
    case 3023:
    {
        returnValue = F("Ahamer Str.");
        break;
    }
    case 3024:
    {
        returnValue = F("Ahamerhaldenweg");
        break;
    }
    case 3025:
    {
        returnValue = F("Ahamstr.");
        break;
    }
    case 3026:
    {
        returnValue = F("Ahastr.");
        break;
    }
    case 3027:
    {
        returnValue = F("Ahaus-Enscheder-Damm");
        break;
    }
    case 3028:
    {
        returnValue = F("Ahausener Str.");
        break;
    }
    case 3029:
    {
        returnValue = F("Ahauser Damm");
        break;
    }
    case 3030:
    {
        returnValue = F("Ahauser Dorfstr.");
        break;
    }
    case 3031:
    {
        returnValue = F("Ahauser Hof");
        break;
    }
    case 3032:
    {
        returnValue = F("Ahauser Landstr.");
        break;
    }
    case 3033:
    {
        returnValue = F("Ahauser Meer");
        break;
    }
    case 3034:
    {
        returnValue = F("Ahauser Mühle");
        break;
    }
    case 3035:
    {
        returnValue = F("Ahauser Str.");
        break;
    }
    case 3036:
    {
        returnValue = F("Ahauser Wischdamm");
        break;
    }
    case 3037:
    {
        returnValue = F("Ahausweg");
        break;
    }
    case 3038:
    {
        returnValue = F("Ahaweg");
        break;
    }
    case 3039:
    {
        returnValue = F("Ahbachstr.");
        break;
    }
    case 3040:
    {
        returnValue = F("Ahdener Talweg");
        break;
    }
    case 3041:
    {
        returnValue = F("Ahdener Weg");
        break;
    }
    case 3042:
    {
        returnValue = F("Ahe");
        break;
    }
    case 3043:
    {
        returnValue = F("Ahebruchweg");
        break;
    }
    case 3044:
    {
        returnValue = F("Ahegg");
        break;
    }
    case 3045:
    {
        returnValue = F("Ahekamp");
        break;
    }
    case 3046:
    {
        returnValue = F("Ahelfinger Str.");
        break;
    }
    case 3047:
    {
        returnValue = F("Ahelfingerstr.");
        break;
    }
    case 3048:
    {
        returnValue = F("Ahelle");
        break;
    }
    case 3049:
    {
        returnValue = F("Ahenweg");
        break;
    }
    case 3050:
    {
        returnValue = F("Aher Berg");
        break;
    }
    case 3051:
    {
        returnValue = F("Aher Kirchweg");
        break;
    }
    case 3052:
    {
        returnValue = F("Aher Str.");
        break;
    }
    case 3053:
    {
        returnValue = F("Aherweg");
        break;
    }
    case 3054:
    {
        returnValue = F("Aherweiden");
        break;
    }
    case 3055:
    {
        returnValue = F("Ahestr.");
        break;
    }
    case 3056:
    {
        returnValue = F("Ahfeldstr.");
        break;
    }
    case 3057:
    {
        returnValue = F("Ahgasse");
        break;
    }
    case 3058:
    {
        returnValue = F("Ahkamp Weg");
        break;
    }
    case 3059:
    {
        returnValue = F("Ahkampsweg");
        break;
    }
    case 3060:
    {
        returnValue = F("Ahl");
        break;
    }
    case 3061:
    {
        returnValue = F("Ahl Buhrjass");
        break;
    }
    case 3062:
    {
        returnValue = F("Ahl Chaussee");
        break;
    }
    case 3063:
    {
        returnValue = F("Ahl Linnisch (Alte Linie)");
        break;
    }
    case 3064:
    {
        returnValue = F("Ahlbacher Str.");
        break;
    }
    case 3065:
    {
        returnValue = F("Ahlbacher Weg");
        break;
    }
    case 3066:
    {
        returnValue = F("Ahlbecker Allee");
        break;
    }
    case 3067:
    {
        returnValue = F("Ahlbecker Bogen");
        break;
    }
    case 3068:
    {
        returnValue = F("Ahlbecker Chaussee");
        break;
    }
    case 3069:
    {
        returnValue = F("Ahlbecker Str.");
        break;
    }
    case 3070:
    {
        returnValue = F("Ahlbecker Weg");
        break;
    }
    case 3071:
    {
        returnValue = F("Ahlbershäuser Str.");
        break;
    }
    case 3072:
    {
        returnValue = F("Ahlbertstr.");
        break;
    }
    case 3073:
    {
        returnValue = F("Ahlbolweg");
        break;
    }
    case 3074:
    {
        returnValue = F("Ahlbrandsweg");
        break;
    }
    case 3075:
    {
        returnValue = F("Ahlbuschweg");
        break;
    }
    case 3076:
    {
        returnValue = F("Ahlde");
        break;
    }
    case 3077:
    {
        returnValue = F("Ahldener Kirchweg");
        break;
    }
    case 3078:
    {
        returnValue = F("Ahldener Str.");
        break;
    }
    case 3079:
    {
        returnValue = F("Ahldener Weg");
        break;
    }
    case 3080:
    {
        returnValue = F("Ahlder Damm");
        break;
    }
    case 3081:
    {
        returnValue = F("Ahlder Str.");
        break;
    }
    case 3082:
    {
        returnValue = F("Ahldersweg");
        break;
    }
    case 3083:
    {
        returnValue = F("Ahldeweg");
        break;
    }
    case 3084:
    {
        returnValue = F("Ahldorfer Weg");
        break;
    }
    case 3085:
    {
        returnValue = F("Ahle Weg");
        break;
    }
    case 3086:
    {
        returnValue = F("Ahlefelder Str.");
        break;
    }
    case 3087:
    {
        returnValue = F("Ahleken");
        break;
    }
    case 3088:
    {
        returnValue = F("Ahlemannstr.");
        break;
    }
    case 3089:
    {
        returnValue = F("Ahlemer Str.");
        break;
    }
    case 3090:
    {
        returnValue = F("Ahlemer Waldstr.");
        break;
    }
    case 3091:
    {
        returnValue = F("Ahlemisser Str.");
        break;
    }
    case 3092:
    {
        returnValue = F("Ahlenbachermühle");
        break;
    }
    case 3093:
    {
        returnValue = F("Ahlenbachweg");
        break;
    }
    case 3094:
    {
        returnValue = F("Ahlenbergweg");
        break;
    }
    case 3095:
    {
        returnValue = F("Ahlenbruch");
        break;
    }
    case 3096:
    {
        returnValue = F("Ahlendorf");
        break;
    }
    case 3097:
    {
        returnValue = F("Ahlendorfer Str.");
        break;
    }
    case 3098:
    {
        returnValue = F("Ahlendung");
        break;
    }
    case 3099:
    {
        returnValue = F("Ahlener Landstr.");
        break;
    }
    case 3100:
    {
        returnValue = F("Ahlener Str.");
        break;
    }
    case 3101:
    {
        returnValue = F("Ahlener Weg");
        break;
    }
    case 3102:
    {
        returnValue = F("Ahlenkamp");
        break;
    }
    case 3103:
    {
        returnValue = F("Ahlenseifen");
        break;
    }
    case 3104:
    {
        returnValue = F("Ahlenstr.");
        break;
    }
    case 3105:
    {
        returnValue = F("Ahlenweg");
        break;
    }
    case 3106:
    {
        returnValue = F("Ahler Grenzweg");
        break;
    }
    case 3107:
    {
        returnValue = F("Ahler Heide");
        break;
    }
    case 3108:
    {
        returnValue = F("Ahler Kopf");
        break;
    }
    case 3109:
    {
        returnValue = F("Ahler Schleuse");
        break;
    }
    case 3110:
    {
        returnValue = F("Ahler Str.");
        break;
    }
    case 3111:
    {
        returnValue = F("Ahler Weg");
        break;
    }
    case 3112:
    {
        returnValue = F("Ahlerfeld");
        break;
    }
    case 3113:
    {
        returnValue = F("Ahlerhof");
        break;
    }
    case 3114:
    {
        returnValue = F("Ahlers Diek");
        break;
    }
    case 3115:
    {
        returnValue = F("Ahlers Kamp");
        break;
    }
    case 3116:
    {
        returnValue = F("Ahlersbacher Str.");
        break;
    }
    case 3117:
    {
        returnValue = F("Ahlershorst");
        break;
    }
    case 3118:
    {
        returnValue = F("Ahlerstau");
        break;
    }
    case 3119:
    {
        returnValue = F("Ahlersweg");
        break;
    }
    case 3120:
    {
        returnValue = F("Ahlert-Bruns-Str.");
        break;
    }
    case 3121:
    {
        returnValue = F("Ahlertsstr.");
        break;
    }
    case 3122:
    {
        returnValue = F("Ahlertweg");
        break;
    }
    case 3123:
    {
        returnValue = F("Ahlerweg");
        break;
    }
    case 3124:
    {
        returnValue = F("Ahlesbrunnenweg");
        break;
    }
    case 3125:
    {
        returnValue = F("Ahlestr.");
        break;
    }
    case 3126:
    {
        returnValue = F("Ahletal");
        break;
    }
    case 3127:
    {
        returnValue = F("Ahlfeld");
        break;
    }
    case 3128:
    {
        returnValue = F("Ahlfeldstr.");
        break;
    }
    case 3129:
    {
        returnValue = F("Ahlfstieg");
        break;
    }
    case 3130:
    {
        returnValue = F("Ahlftener Kirchweg");
        break;
    }
    case 3131:
    {
        returnValue = F("Ahlhausen");
        break;
    }
    case 3132:
    {
        returnValue = F("Ahlheide");
        break;
    }
    case 3133:
    {
        returnValue = F("Ahlhorner Str.");
        break;
    }
    case 3134:
    {
        returnValue = F("Ahlhorner Weg");
        break;
    }
    case 3135:
    {
        returnValue = F("Ahlhorns Kamp");
        break;
    }
    case 3136:
    {
        returnValue = F("Ahlhorststr.");
        break;
    }
    case 3137:
    {
        returnValue = F("Ahligsweg");
        break;
    }
    case 3138:
    {
        returnValue = F("Ahlimbsmühle");
        break;
    }
    case 3139:
    {
        returnValue = F("Ahlimbswalde");
        break;
    }
    case 3140:
    {
        returnValue = F("Ahlinger Berg");
        break;
    }
    case 3141:
    {
        returnValue = F("Ahlinger Str.");
        break;
    }
    case 3142:
    {
        returnValue = F("Ahlinger Weg");
        break;
    }
    case 3143:
    {
        returnValue = F("Ahlintel");
        break;
    }
    case 3144:
    {
        returnValue = F("Ahlke-Lankenau-Weg");
        break;
    }
    case 3145:
    {
        returnValue = F("Ahlkenbusch");
        break;
    }
    case 3146:
    {
        returnValue = F("Ahlkener Str.");
        break;
    }
    case 3147:
    {
        returnValue = F("Ahlkenweg");
        break;
    }
    case 3148:
    {
        returnValue = F("Ahlker Dorfstr.");
        break;
    }
    case 3149:
    {
        returnValue = F("Ahlland Schneise");
        break;
    }
    case 3150:
    {
        returnValue = F("Ahlmannallee");
        break;
    }
    case 3151:
    {
        returnValue = F("Ahlmannshof");
        break;
    }
    case 3152:
    {
        returnValue = F("Ahlmannstr.");
        break;
    }
    case 3153:
    {
        returnValue = F("Ahlmühlstr.");
        break;
    }
    case 3154:
    {
        returnValue = F("Ahlmüllersweg");
        break;
    }
    case 3155:
    {
        returnValue = F("Ahlmüllersweide");
        break;
    }
    case 3156:
    {
        returnValue = F("Ahlrotherweg");
        break;
    }
    case 3157:
    {
        returnValue = F("Ahlrumer Wiesen");
        break;
    }
    case 3158:
    {
        returnValue = F("Ahlsberg");
        break;
    }
    case 3159:
    {
        returnValue = F("Ahlsdorfer Str.");
        break;
    }
    case 3160:
    {
        returnValue = F("Ahlsdorfer Weg");
        break;
    }
    case 3161:
    {
        returnValue = F("Ahlsener Str.");
        break;
    }
    case 3162:
    {
        returnValue = F("Ahlsenshofweg");
        break;
    }
    case 3163:
    {
        returnValue = F("Ahlshäuser Burg");
        break;
    }
    case 3164:
    {
        returnValue = F("Ahlshäuser Endestr.");
        break;
    }
    case 3165:
    {
        returnValue = F("Ahlshäuser Gatze");
        break;
    }
    case 3166:
    {
        returnValue = F("Ahlshäuser Insel");
        break;
    }
    case 3167:
    {
        returnValue = F("Ahlshäuser Kaffeetwetge");
        break;
    }
    case 3168:
    {
        returnValue = F("Ahlshäuser Kirchstr.");
        break;
    }
    case 3169:
    {
        returnValue = F("Ahlshäuser Lieth");
        break;
    }
    case 3170:
    {
        returnValue = F("Ahlshäuser Menganger");
        break;
    }
    case 3171:
    {
        returnValue = F("Ahlshäuser Mädchenstr.");
        break;
    }
    case 3172:
    {
        returnValue = F("Ahlshäuser Siedlung");
        break;
    }
    case 3173:
    {
        returnValue = F("Ahlshäuser Str.");
        break;
    }
    case 3174:
    {
        returnValue = F("Ahlshäuser Teichstr.");
        break;
    }
    case 3175:
    {
        returnValue = F("Ahlstadter Weg");
        break;
    }
    case 3176:
    {
        returnValue = F("Ahlsteige");
        break;
    }
    case 3177:
    {
        returnValue = F("Ahlstr.");
        break;
    }
    case 3178:
    {
        returnValue = F("Ahlstädter Weg");
        break;
    }
    case 3179:
    {
        returnValue = F("Ahlswedenstr.");
        break;
    }
    case 3180:
    {
        returnValue = F("Ahltener Str.");
        break;
    }
    case 3181:
    {
        returnValue = F("Ahlter Feld");
        break;
    }
    case 3182:
    {
        returnValue = F("Ahlumer Str.");
        break;
    }
    case 3183:
    {
        returnValue = F("Ahlumer Weg");
        break;
    }
    case 3184:
    {
        returnValue = F("Ahlweg");
        break;
    }
    case 3185:
    {
        returnValue = F("Ahm");
        break;
    }
    case 3186:
    {
        returnValue = F("Ahmer Weg");
        break;
    }
    case 3187:
    {
        returnValue = F("Ahmsener Kirchweg");
        break;
    }
    case 3188:
    {
        returnValue = F("Ahmsener Str.");
        break;
    }
    case 3189:
    {
        returnValue = F("Ahmser Str.");
        break;
    }
    case 3190:
    {
        returnValue = F("Ahmstorfer Str.");
        break;
    }
    case 3191:
    {
        returnValue = F("Ahmstorfer Weg");
        break;
    }
    case 3192:
    {
        returnValue = F("Ahmstr.");
        break;
    }
    case 3193:
    {
        returnValue = F("Ahnabreite");
        break;
    }
    case 3194:
    {
        returnValue = F("Ahnataler Platz");
        break;
    }
    case 3195:
    {
        returnValue = F("Ahnatalstr.");
        break;
    }
    case 3196:
    {
        returnValue = F("Ahnbeker Ring");
        break;
    }
    case 3197:
    {
        returnValue = F("Ahnbeker Str.");
        break;
    }
    case 3198:
    {
        returnValue = F("Ahnbeker Weg");
        break;
    }
    case 3199:
    {
        returnValue = F("Ahndeicher Str.");
        break;
    }
    case 3200:
    {
        returnValue = F("Ahndeicher Weg");
        break;
    }
    case 3201:
    {
        returnValue = F("Ahndlweg");
        break;
    }
    case 3202:
    {
        returnValue = F("Ahndorfer Str.");
        break;
    }
    case 3203:
    {
        returnValue = F("Ahnebecker Str.");
        break;
    }
    case 3204:
    {
        returnValue = F("Ahneberger Esch");
        break;
    }
    case 3205:
    {
        returnValue = F("Ahneberger Ring");
        break;
    }
    case 3206:
    {
        returnValue = F("Ahneberger Str.");
        break;
    }
    case 3207:
    {
        returnValue = F("Ahneberger Weg");
        break;
    }
    case 3208:
    {
        returnValue = F("Ahnekamp");
        break;
    }
    case 3209:
    {
        returnValue = F("Ahnekamp Grünanlage");
        break;
    }
    case 3210:
    {
        returnValue = F("Ahnengartenweg");
        break;
    }
    case 3211:
    {
        returnValue = F("Ahnenkamp");
        break;
    }
    case 3212:
    {
        returnValue = F("Ahnensgasse");
        break;
    }
    case 3213:
    {
        returnValue = F("Ahnenstr.");
        break;
    }
    case 3214:
    {
        returnValue = F("Ahnenweg");
        break;
    }
    case 3215:
    {
        returnValue = F("Ahnenwende");
        break;
    }
    case 3216:
    {
        returnValue = F("Ahnepark");
        break;
    }
    case 3217:
    {
        returnValue = F("Ahnering");
        break;
    }
    case 3218:
    {
        returnValue = F("Ahnertberg");
        break;
    }
    case 3219:
    {
        returnValue = F("Ahnerweg");
        break;
    }
    case 3220:
    {
        returnValue = F("Ahnestr.");
        break;
    }
    case 3221:
    {
        returnValue = F("Ahneweg");
        break;
    }
    case 3222:
    {
        returnValue = F("Ahnewehrweg");
        break;
    }
    case 3223:
    {
        returnValue = F("Ahnewende");
        break;
    }
    case 3224:
    {
        returnValue = F("Ahnewinkelstr.");
        break;
    }
    case 3225:
    {
        returnValue = F("Ahnfeldstr.");
        break;
    }
    case 3226:
    {
        returnValue = F("Ahngasse");
        break;
    }
    case 3227:
    {
        returnValue = F("Ahnherrnstr.");
        break;
    }
    case 3228:
    {
        returnValue = F("Ahnsbecker Kreisel");
        break;
    }
    case 3229:
    {
        returnValue = F("Ahnsbecker Str.");
        break;
    }
    case 3230:
    {
        returnValue = F("Ahnsbecker Weg");
        break;
    }
    case 3231:
    {
        returnValue = F("Ahnser Str.");
        break;
    }
    case 3232:
    {
        returnValue = F("Ahnser Weg");
        break;
    }
    case 3233:
    {
        returnValue = F("Ahnsförth");
        break;
    }
    case 3234:
    {
        returnValue = F("Ahnstr.");
        break;
    }
    case 3235:
    {
        returnValue = F("Ahntackerweg");
        break;
    }
    case 3236:
    {
        returnValue = F("Ahnten");
        break;
    }
    case 3237:
    {
        returnValue = F("Ahnthöhe");
        break;
    }
    case 3238:
    {
        returnValue = F("Ahntweg");
        break;
    }
    case 3239:
    {
        returnValue = F("Ahnwenne");
        break;
    }
    case 3240:
    {
        returnValue = F("Ahnwers Wiese");
        break;
    }
    case 3241:
    {
        returnValue = F("Aholminger Str.");
        break;
    }
    case 3242:
    {
        returnValue = F("Ahorn");
        break;
    }
    case 3243:
    {
        returnValue = F("Ahorn-Allee");
        break;
    }
    case 3244:
    {
        returnValue = F("Ahornallee");
        break;
    }
    case 3245:
    {
        returnValue = F("Ahornau");
        break;
    }
    case 3246:
    {
        returnValue = F("Ahornberg");
        break;
    }
    case 3247:
    {
        returnValue = F("Ahornberger Str.");
        break;
    }
    case 3248:
    {
        returnValue = F("Ahornbergweg");
        break;
    }
    case 3249:
    {
        returnValue = F("Ahornblick");
        break;
    }
    case 3250:
    {
        returnValue = F("Ahornbodenweg");
        break;
    }
    case 3251:
    {
        returnValue = F("Ahornbogen");
        break;
    }
    case 3252:
    {
        returnValue = F("Ahorner Berg");
        break;
    }
    case 3253:
    {
        returnValue = F("Ahorner Str.");
        break;
    }
    case 3254:
    {
        returnValue = F("Ahornerstr.");
        break;
    }
    case 3255:
    {
        returnValue = F("Ahornfeldweg");
        break;
    }
    case 3256:
    {
        returnValue = F("Ahorngasse");
        break;
    }
    case 3257:
    {
        returnValue = F("Ahornhof");
        break;
    }
    case 3258:
    {
        returnValue = F("Ahornis");
        break;
    }
    case 3259:
    {
        returnValue = F("Ahorniser Str.");
        break;
    }
    case 3260:
    {
        returnValue = F("Ahornkamp");
        break;
    }
    case 3261:
    {
        returnValue = F("Ahornkopfweg");
        break;
    }
    case 3262:
    {
        returnValue = F("Ahornlochweg");
        break;
    }
    case 3263:
    {
        returnValue = F("Ahornmättleweg");
        break;
    }
    case 3264:
    {
        returnValue = F("Ahornpark");
        break;
    }
    case 3265:
    {
        returnValue = F("Ahornpfad");
        break;
    }
    case 3266:
    {
        returnValue = F("Ahornplatz");
        break;
    }
    case 3267:
    {
        returnValue = F("Ahornplatzweg");
        break;
    }
    case 3268:
    {
        returnValue = F("Ahornreitweg");
        break;
    }
    case 3269:
    {
        returnValue = F("Ahornriegelstr.");
        break;
    }
    case 3270:
    {
        returnValue = F("Ahornring");
        break;
    }
    case 3271:
    {
        returnValue = F("Ahornschneise");
        break;
    }
    case 3272:
    {
        returnValue = F("Ahornsiedlung");
        break;
    }
    case 3273:
    {
        returnValue = F("Ahornsteg");
        break;
    }
    case 3274:
    {
        returnValue = F("Ahornsteig");
        break;
    }
    case 3275:
    {
        returnValue = F("Ahornstieg");
        break;
    }
    case 3276:
    {
        returnValue = F("Ahornstr.");
        break;
    }
    case 3277:
    {
        returnValue = F("Ahornstreifen");
        break;
    }
    case 3278:
    {
        returnValue = F("Ahornwannenweg");
        break;
    }
    case 3279:
    {
        returnValue = F("Ahornweg");
        break;
    }
    case 3280:
    {
        returnValue = F("Ahornzeile");
        break;
    }
    case 3281:
    {
        returnValue = F("Ahornzweig");
        break;
    }
    case 3282:
    {
        returnValue = F("Ahornöd");
        break;
    }
    case 3283:
    {
        returnValue = F("Ahornöder Str.");
        break;
    }
    case 3284:
    {
        returnValue = F("Ahr-Rotweinstr.");
        break;
    }
    case 3285:
    {
        returnValue = F("Ahrainer Str.");
        break;
    }
    case 3286:
    {
        returnValue = F("Ahrallee");
        break;
    }
    case 3287:
    {
        returnValue = F("Ahrbachstr.");
        break;
    }
    case 3288:
    {
        returnValue = F("Ahrbeekweg");
        break;
    }
    case 3289:
    {
        returnValue = F("Ahrbeke");
        break;
    }
    case 3290:
    {
        returnValue = F("Ahrberg's Hof");
        break;
    }
    case 3291:
    {
        returnValue = F("Ahrbergenweg");
        break;
    }
    case 3292:
    {
        returnValue = F("Ahrberger Str.");
        break;
    }
    case 3293:
    {
        returnValue = F("Ahrberger Weg");
        break;
    }
    case 3294:
    {
        returnValue = F("Ahrbergstr.");
        break;
    }
    case 3295:
    {
        returnValue = F("Ahrblick");
        break;
    }
    case 3296:
    {
        returnValue = F("Ahrdorfer Basaltpfad");
        break;
    }
    case 3297:
    {
        returnValue = F("Ahrdorfer Str.");
        break;
    }
    case 3298:
    {
        returnValue = F("Ahrdter Chaussee");
        break;
    }
    case 3299:
    {
        returnValue = F("Ahremer Gasse");
        break;
    }
    case 3300:
    {
        returnValue = F("Ahremer Lichweg");
        break;
    }
    case 3301:
    {
        returnValue = F("Ahren");
        break;
    }
    case 3302:
    {
        returnValue = F("Ahrenbergsweg");
        break;
    }
    case 3303:
    {
        returnValue = F("Ahrendgäßchen");
        break;
    }
    case 3304:
    {
        returnValue = F("Ahrendkoppel");
        break;
    }
    case 3305:
    {
        returnValue = F("Ahrendsberg");
        break;
    }
    case 3306:
    {
        returnValue = F("Ahrendsberger Weg");
        break;
    }
    case 3307:
    {
        returnValue = F("Ahrendsee");
        break;
    }
    case 3308:
    {
        returnValue = F("Ahrendseer Weg");
        break;
    }
    case 3309:
    {
        returnValue = F("Ahrendsfelder Stieg");
        break;
    }
    case 3310:
    {
        returnValue = F("Ahrener Feld");
        break;
    }
    case 3311:
    {
        returnValue = F("Ahrenfelder Str.");
        break;
    }
    case 3312:
    {
        returnValue = F("Ahrenholt");
        break;
    }
    case 3313:
    {
        returnValue = F("Ahrenhorst");
        break;
    }
    case 3314:
    {
        returnValue = F("Ahrenloher Str.");
        break;
    }
    case 3315:
    {
        returnValue = F("Ahrenloher Weg");
        break;
    }
    case 3316:
    {
        returnValue = F("Ahrens-Feld");
        break;
    }
    case 3317:
    {
        returnValue = F("Ahrensbeeke");
        break;
    }
    case 3318:
    {
        returnValue = F("Ahrensberg");
        break;
    }
    case 3319:
    {
        returnValue = F("Ahrensberg-Weg");
        break;
    }
    case 3320:
    {
        returnValue = F("Ahrensberger Str.");
        break;
    }
    case 3321:
    {
        returnValue = F("Ahrensberger Weg");
        break;
    }
    case 3322:
    {
        returnValue = F("Ahrensbergstr.");
        break;
    }
    case 3323:
    {
        returnValue = F("Ahrensbergweg");
        break;
    }
    case 3324:
    {
        returnValue = F("Ahrensbruch");
        break;
    }
    case 3325:
    {
        returnValue = F("Ahrensburger Kamp");
        break;
    }
    case 3326:
    {
        returnValue = F("Ahrensburger Redder");
        break;
    }
    case 3327:
    {
        returnValue = F("Ahrensburger Ring");
        break;
    }
    case 3328:
    {
        returnValue = F("Ahrensburger Str.");
        break;
    }
    case 3329:
    {
        returnValue = F("Ahrensburger Weg");
        break;
    }
    case 3330:
    {
        returnValue = F("Ahrensböker Str.");
        break;
    }
    case 3331:
    {
        returnValue = F("Ahrensböker Weg");
        break;
    }
    case 3332:
    {
        returnValue = F("Ahrensdorfer Siedlung");
        break;
    }
    case 3333:
    {
        returnValue = F("Ahrensdorfer Str.");
        break;
    }
    case 3334:
    {
        returnValue = F("Ahrensdorfer Weg");
        break;
    }
    case 3335:
    {
        returnValue = F("Ahrenseekredder");
        break;
    }
    case 3336:
    {
        returnValue = F("Ahrensfelde");
        break;
    }
    case 3337:
    {
        returnValue = F("Ahrensfelder Chaussee");
        break;
    }
    case 3338:
    {
        returnValue = F("Ahrensfelder Dreieck");
        break;
    }
    case 3339:
    {
        returnValue = F("Ahrensfelder Stieg");
        break;
    }
    case 3340:
    {
        returnValue = F("Ahrensfelder Str.");
        break;
    }
    case 3341:
    {
        returnValue = F("Ahrensfelder Weg");
        break;
    }
    case 3342:
    {
        returnValue = F("Ahrensflucht");
        break;
    }
    case 3343:
    {
        returnValue = F("Ahrensfluchter Deich");
        break;
    }
    case 3344:
    {
        returnValue = F("Ahrensfluchter Moor");
        break;
    }
    case 3345:
    {
        returnValue = F("Ahrenshagen");
        break;
    }
    case 3346:
    {
        returnValue = F("Ahrensheidenschneise");
        break;
    }
    case 3347:
    {
        returnValue = F("Ahrenshooper Ring");
        break;
    }
    case 3348:
    {
        returnValue = F("Ahrenshooper Weg");
        break;
    }
    case 3349:
    {
        returnValue = F("Ahrenshorster Weg");
        break;
    }
    case 3350:
    {
        returnValue = F("Ahrenshäger Str.");
        break;
    }
    case 3351:
    {
        returnValue = F("Ahrenshöh");
        break;
    }
    case 3352:
    {
        returnValue = F("Ahrenshügel");
        break;
    }
    case 3353:
    {
        returnValue = F("Ahrenskamp");
        break;
    }
    case 3354:
    {
        returnValue = F("Ahrensnest");
        break;
    }
    case 3355:
    {
        returnValue = F("Ahrensschneise");
        break;
    }
    case 3356:
    {
        returnValue = F("Ahrensstr.");
        break;
    }
    case 3357:
    {
        returnValue = F("Ahrenstwiete");
        break;
    }
    case 3358:
    {
        returnValue = F("Ahrensweg");
        break;
    }
    case 3359:
    {
        returnValue = F("Ahrental");
        break;
    }
    case 3360:
    {
        returnValue = F("Ahrentaler Str.");
        break;
    }
    case 3361:
    {
        returnValue = F("Ahrenviöler Weg");
        break;
    }
    case 3362:
    {
        returnValue = F("Ahrfeldstr.");
        break;
    }
    case 3363:
    {
        returnValue = F("Ahrhutstr.");
        break;
    }
    case 3364:
    {
        returnValue = F("Ahringstal");
        break;
    }
    case 3365:
    {
        returnValue = F("Ahrlandweg");
        break;
    }
    case 3366:
    {
        returnValue = F("Ahrmühle");
        break;
    }
    case 3367:
    {
        returnValue = F("Ahrmühlenweg");
        break;
    }
    case 3368:
    {
        returnValue = F("Ahrnfeldstr.");
        break;
    }
    case 3369:
    {
        returnValue = F("Ahrntaler Platz");
        break;
    }
    case 3370:
    {
        returnValue = F("Ahrntaler Weg");
        break;
    }
    case 3371:
    {
        returnValue = F("Ahrplatz");
        break;
    }
    case 3372:
    {
        returnValue = F("Ahrsener Kirchweg");
        break;
    }
    case 3373:
    {
        returnValue = F("Ahrsener Str.");
        break;
    }
    case 3374:
    {
        returnValue = F("Ahrstr.");
        break;
    }
    case 3375:
    {
        returnValue = F("Ahrtal");
        break;
    }
    case 3376:
    {
        returnValue = F("Ahrtalstr.");
        break;
    }
    case 3377:
    {
        returnValue = F("Ahrtalweg");
        break;
    }
    case 3378:
    {
        returnValue = F("Ahruferstr.");
        break;
    }
    case 3379:
    {
        returnValue = F("Ahrwaldstr.");
        break;
    }
    case 3380:
    {
        returnValue = F("Ahrweg");
        break;
    }
    case 3381:
    {
        returnValue = F("Ahrweiler Str.");
        break;
    }
    case 3382:
    {
        returnValue = F("Ahrweiler Weg");
        break;
    }
    case 3383:
    {
        returnValue = F("Ahrweilerplatz");
        break;
    }
    case 3384:
    {
        returnValue = F("Ahrweilerstr.");
        break;
    }
    case 3385:
    {
        returnValue = F("Ahrweilerweg");
        break;
    }
    case 3386:
    {
        returnValue = F("Ahsegrund");
        break;
    }
    case 3387:
    {
        returnValue = F("Ahsener Allee");
        break;
    }
    case 3388:
    {
        returnValue = F("Ahsener Str.");
        break;
    }
    case 3389:
    {
        returnValue = F("Ahsener Weg");
        break;
    }
    case 3390:
    {
        returnValue = F("Ahseweg");
        break;
    }
    case 3391:
    {
        returnValue = F("Ahstallweg");
        break;
    }
    case 3392:
    {
        returnValue = F("Ahstedter Str.");
        break;
    }
    case 3393:
    {
        returnValue = F("Ahstr.");
        break;
    }
    case 3394:
    {
        returnValue = F("Ahtingsweg");
        break;
    }
    case 3395:
    {
        returnValue = F("Ahtstr.");
        break;
    }
    case 3396:
    {
        returnValue = F("Ahweg");
        break;
    }
    case 3397:
    {
        returnValue = F("Ahäuser Brücke");
        break;
    }
    case 3398:
    {
        returnValue = F("Ahäuser Weg");
        break;
    }
    case 3399:
    {
        returnValue = F("Ahörnlewaldweg");
        break;
    }
    case 3400:
    {
        returnValue = F("Aibachgrund");
        break;
    }
    case 3401:
    {
        returnValue = F("Aibenbachstr.");
        break;
    }
    case 3402:
    {
        returnValue = F("Aibereschweg");
        break;
    }
    case 3403:
    {
        returnValue = F("Aibinger Str.");
        break;
    }
    case 3404:
    {
        returnValue = F("Aiblebrücke");
        break;
    }
    case 3405:
    {
        returnValue = F("Aiblestr.");
        break;
    }
    case 3406:
    {
        returnValue = F("Aiblinger Anger");
        break;
    }
    case 3407:
    {
        returnValue = F("Aiblinger Au");
        break;
    }
    case 3408:
    {
        returnValue = F("Aiblinger Str.");
        break;
    }
    case 3409:
    {
        returnValue = F("Aiblinger Weg");
        break;
    }
    case 3410:
    {
        returnValue = F("Aibweg");
        break;
    }
    case 3411:
    {
        returnValue = F("Aich");
        break;
    }
    case 3412:
    {
        returnValue = F("Aicha");
        break;
    }
    case 3413:
    {
        returnValue = F("Aicha im Tal");
        break;
    }
    case 3414:
    {
        returnValue = F("Aichacher Str.");
        break;
    }
    case 3415:
    {
        returnValue = F("Aichacher Weg");
        break;
    }
    case 3416:
    {
        returnValue = F("Aichaer Str.");
        break;
    }
    case 3417:
    {
        returnValue = F("Aichaer Tal");
        break;
    }
    case 3418:
    {
        returnValue = F("Aichamühle");
        break;
    }
    case 3419:
    {
        returnValue = F("Aichangerstr.");
        break;
    }
    case 3420:
    {
        returnValue = F("Aichauer Str.");
        break;
    }
    case 3421:
    {
        returnValue = F("Aichazandt");
        break;
    }
    case 3422:
    {
        returnValue = F("Aichbachwasen");
        break;
    }
    case 3423:
    {
        returnValue = F("Aichbauernweg");
        break;
    }
    case 3424:
    {
        returnValue = F("Aichbergerstr.");
        break;
    }
    case 3425:
    {
        returnValue = F("Aichbichl");
        break;
    }
    case 3426:
    {
        returnValue = F("Aichbusch");
        break;
    }
    case 3427:
    {
        returnValue = F("Aichelauer Str.");
        break;
    }
    case 3428:
    {
        returnValue = F("Aichelbachstr.");
        break;
    }
    case 3429:
    {
        returnValue = F("Aichelberg");
        break;
    }
    case 3430:
    {
        returnValue = F("Aichelberger Str.");
        break;
    }
    case 3431:
    {
        returnValue = F("Aichelberger Sträßchen");
        break;
    }
    case 3432:
    {
        returnValue = F("Aichelberger Sträßle");
        break;
    }
    case 3433:
    {
        returnValue = F("Aichelberger Weg");
        break;
    }
    case 3434:
    {
        returnValue = F("Aichelbergstr.");
        break;
    }
    case 3435:
    {
        returnValue = F("Aichelbergweg");
        break;
    }
    case 3436:
    {
        returnValue = F("Aichele Park");
        break;
    }
    case 3437:
    {
        returnValue = F("Aichelestr.");
        break;
    }
    case 3438:
    {
        returnValue = F("Aicheleweg");
        break;
    }
    case 3439:
    {
        returnValue = F("Aichelgrundweg");
        break;
    }
    case 3440:
    {
        returnValue = F("Aichelsberg");
        break;
    }
    case 3441:
    {
        returnValue = F("Aichen");
        break;
    }
    case 3442:
    {
        returnValue = F("Aichenbachstr.");
        break;
    }
    case 3443:
    {
        returnValue = F("Aichenbachsträßchen");
        break;
    }
    case 3444:
    {
        returnValue = F("Aichener Str.");
        break;
    }
    case 3445:
    {
        returnValue = F("Aichener Weg");
        break;
    }
    case 3446:
    {
        returnValue = F("Aichenstr.");
        break;
    }
    case 3447:
    {
        returnValue = F("Aichenwiesen");
        break;
    }
    case 3448:
    {
        returnValue = F("Aichenzeller Str.");
        break;
    }
    case 3449:
    {
        returnValue = F("Aicher");
        break;
    }
    case 3450:
    {
        returnValue = F("Aicher Str.");
        break;
    }
    case 3451:
    {
        returnValue = F("Aicher Weg");
        break;
    }
    case 3452:
    {
        returnValue = F("Aicherstr.");
        break;
    }
    case 3453:
    {
        returnValue = F("Aicherweg");
        break;
    }
    case 3454:
    {
        returnValue = F("Aichfeld");
        break;
    }
    case 3455:
    {
        returnValue = F("Aichgasse");
        break;
    }
    case 3456:
    {
        returnValue = F("Aichhalde");
        break;
    }
    case 3457:
    {
        returnValue = F("Aichhalder Hof");
        break;
    }
    case 3458:
    {
        returnValue = F("Aichhalder Str.");
        break;
    }
    case 3459:
    {
        returnValue = F("Aichhalder Weg");
        break;
    }
    case 3460:
    {
        returnValue = F("Aichhaldesträßle");
        break;
    }
    case 3461:
    {
        returnValue = F("Aichheimstr.");
        break;
    }
    case 3462:
    {
        returnValue = F("Aichhofstr.");
        break;
    }
    case 3463:
    {
        returnValue = F("Aichholzhofweg");
        break;
    }
    case 3464:
    {
        returnValue = F("Aichhölzlesweg");
        break;
    }
    case 3465:
    {
        returnValue = F("Aichiger Weg");
        break;
    }
    case 3466:
    {
        returnValue = F("Aichinger Str.");
        break;
    }
    case 3467:
    {
        returnValue = F("Aichingerstr.");
        break;
    }
    case 3468:
    {
        returnValue = F("Aichmehring");
        break;
    }
    case 3469:
    {
        returnValue = F("Aichmühle");
        break;
    }
    case 3470:
    {
        returnValue = F("Aichmühlerstr.");
        break;
    }
    case 3471:
    {
        returnValue = F("Aichmühlweg");
        break;
    }
    case 3472:
    {
        returnValue = F("Aichner-Schmied-Str.");
        break;
    }
    case 3473:
    {
        returnValue = F("Aicholding");
        break;
    }
    case 3474:
    {
        returnValue = F("Aicholdinger Str.");
        break;
    }
    case 3475:
    {
        returnValue = F("Aichpoint");
        break;
    }
    case 3476:
    {
        returnValue = F("Aichschießer Str.");
        break;
    }
    case 3477:
    {
        returnValue = F("Aichschießer Weg");
        break;
    }
    case 3478:
    {
        returnValue = F("Aichstetter Str.");
        break;
    }
    case 3479:
    {
        returnValue = F("Aichstr.");
        break;
    }
    case 3480:
    {
        returnValue = F("Aichstruter Str.");
        break;
    }
    case 3481:
    {
        returnValue = F("Aichtalradweg");
        break;
    }
    case 3482:
    {
        returnValue = F("Aichtalstr.");
        break;
    }
    case 3483:
    {
        returnValue = F("Aichtalweg");
        break;
    }
    case 3484:
    {
        returnValue = F("Aichwaldstr.");
        break;
    }
    case 3485:
    {
        returnValue = F("Aichweg");
        break;
    }
    case 3486:
    {
        returnValue = F("Aidehof");
        break;
    }
    case 3487:
    {
        returnValue = F("Aidelbergstr.");
        break;
    }
    case 3488:
    {
        returnValue = F("Aidenbacher Str.");
        break;
    }
    case 3489:
    {
        returnValue = F("Aidenbacher str.");
        break;
    }
    case 3490:
    {
        returnValue = F("Aidenbergsteige");
        break;
    }
    case 3491:
    {
        returnValue = F("Aidhäuser Str.");
        break;
    }
    case 3492:
    {
        returnValue = F("Aidhäuser Weg");
        break;
    }
    case 3493:
    {
        returnValue = F("Aidlinger Str.");
        break;
    }
    case 3494:
    {
        returnValue = F("Aidlinger Weg");
        break;
    }
    case 3495:
    {
        returnValue = F("Aidmühlstr.");
        break;
    }
    case 3496:
    {
        returnValue = F("Aidostr.");
        break;
    }
    case 3497:
    {
        returnValue = F("Aidseestr.");
        break;
    }
    case 3498:
    {
        returnValue = F("Aienbuchstr.");
        break;
    }
    case 3499:
    {
        returnValue = F("Aienbuchweg");
        break;
    }
    case 3500:
    {
        returnValue = F("Aifenweg");
        break;
    }
    case 3501:
    {
        returnValue = F("Aigen");
        break;
    }
    case 3502:
    {
        returnValue = F("Aigener Str.");
        break;
    }
    case 3503:
    {
        returnValue = F("Aigenstr.");
        break;
    }
    case 3504:
    {
        returnValue = F("Aigenweg");
        break;
    }
    case 3505:
    {
        returnValue = F("Aigesweg");
        break;
    }
    case 3506:
    {
        returnValue = F("Aigl");
        break;
    }
    case 3507:
    {
        returnValue = F("Aiglsbacher Mühlweg");
        break;
    }
    case 3508:
    {
        returnValue = F("Aiglsbacher Str.");
        break;
    }
    case 3509:
    {
        returnValue = F("Aiglsbacher Weg");
        break;
    }
    case 3510:
    {
        returnValue = F("Aiglsbuch");
        break;
    }
    case 3511:
    {
        returnValue = F("Aign");
        break;
    }
    case 3512:
    {
        returnValue = F("Aigner");
        break;
    }
    case 3513:
    {
        returnValue = F("Aigner Str.");
        break;
    }
    case 3514:
    {
        returnValue = F("Aignergasserl");
        break;
    }
    case 3515:
    {
        returnValue = F("Aignerweg");
        break;
    }
    case 3516:
    {
        returnValue = F("Aignstr.");
        break;
    }
    case 3517:
    {
        returnValue = F("Aikewehrstr.");
        break;
    }
    case 3518:
    {
        returnValue = F("Ailastr.");
        break;
    }
    case 3519:
    {
        returnValue = F("Ailbertusstr.");
        break;
    }
    case 3520:
    {
        returnValue = F("Ailenbergstr.");
        break;
    }
    case 3521:
    {
        returnValue = F("Ailestr.");
        break;
    }
    case 3522:
    {
        returnValue = F("Ailhof");
        break;
    }
    case 3523:
    {
        returnValue = F("Ailinger Str.");
        break;
    }
    case 3524:
    {
        returnValue = F("Aillandstr.");
        break;
    }
    case 3525:
    {
        returnValue = F("Aillaudstr.");
        break;
    }
    case 3526:
    {
        returnValue = F("Ailringer Str.");
        break;
    }
    case 3527:
    {
        returnValue = F("Ailsbach");
        break;
    }
    case 3528:
    {
        returnValue = F("Ailsbachweg");
        break;
    }
    case 3529:
    {
        returnValue = F("Ailstr.");
        break;
    }
    case 3530:
    {
        returnValue = F("Ailwaldweg");
        break;
    }
    case 3531:
    {
        returnValue = F("Aimersbachstr.");
        break;
    }
    case 3532:
    {
        returnValue = F("Aimersbachsträßle");
        break;
    }
    case 3533:
    {
        returnValue = F("Ainbrach");
        break;
    }
    case 3534:
    {
        returnValue = F("Ainbracher Weg");
        break;
    }
    case 3535:
    {
        returnValue = F("Aindlinger Str.");
        break;
    }
    case 3536:
    {
        returnValue = F("Ainertshofen");
        break;
    }
    case 3537:
    {
        returnValue = F("Ainestorfstr.");
        break;
    }
    case 3538:
    {
        returnValue = F("Ainhofer Str.");
        break;
    }
    case 3539:
    {
        returnValue = F("Ainkhausen");
        break;
    }
    case 3540:
    {
        returnValue = F("Ainmillerpassage");
        break;
    }
    case 3541:
    {
        returnValue = F("Ainmillerweg");
        break;
    }
    case 3542:
    {
        returnValue = F("Ainrieder Str.");
        break;
    }
    case 3543:
    {
        returnValue = F("Aiplestrasse");
        break;
    }
    case 3544:
    {
        returnValue = F("Aiplspitzstr.");
        break;
    }
    case 3545:
    {
        returnValue = F("Aiplspitzweg");
        break;
    }
    case 3546:
    {
        returnValue = F("Aiplstr.");
        break;
    }
    case 3547:
    {
        returnValue = F("Airach");
        break;
    }
    case 3548:
    {
        returnValue = F("Airbag-Misuse-Str.");
        break;
    }
    case 3549:
    {
        returnValue = F("Airbus-Allee");
        break;
    }
    case 3550:
    {
        returnValue = F("Airbus-Str.");
        break;
    }
    case 3551:
    {
        returnValue = F("Airischwand");
        break;
    }
    case 3552:
    {
        returnValue = F("Airlenbacher Str.");
        break;
    }
    case 3553:
    {
        returnValue = F("Airport City Mall");
        break;
    }
    case 3554:
    {
        returnValue = F("Airportallee");
        break;
    }
    case 3555:
    {
        returnValue = F("Airportring");
        break;
    }
    case 3556:
    {
        returnValue = F("Aischbach");
        break;
    }
    case 3557:
    {
        returnValue = F("Aischbachgasse");
        break;
    }
    case 3558:
    {
        returnValue = F("Aischbachstr.");
        break;
    }
    case 3559:
    {
        returnValue = F("Aischbachweg");
        break;
    }
    case 3560:
    {
        returnValue = F("Aischbühlstr.");
        break;
    }
    case 3561:
    {
        returnValue = F("Aischbühlweg");
        break;
    }
    case 3562:
    {
        returnValue = F("Aischer Hauptstr.");
        break;
    }
    case 3563:
    {
        returnValue = F("Aischer Str.");
        break;
    }
    case 3564:
    {
        returnValue = F("Aischer Weg");
        break;
    }
    case 3565:
    {
        returnValue = F("Aischfeld");
        break;
    }
    case 3566:
    {
        returnValue = F("Aischgartenweg");
        break;
    }
    case 3567:
    {
        returnValue = F("Aischgrundstr.");
        break;
    }
    case 3568:
    {
        returnValue = F("Aisching");
        break;
    }
    case 3569:
    {
        returnValue = F("Aischstr.");
        break;
    }
    case 3570:
    {
        returnValue = F("Aischtalblick");
        break;
    }
    case 3571:
    {
        returnValue = F("Aischtalweg");
        break;
    }
    case 3572:
    {
        returnValue = F("Aischweg");
        break;
    }
    case 3573:
    {
        returnValue = F("Aiselsfeld");
        break;
    }
    case 3574:
    {
        returnValue = F("Aisinger Str.");
        break;
    }
    case 3575:
    {
        returnValue = F("Aispach");
        break;
    }
    case 3576:
    {
        returnValue = F("Aispachstr.");
        break;
    }
    case 3577:
    {
        returnValue = F("Aispachweg");
        break;
    }
    case 3578:
    {
        returnValue = F("Aispelstr.");
        break;
    }
    case 3579:
    {
        returnValue = F("Aispenweg");
        break;
    }
    case 3580:
    {
        returnValue = F("Aisperg");
        break;
    }
    case 3581:
    {
        returnValue = F("Aispergweg");
        break;
    }
    case 3582:
    {
        returnValue = F("Aistaiger Str.");
        break;
    }
    case 3583:
    {
        returnValue = F("Aistegstr.");
        break;
    }
    case 3584:
    {
        returnValue = F("Aisthang");
        break;
    }
    case 3585:
    {
        returnValue = F("Aitelstr.");
        break;
    }
    case 3586:
    {
        returnValue = F("Aitenbachweg");
        break;
    }
    case 3587:
    {
        returnValue = F("Aitental");
        break;
    }
    case 3588:
    {
        returnValue = F("Aiterhofener Str.");
        break;
    }
    case 3589:
    {
        returnValue = F("Aitersteinering");
        break;
    }
    case 3590:
    {
        returnValue = F("Aitlinger Str.");
        break;
    }
    case 3591:
    {
        returnValue = F("Aitlingweg");
        break;
    }
    case 3592:
    {
        returnValue = F("Aitracher Str.");
        break;
    }
    case 3593:
    {
        returnValue = F("Aitrachstr.");
        break;
    }
    case 3594:
    {
        returnValue = F("Aitrachtalstr.");
        break;
    }
    case 3595:
    {
        returnValue = F("Aitrachweg");
        break;
    }
    case 3596:
    {
        returnValue = F("Aitrachwiese");
        break;
    }
    case 3597:
    {
        returnValue = F("Aitranger Str.");
        break;
    }
    case 3598:
    {
        returnValue = F("Aitringer Weg");
        break;
    }
    case 3599:
    {
        returnValue = F("Aitzendorf");
        break;
    }
    case 3600:
    {
        returnValue = F("Aitzendorfer Str.");
        break;
    }
    case 3601:
    {
        returnValue = F("Aivoglweg");
        break;
    }
    case 3602:
    {
        returnValue = F("Aiwaldsträßle");
        break;
    }
    case 3603:
    {
        returnValue = F("Aiwiesenweg");
        break;
    }
    case 3604:
    {
        returnValue = F("Aixer Str.");
        break;
    }
    case 3605:
    {
        returnValue = F("Aixfeld");
        break;
    }
    case 3606:
    {
        returnValue = F("Aixheimer Hauptstr.");
        break;
    }
    case 3607:
    {
        returnValue = F("Aixheimer Planie");
        break;
    }
    case 3608:
    {
        returnValue = F("Aixheimer Str.");
        break;
    }
    case 3609:
    {
        returnValue = F("Aixheimer Sträßle");
        break;
    }
    case 3610:
    {
        returnValue = F("Aixheimer Weg");
        break;
    }
    case 3611:
    {
        returnValue = F("Aizenbergkopfweg");
        break;
    }
    case 3612:
    {
        returnValue = F("Aizenbergrundweg");
        break;
    }
    case 3613:
    {
        returnValue = F("Aizenbergstichweg");
        break;
    }
    case 3614:
    {
        returnValue = F("Aizenkopfweg");
        break;
    }
    case 3615:
    {
        returnValue = F("Aizenreute");
        break;
    }
    case 3616:
    {
        returnValue = F("Ajerundweg");
        break;
    }
    case 3617:
    {
        returnValue = F("Ajkaer Str.");
        break;
    }
    case 3618:
    {
        returnValue = F("Ajtoschstr.");
        break;
    }
    case 3619:
    {
        returnValue = F("Akademie für politische Bildung Steg");
        break;
    }
    case 3620:
    {
        returnValue = F("Akademie-Wiese");
        break;
    }
    case 3621:
    {
        returnValue = F("Akademiegarten");
        break;
    }
    case 3622:
    {
        returnValue = F("Akademiestr.");
        break;
    }
    case 3623:
    {
        returnValue = F("Akademieweg");
        break;
    }
    case 3624:
    {
        returnValue = F("Akaweg");
        break;
    }
    case 3625:
    {
        returnValue = F("Akazienallee");
        break;
    }
    case 3626:
    {
        returnValue = F("Akazienanlage");
        break;
    }
    case 3627:
    {
        returnValue = F("Akazieneck");
        break;
    }
    case 3628:
    {
        returnValue = F("Akaziengarten");
        break;
    }
    case 3629:
    {
        returnValue = F("Akaziengasse");
        break;
    }
    case 3630:
    {
        returnValue = F("Akazienhain");
        break;
    }
    case 3631:
    {
        returnValue = F("Akazienhof");
        break;
    }
    case 3632:
    {
        returnValue = F("Akazienkamp");
        break;
    }
    case 3633:
    {
        returnValue = F("Akazienpfad");
        break;
    }
    case 3634:
    {
        returnValue = F("Akazienrain");
        break;
    }
    case 3635:
    {
        returnValue = F("Akazienring");
        break;
    }
    case 3636:
    {
        returnValue = F("Akaziensteig");
        break;
    }
    case 3637:
    {
        returnValue = F("Akaziensteige");
        break;
    }
    case 3638:
    {
        returnValue = F("Akazienstich");
        break;
    }
    case 3639:
    {
        returnValue = F("Akazienstieg");
        break;
    }
    case 3640:
    {
        returnValue = F("Akazienstr.");
        break;
    }
    case 3641:
    {
        returnValue = F("Akaziensträßchen");
        break;
    }
    case 3642:
    {
        returnValue = F("Akazienweg");
        break;
    }
    case 3643:
    {
        returnValue = F("Akazienwinkel");
        break;
    }
    case 3644:
    {
        returnValue = F("Akazienwäldchen");
        break;
    }
    case 3645:
    {
        returnValue = F("Akeby");
        break;
    }
    case 3646:
    {
        returnValue = F("Akeleienweg");
        break;
    }
    case 3647:
    {
        returnValue = F("Akeleistr.");
        break;
    }
    case 3648:
    {
        returnValue = F("Akeleiweg");
        break;
    }
    case 3649:
    {
        returnValue = F("Akener Bogen");
        break;
    }
    case 3650:
    {
        returnValue = F("Akener Str.");
        break;
    }
    case 3651:
    {
        returnValue = F("Akener Weg");
        break;
    }
    case 3652:
    {
        returnValue = F("Akensche Str.");
        break;
    }
    case 3653:
    {
        returnValue = F("Akenschockweg");
        break;
    }
    case 3654:
    {
        returnValue = F("Aki-Schmidt-Platz");
        break;
    }
    case 3655:
    {
        returnValue = F("Akilindastr.");
        break;
    }
    case 3656:
    {
        returnValue = F("Akitastr.");
        break;
    }
    case 3657:
    {
        returnValue = F("Akkeburg-Brücke");
        break;
    }
    case 3658:
    {
        returnValue = F("Akkenser Weg");
        break;
    }
    case 3659:
    {
        returnValue = F("Akkermanner Str.");
        break;
    }
    case 3660:
    {
        returnValue = F("Akkermannstr.");
        break;
    }
    case 3661:
    {
        returnValue = F("Akkermanstr.");
        break;
    }
    case 3662:
    {
        returnValue = F("Akkoallee");
        break;
    }
    case 3663:
    {
        returnValue = F("Aktenweg");
        break;
    }
    case 3664:
    {
        returnValue = F("Aktienbad");
        break;
    }
    case 3665:
    {
        returnValue = F("Aktienhof");
        break;
    }
    case 3666:
    {
        returnValue = F("Aktienstr.");
        break;
    }
    case 3667:
    {
        returnValue = F("Aktienweg");
        break;
    }
    case 3668:
    {
        returnValue = F("Aktier Bähnchenweg");
        break;
    }
    case 3669:
    {
        returnValue = F("Aktionsfläche");
        break;
    }
    case 3670:
    {
        returnValue = F("Aktionsplatz Kiefernhain");
        break;
    }
    case 3671:
    {
        returnValue = F("Aktiv-Park");
        break;
    }
    case 3672:
    {
        returnValue = F("Aktiv-Stadt-Park");
        break;
    }
    case 3673:
    {
        returnValue = F("AktivLinearPark");
        break;
    }
    case 3674:
    {
        returnValue = F("Aktivpark Phoenix");
        break;
    }
    case 3675:
    {
        returnValue = F("Akyürek-Platz");
        break;
    }
    case 3676:
    {
        returnValue = F("Al");
        break;
    }
    case 3677:
    {
        returnValue = F("Alabama Street");
        break;
    }
    case 3678:
    {
        returnValue = F("Alabama-Pfad");
        break;
    }
    case 3679:
    {
        returnValue = F("Alabamastr.");
        break;
    }
    case 3680:
    {
        returnValue = F("Alabasterweg");
        break;
    }
    case 3681:
    {
        returnValue = F("Alacher Chaussee");
        break;
    }
    case 3682:
    {
        returnValue = F("Alacher Höhe");
        break;
    }
    case 3683:
    {
        returnValue = F("Alacher Str.");
        break;
    }
    case 3684:
    {
        returnValue = F("Alacher Weg");
        break;
    }
    case 3685:
    {
        returnValue = F("Alachsweg");
        break;
    }
    case 3686:
    {
        returnValue = F("Aladinstieg");
        break;
    }
    case 3687:
    {
        returnValue = F("Aladinstr.");
        break;
    }
    case 3688:
    {
        returnValue = F("Aladinweg");
        break;
    }
    case 3689:
    {
        returnValue = F("Alain-Foechterle-Erich-Dilger-Brücke");
        break;
    }
    case 3690:
    {
        returnValue = F("Alamannenstr.");
        break;
    }
    case 3691:
    {
        returnValue = F("Alamannenweg");
        break;
    }
    case 3692:
    {
        returnValue = F("Alamo Circle");
        break;
    }
    case 3693:
    {
        returnValue = F("Alan-Turing-Str.");
        break;
    }
    case 3694:
    {
        returnValue = F("Aland");
        break;
    }
    case 3695:
    {
        returnValue = F("Alander Weg");
        break;
    }
    case 3696:
    {
        returnValue = F("Alandstr.");
        break;
    }
    case 3697:
    {
        returnValue = F("Alandsweg");
        break;
    }
    case 3698:
    {
        returnValue = F("Alandweg");
        break;
    }
    case 3699:
    {
        returnValue = F("Alange");
        break;
    }
    case 3700:
    {
        returnValue = F("Alarichstr.");
        break;
    }
    case 3701:
    {
        returnValue = F("Alarmstr.");
        break;
    }
    case 3702:
    {
        returnValue = F("Alart-von-Eyl-Str.");
        break;
    }
    case 3703:
    {
        returnValue = F("Alaskastr.");
        break;
    }
    case 3704:
    {
        returnValue = F("Alatseestr.");
        break;
    }
    case 3705:
    {
        returnValue = F("Alaunbachweg");
        break;
    }
    case 3706:
    {
        returnValue = F("Alaunbergstr.");
        break;
    }
    case 3707:
    {
        returnValue = F("Alaune");
        break;
    }
    case 3708:
    {
        returnValue = F("Alaunplatz");
        break;
    }
    case 3709:
    {
        returnValue = F("Alaunstr.");
        break;
    }
    case 3710:
    {
        returnValue = F("Alaunwerk");
        break;
    }
    case 3711:
    {
        returnValue = F("Alaunwerksweg");
        break;
    }
    case 3712:
    {
        returnValue = F("Alautertal");
        break;
    }
    case 3713:
    {
        returnValue = F("Alb-Donau-Str.");
        break;
    }
    case 3714:
    {
        returnValue = F("Alb-Kaserne");
        break;
    }
    case 3715:
    {
        returnValue = F("Albach");
        break;
    }
    case 3716:
    {
        returnValue = F("Albacher Str.");
        break;
    }
    case 3717:
    {
        returnValue = F("Albacher Weg");
        break;
    }
    case 3718:
    {
        returnValue = F("Albachinger Str.");
        break;
    }
    case 3719:
    {
        returnValue = F("Albachmühle");
        break;
    }
    case 3720:
    {
        returnValue = F("Albachstr.");
        break;
    }
    case 3721:
    {
        returnValue = F("Albachtstr.");
        break;
    }
    case 3722:
    {
        returnValue = F("Alban-Berg-Str.");
        break;
    }
    case 3723:
    {
        returnValue = F("Alban-Dold-Str.");
        break;
    }
    case 3724:
    {
        returnValue = F("Alban-Haas-Str.");
        break;
    }
    case 3725:
    {
        returnValue = F("Alban-Hess-Str.");
        break;
    }
    case 3726:
    {
        returnValue = F("Alban-Köhler-Str.");
        break;
    }
    case 3727:
    {
        returnValue = F("Alban-Lipp-Str.");
        break;
    }
    case 3728:
    {
        returnValue = F("Alban-Philipps-Str.");
        break;
    }
    case 3729:
    {
        returnValue = F("Alban-Stolz Weg");
        break;
    }
    case 3730:
    {
        returnValue = F("Alban-Stolz-Str.");
        break;
    }
    case 3731:
    {
        returnValue = F("Alban-Stolz-Weg");
        break;
    }
    case 3732:
    {
        returnValue = F("Albanastr.");
        break;
    }
    case 3733:
    {
        returnValue = F("Albanikirchhof");
        break;
    }
    case 3734:
    {
        returnValue = F("Albaniplatz");
        break;
    }
    case 3735:
    {
        returnValue = F("Albaniwall");
        break;
    }
    case 3736:
    {
        returnValue = F("Albansgasse");
        break;
    }
    case 3737:
    {
        returnValue = F("Albanstetten");
        break;
    }
    case 3738:
    {
        returnValue = F("Albanstr.");
        break;
    }
    case 3739:
    {
        returnValue = F("Albansweg");
        break;
    }
    case 3740:
    {
        returnValue = F("Albanus");
        break;
    }
    case 3741:
    {
        returnValue = F("Albanusgasse");
        break;
    }
    case 3742:
    {
        returnValue = F("Albanushof");
        break;
    }
    case 3743:
    {
        returnValue = F("Albanusstr.");
        break;
    }
    case 3744:
    {
        returnValue = F("Albanusweg");
        break;
    }
    case 3745:
    {
        returnValue = F("Albanweg");
        break;
    }
    case 3746:
    {
        returnValue = F("Albanöder Weg");
        break;
    }
    case 3747:
    {
        returnValue = F("Albartusstr.");
        break;
    }
    case 3748:
    {
        returnValue = F("Albast");
        break;
    }
    case 3749:
    {
        returnValue = F("Albastr.");
        break;
    }
    case 3750:
    {
        returnValue = F("Albatross Way");
        break;
    }
    case 3751:
    {
        returnValue = F("Albatrosstr.");
        break;
    }
    case 3752:
    {
        returnValue = F("Albatrosweg");
        break;
    }
    case 3753:
    {
        returnValue = F("Albaufgucker");
        break;
    }
    case 3754:
    {
        returnValue = F("Albaumer Str.");
        break;
    }
    case 3755:
    {
        returnValue = F("Albaxer Str.");
        break;
    }
    case 3756:
    {
        returnValue = F("Albblick");
        break;
    }
    case 3757:
    {
        returnValue = F("Albblickhof");
        break;
    }
    case 3758:
    {
        returnValue = F("Albblickstr.");
        break;
    }
    case 3759:
    {
        returnValue = F("Albblickweg");
        break;
    }
    case 3760:
    {
        returnValue = F("Albbrucker Str.");
        break;
    }
    case 3761:
    {
        returnValue = F("Albecke");
        break;
    }
    case 3762:
    {
        returnValue = F("Albecker Steige");
        break;
    }
    case 3763:
    {
        returnValue = F("Albecker Str.");
        break;
    }
    case 3764:
    {
        returnValue = F("Albecker Weg");
        break;
    }
    case 3765:
    {
        returnValue = F("Albecker-Tor-Str.");
        break;
    }
    case 3766:
    {
        returnValue = F("Albeckstadion");
        break;
    }
    case 3767:
    {
        returnValue = F("Albeckstr.");
        break;
    }
    case 3768:
    {
        returnValue = F("Albendorfer Weg");
        break;
    }
    case 3769:
    {
        returnValue = F("Albenhausenstr.");
        break;
    }
    case 3770:
    {
        returnValue = F("Albenstr.");
        break;
    }
    case 3771:
    {
        returnValue = F("Alberadastr.");
        break;
    }
    case 3772:
    {
        returnValue = F("Alberdingkgasse");
        break;
    }
    case 3773:
    {
        returnValue = F("Albererweg");
        break;
    }
    case 3774:
    {
        returnValue = F("Albergstr.");
        break;
    }
    case 3775:
    {
        returnValue = F("Alberichstr.");
        break;
    }
    case 3776:
    {
        returnValue = F("Alberichweg");
        break;
    }
    case 3777:
    {
        returnValue = F("Albernauer Flügel");
        break;
    }
    case 3778:
    {
        returnValue = F("Albernauer Hauptstr.");
        break;
    }
    case 3779:
    {
        returnValue = F("Albernauer Landstr.");
        break;
    }
    case 3780:
    {
        returnValue = F("Albernauer Str.");
        break;
    }
    case 3781:
    {
        returnValue = F("Albernauer Weg");
        break;
    }
    case 3782:
    {
        returnValue = F("Albernberg");
        break;
    }
    case 3783:
    {
        returnValue = F("Alberndorfer Str.");
        break;
    }
    case 3784:
    {
        returnValue = F("Albernhof");
        break;
    }
    case 3785:
    {
        returnValue = F("Albernhofer Str.");
        break;
    }
    case 3786:
    {
        returnValue = F("Alberodaer Str.");
        break;
    }
    case 3787:
    {
        returnValue = F("Alberoplatz");
        break;
    }
    case 3788:
    {
        returnValue = F("Alberostr.");
        break;
    }
    case 3789:
    {
        returnValue = F("Alberoweg");
        break;
    }
    case 3790:
    {
        returnValue = F("Albers Damm");
        break;
    }
    case 3791:
    {
        returnValue = F("Albers Weg");
        break;
    }
    case 3792:
    {
        returnValue = F("Albersallee");
        break;
    }
    case 3793:
    {
        returnValue = F("Albersbacher Str.");
        break;
    }
    case 3794:
    {
        returnValue = F("Albersbacher Weg");
        break;
    }
    case 3795:
    {
        returnValue = F("Albersbachweg");
        break;
    }
    case 3796:
    {
        returnValue = F("Albersberg");
        break;
    }
    case 3797:
    {
        returnValue = F("Albersburg");
        break;
    }
    case 3798:
    {
        returnValue = F("Albersdamm");
        break;
    }
    case 3799:
    {
        returnValue = F("Albersdorf");
        break;
    }
    case 3800:
    {
        returnValue = F("Albersdorfer Dorfstr.");
        break;
    }
    case 3801:
    {
        returnValue = F("Albersdorfer Hauptstr.");
        break;
    }
    case 3802:
    {
        returnValue = F("Albersdorfer Industriepark");
        break;
    }
    case 3803:
    {
        returnValue = F("Albersdorfer Str.");
        break;
    }
    case 3804:
    {
        returnValue = F("Albersdorfer Weg");
        break;
    }
    case 3805:
    {
        returnValue = F("Albersdorferfeld");
        break;
    }
    case 3806:
    {
        returnValue = F("Albersfeld");
        break;
    }
    case 3807:
    {
        returnValue = F("Albersfelder Str.");
        break;
    }
    case 3808:
    {
        returnValue = F("Albershauser Str.");
        break;
    }
    case 3809:
    {
        returnValue = F("Albershäuser Str.");
        break;
    }
    case 3810:
    {
        returnValue = F("Alberskamp");
        break;
    }
    case 3811:
    {
        returnValue = F("Alberskircher Str.");
        break;
    }
    case 3812:
    {
        returnValue = F("Albersloher Str.");
        break;
    }
    case 3813:
    {
        returnValue = F("Albersreuther Weg");
        break;
    }
    case 3814:
    {
        returnValue = F("Albersrieth");
        break;
    }
    case 3815:
    {
        returnValue = F("Albersrodaer Weg");
        break;
    }
    case 3816:
    {
        returnValue = F("Albersstr.");
        break;
    }
    case 3817:
    {
        returnValue = F("Alberstedter Str.");
        break;
    }
    case 3818:
    {
        returnValue = F("Alberstr.");
        break;
    }
    case 3819:
    {
        returnValue = F("Albersträßle");
        break;
    }
    case 3820:
    {
        returnValue = F("Albersweg");
        break;
    }
    case 3821:
    {
        returnValue = F("Albersweiler Str.");
        break;
    }
    case 3822:
    {
        returnValue = F("Albert");
        break;
    }
    case 3823:
    {
        returnValue = F("Albert Einstein Str.");
        break;
    }
    case 3824:
    {
        returnValue = F("Albert Hofmann Ring");
        break;
    }
    case 3825:
    {
        returnValue = F("Albert Riesterer-Weg");
        break;
    }
    case 3826:
    {
        returnValue = F("Albert Schweitzer Str.");
        break;
    }
    case 3827:
    {
        returnValue = F("Albert von Roeder-Weg");
        break;
    }
    case 3828:
    {
        returnValue = F("Albert-Altwicker-Str.");
        break;
    }
    case 3829:
    {
        returnValue = F("Albert-Anger-Weg");
        break;
    }
    case 3830:
    {
        returnValue = F("Albert-Ballin-Platz");
        break;
    }
    case 3831:
    {
        returnValue = F("Albert-Balling-Gasse");
        break;
    }
    case 3832:
    {
        returnValue = F("Albert-Bartels-Str.");
        break;
    }
    case 3833:
    {
        returnValue = F("Albert-Barthel-Str.");
        break;
    }
    case 3834:
    {
        returnValue = F("Albert-Bassermann-Str.");
        break;
    }
    case 3835:
    {
        returnValue = F("Albert-Bauer-Str.");
        break;
    }
    case 3836:
    {
        returnValue = F("Albert-Baumeister-Str.");
        break;
    }
    case 3837:
    {
        returnValue = F("Albert-Baur-Str.");
        break;
    }
    case 3838:
    {
        returnValue = F("Albert-Bayer-Str.");
        break;
    }
    case 3839:
    {
        returnValue = F("Albert-Bechtel-Str.");
        break;
    }
    case 3840:
    {
        returnValue = F("Albert-Beck-Str.");
        break;
    }
    case 3841:
    {
        returnValue = F("Albert-Benz-Weg");
        break;
    }
    case 3842:
    {
        returnValue = F("Albert-Bergmann-Weg");
        break;
    }
    case 3843:
    {
        returnValue = F("Albert-Bezner-Str.");
        break;
    }
    case 3844:
    {
        returnValue = F("Albert-Blank-Str.");
        break;
    }
    case 3845:
    {
        returnValue = F("Albert-Blau-Str.");
        break;
    }
    case 3846:
    {
        returnValue = F("Albert-Boßler-Str.");
        break;
    }
    case 3847:
    {
        returnValue = F("Albert-Brahms-Str.");
        break;
    }
    case 3848:
    {
        returnValue = F("Albert-Brand-Str.");
        break;
    }
    case 3849:
    {
        returnValue = F("Albert-Bratz-Weg");
        break;
    }
    case 3850:
    {
        returnValue = F("Albert-Braun-Str.");
        break;
    }
    case 3851:
    {
        returnValue = F("Albert-Brey-Str.");
        break;
    }
    case 3852:
    {
        returnValue = F("Albert-Brickwedde-Str.");
        break;
    }
    case 3853:
    {
        returnValue = F("Albert-Brobeil-Str.");
        break;
    }
    case 3854:
    {
        returnValue = F("Albert-Brohme-Str.");
        break;
    }
    case 3855:
    {
        returnValue = F("Albert-Brülls-Str.");
        break;
    }
    case 3856:
    {
        returnValue = F("Albert-Buchmann-Str.");
        break;
    }
    case 3857:
    {
        returnValue = F("Albert-Burger-Str.");
        break;
    }
    case 3858:
    {
        returnValue = F("Albert-Burkart-Str.");
        break;
    }
    case 3859:
    {
        returnValue = F("Albert-Burrer-Str.");
        break;
    }
    case 3860:
    {
        returnValue = F("Albert-Bäuerle-Weg");
        break;
    }
    case 3861:
    {
        returnValue = F("Albert-Böhme-Str.");
        break;
    }
    case 3862:
    {
        returnValue = F("Albert-Bürger-Str.");
        break;
    }
    case 3863:
    {
        returnValue = F("Albert-Büttner-Str.");
        break;
    }
    case 3864:
    {
        returnValue = F("Albert-Cahn-Weg");
        break;
    }
    case 3865:
    {
        returnValue = F("Albert-Camus-Allee");
        break;
    }
    case 3866:
    {
        returnValue = F("Albert-Camus-Hang");
        break;
    }
    case 3867:
    {
        returnValue = F("Albert-Camus-Str.");
        break;
    }
    case 3868:
    {
        returnValue = F("Albert-Dankert-Str.");
        break;
    }
    case 3869:
    {
        returnValue = F("Albert-Debold-Str.");
        break;
    }
    case 3870:
    {
        returnValue = F("Albert-Dehne-Str.");
        break;
    }
    case 3871:
    {
        returnValue = F("Albert-Deitering-Str.");
        break;
    }
    case 3872:
    {
        returnValue = F("Albert-Dimmers-Str.");
        break;
    }
    case 3873:
    {
        returnValue = F("Albert-Drosihn-Str.");
        break;
    }
    case 3874:
    {
        returnValue = F("Albert-Eber-Str.");
        break;
    }
    case 3875:
    {
        returnValue = F("Albert-Ebert-Staffel");
        break;
    }
    case 3876:
    {
        returnValue = F("Albert-Ebert-Str.");
        break;
    }
    case 3877:
    {
        returnValue = F("Albert-Eibach-Str.");
        break;
    }
    case 3878:
    {
        returnValue = F("Albert-Eichhorn-Weg");
        break;
    }
    case 3879:
    {
        returnValue = F("Albert-Einstein-Allee");
        break;
    }
    case 3880:
    {
        returnValue = F("Albert-Einstein-Park");
        break;
    }
    case 3881:
    {
        returnValue = F("Albert-Einstein-Platz");
        break;
    }
    case 3882:
    {
        returnValue = F("Albert-Einstein-Ring");
        break;
    }
    case 3883:
    {
        returnValue = F("Albert-Einstein-Str.");
        break;
    }
    case 3884:
    {
        returnValue = F("Albert-Einstein-Weg");
        break;
    }
    case 3885:
    {
        returnValue = F("Albert-Eise-Str.");
        break;
    }
    case 3886:
    {
        returnValue = F("Albert-Eisele-Weg");
        break;
    }
    case 3887:
    {
        returnValue = F("Albert-Etter-Weg");
        break;
    }
    case 3888:
    {
        returnValue = F("Albert-Eultgem-Allee");
        break;
    }
    case 3889:
    {
        returnValue = F("Albert-Eyckhout-Str.");
        break;
    }
    case 3890:
    {
        returnValue = F("Albert-Federle-Str.");
        break;
    }
    case 3891:
    {
        returnValue = F("Albert-Fehrenbach-Weg");
        break;
    }
    case 3892:
    {
        returnValue = F("Albert-Feinauer-Str.");
        break;
    }
    case 3893:
    {
        returnValue = F("Albert-Ferdinand-Leich-Str.");
        break;
    }
    case 3894:
    {
        returnValue = F("Albert-Fernand-Str.");
        break;
    }
    case 3895:
    {
        returnValue = F("Albert-Fischer-Str.");
        break;
    }
    case 3896:
    {
        returnValue = F("Albert-Florath-Stieg");
        break;
    }
    case 3897:
    {
        returnValue = F("Albert-Florath-Str.");
        break;
    }
    case 3898:
    {
        returnValue = F("Albert-Fraenkel-Str.");
        break;
    }
    case 3899:
    {
        returnValue = F("Albert-Franke-Str.");
        break;
    }
    case 3900:
    {
        returnValue = F("Albert-Fritz-Str.");
        break;
    }
    case 3901:
    {
        returnValue = F("Albert-Fritz-Weg");
        break;
    }
    case 3902:
    {
        returnValue = F("Albert-Fromme-Weg");
        break;
    }
    case 3903:
    {
        returnValue = F("Albert-Funk-Schacht-Str.");
        break;
    }
    case 3904:
    {
        returnValue = F("Albert-Funk-Siedlung");
        break;
    }
    case 3905:
    {
        returnValue = F("Albert-Funk-Str.");
        break;
    }
    case 3906:
    {
        returnValue = F("Albert-Förderer-Str.");
        break;
    }
    case 3907:
    {
        returnValue = F("Albert-Förster-Str.");
        break;
    }
    case 3908:
    {
        returnValue = F("Albert-Gebhardt-Str.");
        break;
    }
    case 3909:
    {
        returnValue = F("Albert-Geiger-Str.");
        break;
    }
    case 3910:
    {
        returnValue = F("Albert-Geiger-Weg");
        break;
    }
    case 3911:
    {
        returnValue = F("Albert-Genz-Str.");
        break;
    }
    case 3912:
    {
        returnValue = F("Albert-Gersbach-Allee");
        break;
    }
    case 3913:
    {
        returnValue = F("Albert-Gerst-Str.");
        break;
    }
    case 3914:
    {
        returnValue = F("Albert-Giesa-Weg");
        break;
    }
    case 3915:
    {
        returnValue = F("Albert-Glück-Str.");
        break;
    }
    case 3916:
    {
        returnValue = F("Albert-Gold-Str.");
        break;
    }
    case 3917:
    {
        returnValue = F("Albert-Gottheiner-Str.");
        break;
    }
    case 3918:
    {
        returnValue = F("Albert-Granderath-Str.");
        break;
    }
    case 3919:
    {
        returnValue = F("Albert-Greiner-Str.");
        break;
    }
    case 3920:
    {
        returnValue = F("Albert-Großer-Str.");
        break;
    }
    case 3921:
    {
        returnValue = F("Albert-Gräper-Str.");
        break;
    }
    case 3922:
    {
        returnValue = F("Albert-Haase-Weg");
        break;
    }
    case 3923:
    {
        returnValue = F("Albert-Hahn-Str.");
        break;
    }
    case 3924:
    {
        returnValue = F("Albert-Hauck-Str.");
        break;
    }
    case 3925:
    {
        returnValue = F("Albert-Haueisen-Ring");
        break;
    }
    case 3926:
    {
        returnValue = F("Albert-Haueisen-Str.");
        break;
    }
    case 3927:
    {
        returnValue = F("Albert-Haverkamp-Weg");
        break;
    }
    case 3928:
    {
        returnValue = F("Albert-Heidt-Str.");
        break;
    }
    case 3929:
    {
        returnValue = F("Albert-Heinle-Str.");
        break;
    }
    case 3930:
    {
        returnValue = F("Albert-Heise-Str.");
        break;
    }
    case 3931:
    {
        returnValue = F("Albert-Heisters-Str.");
        break;
    }
    case 3932:
    {
        returnValue = F("Albert-Hennig-Str.");
        break;
    }
    case 3933:
    {
        returnValue = F("Albert-Hensel-Str.");
        break;
    }
    case 3934:
    {
        returnValue = F("Albert-Herrmann-Str.");
        break;
    }
    case 3935:
    {
        returnValue = F("Albert-Hillenkötter-Str.");
        break;
    }
    case 3936:
    {
        returnValue = F("Albert-Hirsch-Str.");
        break;
    }
    case 3937:
    {
        returnValue = F("Albert-Hirth-Str.");
        break;
    }
    case 3938:
    {
        returnValue = F("Albert-Hitzig-Str.");
        break;
    }
    case 3939:
    {
        returnValue = F("Albert-Hofele-Weg");
        break;
    }
    case 3940:
    {
        returnValue = F("Albert-Hoffa-Str.");
        break;
    }
    case 3941:
    {
        returnValue = F("Albert-Hoffmeister-Weg");
        break;
    }
    case 3942:
    {
        returnValue = F("Albert-Hugard-Str.");
        break;
    }
    case 3943:
    {
        returnValue = F("Albert-Häcker-Weg");
        break;
    }
    case 3944:
    {
        returnValue = F("Albert-Höfer-Str.");
        break;
    }
    case 3945:
    {
        returnValue = F("Albert-Höhle-Str.");
        break;
    }
    case 3946:
    {
        returnValue = F("Albert-Ihle-Str.");
        break;
    }
    case 3947:
    {
        returnValue = F("Albert-Irle-Str.");
        break;
    }
    case 3948:
    {
        returnValue = F("Albert-Jaep-Weg");
        break;
    }
    case 3949:
    {
        returnValue = F("Albert-Jansen-Str.");
        break;
    }
    case 3950:
    {
        returnValue = F("Albert-Jentzsch-Str.");
        break;
    }
    case 3951:
    {
        returnValue = F("Albert-Johannsen-Ring");
        break;
    }
    case 3952:
    {
        returnValue = F("Albert-Johannsen-Str.");
        break;
    }
    case 3953:
    {
        returnValue = F("Albert-Junghans-Str.");
        break;
    }
    case 3954:
    {
        returnValue = F("Albert-Kaindl-Ring");
        break;
    }
    case 3955:
    {
        returnValue = F("Albert-Kappis-Weg");
        break;
    }
    case 3956:
    {
        returnValue = F("Albert-Kaus-Weg");
        break;
    }
    case 3957:
    {
        returnValue = F("Albert-Kehr-Str.");
        break;
    }
    case 3958:
    {
        returnValue = F("Albert-Keller-Str.");
        break;
    }
    case 3959:
    {
        returnValue = F("Albert-Kellermann-Str.");
        break;
    }
    case 3960:
    {
        returnValue = F("Albert-Kelterbaum-Str.");
        break;
    }
    case 3961:
    {
        returnValue = F("Albert-Kemmann-Str.");
        break;
    }
    case 3962:
    {
        returnValue = F("Albert-Kemmerich-Str.");
        break;
    }
    case 3963:
    {
        returnValue = F("Albert-Ketter-Weg");
        break;
    }
    case 3964:
    {
        returnValue = F("Albert-Ketterer-Weg");
        break;
    }
    case 3965:
    {
        returnValue = F("Albert-Kiekebusch-Str.");
        break;
    }
    case 3966:
    {
        returnValue = F("Albert-Kiekert-Str.");
        break;
    }
    case 3967:
    {
        returnValue = F("Albert-Kirchmayer-Weg");
        break;
    }
    case 3968:
    {
        returnValue = F("Albert-Klaus-Str.");
        break;
    }
    case 3969:
    {
        returnValue = F("Albert-Kleeberg-Str.");
        break;
    }
    case 3970:
    {
        returnValue = F("Albert-Klein-Str.");
        break;
    }
    case 3971:
    {
        returnValue = F("Albert-Kleinheinz-Str.");
        break;
    }
    case 3972:
    {
        returnValue = F("Albert-Klenner-Str.");
        break;
    }
    case 3973:
    {
        returnValue = F("Albert-Klotz-Str.");
        break;
    }
    case 3974:
    {
        returnValue = F("Albert-Kloß-Str.");
        break;
    }
    case 3975:
    {
        returnValue = F("Albert-Knoll-Str.");
        break;
    }
    case 3976:
    {
        returnValue = F("Albert-Koch-Str.");
        break;
    }
    case 3977:
    {
        returnValue = F("Albert-Kollinger-Str.");
        break;
    }
    case 3978:
    {
        returnValue = F("Albert-Krapp-Str.");
        break;
    }
    case 3979:
    {
        returnValue = F("Albert-Kratz-Str.");
        break;
    }
    case 3980:
    {
        returnValue = F("Albert-Krautheimer-Str.");
        break;
    }
    case 3981:
    {
        returnValue = F("Albert-Krieg-Str.");
        break;
    }
    case 3982:
    {
        returnValue = F("Albert-Kromer-Str.");
        break;
    }
    case 3983:
    {
        returnValue = F("Albert-Kuntz-Str.");
        break;
    }
    case 3984:
    {
        returnValue = F("Albert-Kunze-Weg");
        break;
    }
    case 3985:
    {
        returnValue = F("Albert-Kusel-Str.");
        break;
    }
    case 3986:
    {
        returnValue = F("Albert-Käs-Str.");
        break;
    }
    case 3987:
    {
        returnValue = F("Albert-Köbele-Str.");
        break;
    }
    case 3988:
    {
        returnValue = F("Albert-Köhler-Str.");
        break;
    }
    case 3989:
    {
        returnValue = F("Albert-Költzsch-Str.");
        break;
    }
    case 3990:
    {
        returnValue = F("Albert-König-Str.");
        break;
    }
    case 3991:
    {
        returnValue = F("Albert-Lange-Str.");
        break;
    }
    case 3992:
    {
        returnValue = F("Albert-Lehmann-Str.");
        break;
    }
    case 3993:
    {
        returnValue = F("Albert-Leidl-Str.");
        break;
    }
    case 3994:
    {
        returnValue = F("Albert-Leiss-Weg");
        break;
    }
    case 3995:
    {
        returnValue = F("Albert-Leiß-Str.");
        break;
    }
    case 3996:
    {
        returnValue = F("Albert-Lemaire-Platz");
        break;
    }
    case 3997:
    {
        returnValue = F("Albert-Levy-Str.");
        break;
    }
    case 3998:
    {
        returnValue = F("Albert-Lezius-Str.");
        break;
    }
    case 3999:
    {
        returnValue = F("Albert-Lindig-Str.");
        break;
    }
    case 4000:
    {
        returnValue = F("Albert-Lindner-Str.");
        break;
    }
    case 4001:
    {
        returnValue = F("Albert-Linel-Str.");
        break;
    }
    case 4002:
    {
        returnValue = F("Albert-Loeb-Weg");
        break;
    }
    case 4003:
    {
        returnValue = F("Albert-Loher-Str.");
        break;
    }
    case 4004:
    {
        returnValue = F("Albert-Lortzing-Park");
        break;
    }
    case 4005:
    {
        returnValue = F("Albert-Lortzing-Str.");
        break;
    }
    case 4006:
    {
        returnValue = F("Albert-Lortzing-Weg");
        break;
    }
    case 4007:
    {
        returnValue = F("Albert-Lucas-Str.");
        break;
    }
    case 4008:
    {
        returnValue = F("Albert-Ludwig-Grimm-Str.");
        break;
    }
    case 4009:
    {
        returnValue = F("Albert-Luthuli-Platz");
        break;
    }
    case 4010:
    {
        returnValue = F("Albert-Lux-Str.");
        break;
    }
    case 4011:
    {
        returnValue = F("Albert-Lüke-Str.");
        break;
    }
    case 4012:
    {
        returnValue = F("Albert-Maas-Str.");
        break;
    }
    case 4013:
    {
        returnValue = F("Albert-Mager-Str.");
        break;
    }
    case 4014:
    {
        returnValue = F("Albert-Magg-Str.");
        break;
    }
    case 4015:
    {
        returnValue = F("Albert-Mahlstedt-Str.");
        break;
    }
    case 4016:
    {
        returnValue = F("Albert-Maier-Str.");
        break;
    }
    case 4017:
    {
        returnValue = F("Albert-Maschulla-Weg");
        break;
    }
    case 4018:
    {
        returnValue = F("Albert-Maurer-Weg");
        break;
    }
    case 4019:
    {
        returnValue = F("Albert-Mayer-Str.");
        break;
    }
    case 4020:
    {
        returnValue = F("Albert-Mays-Str.");
        break;
    }
    case 4021:
    {
        returnValue = F("Albert-Menn-Weg");
        break;
    }
    case 4022:
    {
        returnValue = F("Albert-Mertes-Str.");
        break;
    }
    case 4023:
    {
        returnValue = F("Albert-Mertés-Str.");
        break;
    }
    case 4024:
    {
        returnValue = F("Albert-Meyder-Weg");
        break;
    }
    case 4025:
    {
        returnValue = F("Albert-Meyer-Str.");
        break;
    }
    case 4026:
    {
        returnValue = F("Albert-Miller-Platz");
        break;
    }
    case 4027:
    {
        returnValue = F("Albert-Miller-Str.");
        break;
    }
    case 4028:
    {
        returnValue = F("Albert-Molineus-Str.");
        break;
    }
    case 4029:
    {
        returnValue = F("Albert-Mooren-Allee");
        break;
    }
    case 4030:
    {
        returnValue = F("Albert-Moser-Str.");
        break;
    }
    case 4031:
    {
        returnValue = F("Albert-Moser-Weg");
        break;
    }
    case 4032:
    {
        returnValue = F("Albert-Mücke-Ring");
        break;
    }
    case 4033:
    {
        returnValue = F("Albert-Müller-Str.");
        break;
    }
    case 4034:
    {
        returnValue = F("Albert-Nadler-Weg");
        break;
    }
    case 4035:
    {
        returnValue = F("Albert-Nestler-Str.");
        break;
    }
    case 4036:
    {
        returnValue = F("Albert-Neuffer-Str.");
        break;
    }
    case 4037:
    {
        returnValue = F("Albert-Neumaier-Str.");
        break;
    }
    case 4038:
    {
        returnValue = F("Albert-Neumeister-Str.");
        break;
    }
    case 4039:
    {
        returnValue = F("Albert-Neupert-Str.");
        break;
    }
    case 4040:
    {
        returnValue = F("Albert-Neß-Str.");
        break;
    }
    case 4041:
    {
        returnValue = F("Albert-Niemann-Str.");
        break;
    }
    case 4042:
    {
        returnValue = F("Albert-Niethammer-Str.");
        break;
    }
    case 4043:
    {
        returnValue = F("Albert-Nußbaum-Str.");
        break;
    }
    case 4044:
    {
        returnValue = F("Albert-Nöll-Str.");
        break;
    }
    case 4045:
    {
        returnValue = F("Albert-Oetker-Str.");
        break;
    }
    case 4046:
    {
        returnValue = F("Albert-Ortmann-Str.");
        break;
    }
    case 4047:
    {
        returnValue = F("Albert-Osenberg-Str.");
        break;
    }
    case 4048:
    {
        returnValue = F("Albert-Osswald-Platz");
        break;
    }
    case 4049:
    {
        returnValue = F("Albert-Otto-Str.");
        break;
    }
    case 4050:
    {
        returnValue = F("Albert-Otto-Weg");
        break;
    }
    case 4051:
    {
        returnValue = F("Albert-Park");
        break;
    }
    case 4052:
    {
        returnValue = F("Albert-Pathen-Str.");
        break;
    }
    case 4053:
    {
        returnValue = F("Albert-Pausch-Ring");
        break;
    }
    case 4054:
    {
        returnValue = F("Albert-Pepper-Weg");
        break;
    }
    case 4055:
    {
        returnValue = F("Albert-Pfander-Weg");
        break;
    }
    case 4056:
    {
        returnValue = F("Albert-Pfeffer-Str.");
        break;
    }
    case 4057:
    {
        returnValue = F("Albert-Pfeiffer-Str.");
        break;
    }
    case 4058:
    {
        returnValue = F("Albert-Pfitzer-Str.");
        break;
    }
    case 4059:
    {
        returnValue = F("Albert-Pilz-Schottelius-Weg");
        break;
    }
    case 4060:
    {
        returnValue = F("Albert-Preu-Str.");
        break;
    }
    case 4061:
    {
        returnValue = F("Albert-Prochnow-Str.");
        break;
    }
    case 4062:
    {
        returnValue = F("Albert-Pulvers-Str.");
        break;
    }
    case 4063:
    {
        returnValue = F("Albert-Pütz-Str.");
        break;
    }
    case 4064:
    {
        returnValue = F("Albert-Rauscher-Weg");
        break;
    }
    case 4065:
    {
        returnValue = F("Albert-Reis-Str.");
        break;
    }
    case 4066:
    {
        returnValue = F("Albert-Reiß-Str.");
        break;
    }
    case 4067:
    {
        returnValue = F("Albert-Reuter-Str.");
        break;
    }
    case 4068:
    {
        returnValue = F("Albert-Reuß-Str.");
        break;
    }
    case 4069:
    {
        returnValue = F("Albert-Richartz-Str.");
        break;
    }
    case 4070:
    {
        returnValue = F("Albert-Richter-Str.");
        break;
    }
    case 4071:
    {
        returnValue = F("Albert-Richter-Weg");
        break;
    }
    case 4072:
    {
        returnValue = F("Albert-Riesterer-Str.");
        break;
    }
    case 4073:
    {
        returnValue = F("Albert-Riesterer-Weg");
        break;
    }
    case 4074:
    {
        returnValue = F("Albert-Rißberger-Str.");
        break;
    }
    case 4075:
    {
        returnValue = F("Albert-Rohloff-Str.");
        break;
    }
    case 4076:
    {
        returnValue = F("Albert-Roller-Str.");
        break;
    }
    case 4077:
    {
        returnValue = F("Albert-Rosenfelder-Str.");
        break;
    }
    case 4078:
    {
        returnValue = F("Albert-Rosenkranz-Str.");
        break;
    }
    case 4079:
    {
        returnValue = F("Albert-Roth-Str.");
        break;
    }
    case 4080:
    {
        returnValue = F("Albert-Ruckdeschel-Str.");
        break;
    }
    case 4081:
    {
        returnValue = F("Albert-Rupp-Str.");
        break;
    }
    case 4082:
    {
        returnValue = F("Albert-Ruppersberg-Str.");
        break;
    }
    case 4083:
    {
        returnValue = F("Albert-Rusch-Str.");
        break;
    }
    case 4084:
    {
        returnValue = F("Albert-Sammt-Str.");
        break;
    }
    case 4085:
    {
        returnValue = F("Albert-Saur-Str.");
        break;
    }
    case 4086:
    {
        returnValue = F("Albert-Sauter-Str.");
        break;
    }
    case 4087:
    {
        returnValue = F("Albert-Schalle-Weg");
        break;
    }
    case 4088:
    {
        returnValue = F("Albert-Schalper-Str.");
        break;
    }
    case 4089:
    {
        returnValue = F("Albert-Schaper-Weg");
        break;
    }
    case 4090:
    {
        returnValue = F("Albert-Schatz-Str.");
        break;
    }
    case 4091:
    {
        returnValue = F("Albert-Schenavsky-Str.");
        break;
    }
    case 4092:
    {
        returnValue = F("Albert-Schenk-Str.");
        break;
    }
    case 4093:
    {
        returnValue = F("Albert-Scherer-Weg");
        break;
    }
    case 4094:
    {
        returnValue = F("Albert-Scheurle-Weg");
        break;
    }
    case 4095:
    {
        returnValue = F("Albert-Schill-Str.");
        break;
    }
    case 4096:
    {
        returnValue = F("Albert-Schilling-Str.");
        break;
    }
    case 4097:
    {
        returnValue = F("Albert-Schindlbeck-Str.");
        break;
    }
    case 4098:
    {
        returnValue = F("Albert-Schlangen-Str.");
        break;
    }
    case 4099:
    {
        returnValue = F("Albert-Schletter-Str.");
        break;
    }
    case 4100:
    {
        returnValue = F("Albert-Schmidt-Allee");
        break;
    }
    case 4101:
    {
        returnValue = F("Albert-Schmidt-Str.");
        break;
    }
    case 4102:
    {
        returnValue = F("Albert-Schmitt-Str.");
        break;
    }
    case 4103:
    {
        returnValue = F("Albert-Schneble-Str.");
        break;
    }
    case 4104:
    {
        returnValue = F("Albert-Schneider-Str.");
        break;
    }
    case 4105:
    {
        returnValue = F("Albert-Schneller-Weg");
        break;
    }
    case 4106:
    {
        returnValue = F("Albert-Schofer-Weg");
        break;
    }
    case 4107:
    {
        returnValue = F("Albert-Schorn-Weg");
        break;
    }
    case 4108:
    {
        returnValue = F("Albert-Schott-Str.");
        break;
    }
    case 4109:
    {
        returnValue = F("Albert-Schuchardt-Str.");
        break;
    }
    case 4110:
    {
        returnValue = F("Albert-Schulte-Park");
        break;
    }
    case 4111:
    {
        returnValue = F("Albert-Schulz-Str.");
        break;
    }
    case 4112:
    {
        returnValue = F("Albert-Schwarick-Weg");
        break;
    }
    case 4113:
    {
        returnValue = F("Albert-Schwegler-Str.");
        break;
    }
    case 4114:
    {
        returnValue = F("Albert-Schweitzer Str.");
        break;
    }
    case 4115:
    {
        returnValue = F("Albert-Schweitzer-Allee");
        break;
    }
    case 4116:
    {
        returnValue = F("Albert-Schweitzer-Hof");
        break;
    }
    case 4117:
    {
        returnValue = F("Albert-Schweitzer-Lager");
        break;
    }
    case 4118:
    {
        returnValue = F("Albert-Schweitzer-Park");
        break;
    }
    case 4119:
    {
        returnValue = F("Albert-Schweitzer-Pfad");
        break;
    }
    case 4120:
    {
        returnValue = F("Albert-Schweitzer-Platz");
        break;
    }
    case 4121:
    {
        returnValue = F("Albert-Schweitzer-Ring");
        break;
    }
    case 4122:
    {
        returnValue = F("Albert-Schweitzer-Seniorenzentrum");
        break;
    }
    case 4123:
    {
        returnValue = F("Albert-Schweitzer-Siedlung");
        break;
    }
    case 4124:
    {
        returnValue = F("Albert-Schweitzer-Str.");
        break;
    }
    case 4125:
    {
        returnValue = F("Albert-Schweitzer-Str. 15-20");
        break;
    }
    case 4126:
    {
        returnValue = F("Albert-Schweitzer-Weg");
        break;
    }
    case 4127:
    {
        returnValue = F("Albert-Schäfer-Str.");
        break;
    }
    case 4128:
    {
        returnValue = F("Albert-Schäfer-Weg");
        break;
    }
    case 4129:
    {
        returnValue = F("Albert-Schäffenacker-Str.");
        break;
    }
    case 4130:
    {
        returnValue = F("Albert-Schäffle-Str.");
        break;
    }
    case 4131:
    {
        returnValue = F("Albert-Schäffler-Str.");
        break;
    }
    case 4132:
    {
        returnValue = F("Albert-Schöchle-Brücke");
        break;
    }
    case 4133:
    {
        returnValue = F("Albert-Schöchle-Weg");
        break;
    }
    case 4134:
    {
        returnValue = F("Albert-Schöffel-Str.");
        break;
    }
    case 4135:
    {
        returnValue = F("Albert-Schöllhammer-Str.");
        break;
    }
    case 4136:
    {
        returnValue = F("Albert-Schüle-Str.");
        break;
    }
    case 4137:
    {
        returnValue = F("Albert-Schüle-Weg");
        break;
    }
    case 4138:
    {
        returnValue = F("Albert-Seidl-Str.");
        break;
    }
    case 4139:
    {
        returnValue = F("Albert-Sergel-Str.");
        break;
    }
    case 4140:
    {
        returnValue = F("Albert-Siebel-Str.");
        break;
    }
    case 4141:
    {
        returnValue = F("Albert-Sigismund-Str.");
        break;
    }
    case 4142:
    {
        returnValue = F("Albert-Sigl-Str.");
        break;
    }
    case 4143:
    {
        returnValue = F("Albert-Sixtus-Str.");
        break;
    }
    case 4144:
    {
        returnValue = F("Albert-Sonntag-Str.");
        break;
    }
    case 4145:
    {
        returnValue = F("Albert-Spieker-Weg");
        break;
    }
    case 4146:
    {
        returnValue = F("Albert-Spiertz-Str.");
        break;
    }
    case 4147:
    {
        returnValue = F("Albert-Spinn-Weg");
        break;
    }
    case 4148:
    {
        returnValue = F("Albert-Sprenger-Str.");
        break;
    }
    case 4149:
    {
        returnValue = F("Albert-Stagura-Weg");
        break;
    }
    case 4150:
    {
        returnValue = F("Albert-Staimlin-Str.");
        break;
    }
    case 4151:
    {
        returnValue = F("Albert-Steeger-Str.");
        break;
    }
    case 4152:
    {
        returnValue = F("Albert-Stehlin-Str.");
        break;
    }
    case 4153:
    {
        returnValue = F("Albert-Steiert-Weg");
        break;
    }
    case 4154:
    {
        returnValue = F("Albert-Steinbach-Str.");
        break;
    }
    case 4155:
    {
        returnValue = F("Albert-Steiner-Str.");
        break;
    }
    case 4156:
    {
        returnValue = F("Albert-Stemmer-Weg");
        break;
    }
    case 4157:
    {
        returnValue = F("Albert-Stiefelhagen-Weg");
        break;
    }
    case 4158:
    {
        returnValue = F("Albert-Stienemann-Str.");
        break;
    }
    case 4159:
    {
        returnValue = F("Albert-Stifter-Str.");
        break;
    }
    case 4160:
    {
        returnValue = F("Albert-Stohr-Str.");
        break;
    }
    case 4161:
    {
        returnValue = F("Albert-Stolte-Str.");
        break;
    }
    case 4162:
    {
        returnValue = F("Albert-Strahmann-Weg");
        break;
    }
    case 4163:
    {
        returnValue = F("Albert-Strasmann-Weg");
        break;
    }
    case 4164:
    {
        returnValue = F("Albert-Straube-Siedlung");
        break;
    }
    case 4165:
    {
        returnValue = F("Albert-Struck-Str.");
        break;
    }
    case 4166:
    {
        returnValue = F("Albert-Tanneur-Str.");
        break;
    }
    case 4167:
    {
        returnValue = F("Albert-Ten-Brink-Str.");
        break;
    }
    case 4168:
    {
        returnValue = F("Albert-Tillmanns-Weg");
        break;
    }
    case 4169:
    {
        returnValue = F("Albert-Traeger-Str.");
        break;
    }
    case 4170:
    {
        returnValue = F("Albert-Trautmann-Str.");
        break;
    }
    case 4171:
    {
        returnValue = F("Albert-Troitzsch-Platz");
        break;
    }
    case 4172:
    {
        returnValue = F("Albert-Träger-Str.");
        break;
    }
    case 4173:
    {
        returnValue = F("Albert-Ueberle-Str.");
        break;
    }
    case 4174:
    {
        returnValue = F("Albert-Uffenheimer-Platz");
        break;
    }
    case 4175:
    {
        returnValue = F("Albert-Uhl-Weg");
        break;
    }
    case 4176:
    {
        returnValue = F("Albert-Vater-Str.");
        break;
    }
    case 4177:
    {
        returnValue = F("Albert-Venus-Weg");
        break;
    }
    case 4178:
    {
        returnValue = F("Albert-Viertel-Str.");
        break;
    }
    case 4179:
    {
        returnValue = F("Albert-Viertel-Weg");
        break;
    }
    case 4180:
    {
        returnValue = F("Albert-Voigts-Weg");
        break;
    }
    case 4181:
    {
        returnValue = F("Albert-Vollsack-Str.");
        break;
    }
    case 4182:
    {
        returnValue = F("Albert-Wagner-Str.");
        break;
    }
    case 4183:
    {
        returnValue = F("Albert-Waldenspul-Weg");
        break;
    }
    case 4184:
    {
        returnValue = F("Albert-Walter-Str.");
        break;
    }
    case 4185:
    {
        returnValue = F("Albert-Wamser-Str.");
        break;
    }
    case 4186:
    {
        returnValue = F("Albert-Wasmer-Str.");
        break;
    }
    case 4187:
    {
        returnValue = F("Albert-Wehner-Promenade");
        break;
    }
    case 4188:
    {
        returnValue = F("Albert-Weinand-Str.");
        break;
    }
    case 4189:
    {
        returnValue = F("Albert-Weisgerber-Allee");
        break;
    }
    case 4190:
    {
        returnValue = F("Albert-Weisgerber-Str.");
        break;
    }
    case 4191:
    {
        returnValue = F("Albert-Wenig-Str.");
        break;
    }
    case 4192:
    {
        returnValue = F("Albert-Werfer-Str.");
        break;
    }
    case 4193:
    {
        returnValue = F("Albert-Werlitz-Str.");
        break;
    }
    case 4194:
    {
        returnValue = F("Albert-Wetzig-Str.");
        break;
    }
    case 4195:
    {
        returnValue = F("Albert-Wiebach-Str.");
        break;
    }
    case 4196:
    {
        returnValue = F("Albert-Wilkening-Str.");
        break;
    }
    case 4197:
    {
        returnValue = F("Albert-Wilkes-Str.");
        break;
    }
    case 4198:
    {
        returnValue = F("Albert-Wirth-Str.");
        break;
    }
    case 4199:
    {
        returnValue = F("Albert-Ziegler-Str.");
        break;
    }
    case 4200:
    {
        returnValue = F("Albert-Zimmermann-Str.");
        break;
    }
    case 4201:
    {
        returnValue = F("Albert-Zink-Str.");
        break;
    }
    case 4202:
    {
        returnValue = F("Albert-Zittel-Weg");
        break;
    }
    case 4203:
    {
        returnValue = F("Albert-de-Roock-Str.");
        break;
    }
    case 4204:
    {
        returnValue = F("Albert-von-Iring-Str.");
        break;
    }
    case 4205:
    {
        returnValue = F("Alberta-Str.");
        break;
    }
    case 4206:
    {
        returnValue = F("Albertastr.");
        break;
    }
    case 4207:
    {
        returnValue = F("Albertberg");
        break;
    }
    case 4208:
    {
        returnValue = F("Albertbrücke");
        break;
    }
    case 4209:
    {
        returnValue = F("Albertgasse");
        break;
    }
    case 4210:
    {
        returnValue = F("Alberthalstr.");
        break;
    }
    case 4211:
    {
        returnValue = F("Alberti-Park");
        break;
    }
    case 4212:
    {
        returnValue = F("Albertine");
        break;
    }
    case 4213:
    {
        returnValue = F("Albertine-Plock-Str.");
        break;
    }
    case 4214:
    {
        returnValue = F("Albertine-Scherer-Str.");
        break;
    }
    case 4215:
    {
        returnValue = F("Albertine-Tost-Str.");
        break;
    }
    case 4216:
    {
        returnValue = F("Albertine-von-Grün-Str.");
        break;
    }
    case 4217:
    {
        returnValue = F("Albertinenhof");
        break;
    }
    case 4218:
    {
        returnValue = F("Albertinenhofer Str.");
        break;
    }
    case 4219:
    {
        returnValue = F("Albertinenstift");
        break;
    }
    case 4220:
    {
        returnValue = F("Albertinenweg");
        break;
    }
    case 4221:
    {
        returnValue = F("Albertinestr.");
        break;
    }
    case 4222:
    {
        returnValue = F("Alberting");
        break;
    }
    case 4223:
    {
        returnValue = F("Albertinumweg");
        break;
    }
    case 4224:
    {
        returnValue = F("Albertistr.");
        break;
    }
    case 4225:
    {
        returnValue = F("Albertitz");
        break;
    }
    case 4226:
    {
        returnValue = F("Albertpark");
        break;
    }
    case 4227:
    {
        returnValue = F("Albertplatz");
        break;
    }
    case 4228:
    {
        returnValue = F("Albertsberg");
        break;
    }
    case 4229:
    {
        returnValue = F("Albertsberger Str.");
        break;
    }
    case 4230:
    {
        returnValue = F("Albertsbrunnenweg");
        break;
    }
    case 4231:
    {
        returnValue = F("Albertschacht");
        break;
    }
    case 4232:
    {
        returnValue = F("Albertschachtstr.");
        break;
    }
    case 4233:
    {
        returnValue = F("Albertsdorf");
        break;
    }
    case 4234:
    {
        returnValue = F("Albertsdorfer Str.");
        break;
    }
    case 4235:
    {
        returnValue = F("Albertsdorfer Weg");
        break;
    }
    case 4236:
    {
        returnValue = F("Albertsgasse");
        break;
    }
    case 4237:
    {
        returnValue = F("Albertsgraben");
        break;
    }
    case 4238:
    {
        returnValue = F("Albertshausener Str.");
        break;
    }
    case 4239:
    {
        returnValue = F("Albertshauser Str.");
        break;
    }
    case 4240:
    {
        returnValue = F("Albertshof");
        break;
    }
    case 4241:
    {
        returnValue = F("Albertshofen");
        break;
    }
    case 4242:
    {
        returnValue = F("Albertshofener Str.");
        break;
    }
    case 4243:
    {
        returnValue = F("Albertshäuser Str.");
        break;
    }
    case 4244:
    {
        returnValue = F("Albertshöfer Str.");
        break;
    }
    case 4245:
    {
        returnValue = F("Albertskamp");
        break;
    }
    case 4246:
    {
        returnValue = F("Albertsleitenweg");
        break;
    }
    case 4247:
    {
        returnValue = F("Albertslunder Ring");
        break;
    }
    case 4248:
    {
        returnValue = F("Albertslundstr.");
        break;
    }
    case 4249:
    {
        returnValue = F("Albertsmeierhof");
        break;
    }
    case 4250:
    {
        returnValue = F("Albertsplatz");
        break;
    }
    case 4251:
    {
        returnValue = F("Albertsried");
        break;
    }
    case 4252:
    {
        returnValue = F("Albertsthal");
        break;
    }
    case 4253:
    {
        returnValue = F("Albertsthaler Str.");
        break;
    }
    case 4254:
    {
        returnValue = F("Albertstr.");
        break;
    }
    case 4255:
    {
        returnValue = F("Albertsweg");
        break;
    }
    case 4256:
    {
        returnValue = F("Albertus-Magnus-Str.");
        break;
    }
    case 4257:
    {
        returnValue = F("Albertus-Magnus-Weg");
        break;
    }
    case 4258:
    {
        returnValue = F("Albertus-Seba-Str.");
        break;
    }
    case 4259:
    {
        returnValue = F("Albertus-Stephani-Str.");
        break;
    }
    case 4260:
    {
        returnValue = F("Albertusstr.");
        break;
    }
    case 4261:
    {
        returnValue = F("Albertusweg");
        break;
    }
    case 4262:
    {
        returnValue = F("Albertviller Str.");
        break;
    }
    case 4263:
    {
        returnValue = F("Albertweg");
        break;
    }
    case 4264:
    {
        returnValue = F("Albertwerkesiedlung");
        break;
    }
    case 4265:
    {
        returnValue = F("Alberusstr.");
        break;
    }
    case 4266:
    {
        returnValue = F("Alberweg");
        break;
    }
    case 4267:
    {
        returnValue = F("Alberweiler");
        break;
    }
    case 4268:
    {
        returnValue = F("Alberweiler Str.");
        break;
    }
    case 4269:
    {
        returnValue = F("Alberzeller Str.");
        break;
    }
    case 4270:
    {
        returnValue = F("Albes Mühle");
        break;
    }
    case 4271:
    {
        returnValue = F("Albesgasse");
        break;
    }
    case 4272:
    {
        returnValue = F("Albesser Str.");
        break;
    }
    case 4273:
    {
        returnValue = F("Albführen");
        break;
    }
    case 4274:
    {
        returnValue = F("Albführer Str.");
        break;
    }
    case 4275:
    {
        returnValue = F("Albgaustr.");
        break;
    }
    case 4276:
    {
        returnValue = F("Albgut Platz");
        break;
    }
    case 4277:
    {
        returnValue = F("Albhalden Weg");
        break;
    }
    case 4278:
    {
        returnValue = F("Albhaldenweg");
        break;
    }
    case 4279:
    {
        returnValue = F("Albichweg");
        break;
    }
    case 4280:
    {
        returnValue = F("Albigenserweg");
        break;
    }
    case 4281:
    {
        returnValue = F("Albiger Str.");
        break;
    }
    case 4282:
    {
        returnValue = F("Albignystr.");
        break;
    }
    case 4283:
    {
        returnValue = F("Albigstr.");
        break;
    }
    case 4284:
    {
        returnValue = F("Albin Langer-Weg");
        break;
    }
    case 4285:
    {
        returnValue = F("Albin-Brandes-Str.");
        break;
    }
    case 4286:
    {
        returnValue = F("Albin-Edelmann-Str.");
        break;
    }
    case 4287:
    {
        returnValue = F("Albin-Enders-Str.");
        break;
    }
    case 4288:
    {
        returnValue = F("Albin-Hunger-Str.");
        break;
    }
    case 4289:
    {
        returnValue = F("Albin-Jahn-Gasse");
        break;
    }
    case 4290:
    {
        returnValue = F("Albin-Jörg-Str.");
        break;
    }
    case 4291:
    {
        returnValue = F("Albin-Kaiser-Str.");
        break;
    }
    case 4292:
    {
        returnValue = F("Albin-Klöber-Str.");
        break;
    }
    case 4293:
    {
        returnValue = F("Albin-Köbis-Ring");
        break;
    }
    case 4294:
    {
        returnValue = F("Albin-Köbis-Siedlung");
        break;
    }
    case 4295:
    {
        returnValue = F("Albin-Köbis-Str.");
        break;
    }
    case 4296:
    {
        returnValue = F("Albin-Köbis-Weg");
        break;
    }
    case 4297:
    {
        returnValue = F("Albin-König-Str.");
        break;
    }
    case 4298:
    {
        returnValue = F("Albin-Lang-Stadtpark Landshut");
        break;
    }
    case 4299:
    {
        returnValue = F("Albin-May-Str.");
        break;
    }
    case 4300:
    {
        returnValue = F("Albin-Müller-Str.");
        break;
    }
    case 4301:
    {
        returnValue = F("Albin-Niklaus-Str.");
        break;
    }
    case 4302:
    {
        returnValue = F("Albin-Ritzmann-Str.");
        break;
    }
    case 4303:
    {
        returnValue = F("Albin-Schaub-Str.");
        break;
    }
    case 4304:
    {
        returnValue = F("Albin-Schlehahn-Str.");
        break;
    }
    case 4305:
    {
        returnValue = F("Albin-Schwaiger-Weg");
        break;
    }
    case 4306:
    {
        returnValue = F("Albin-Schäfer-Str.");
        break;
    }
    case 4307:
    {
        returnValue = F("Albin-Schöne-Str.");
        break;
    }
    case 4308:
    {
        returnValue = F("Albin-Schönfeld-Str.");
        break;
    }
    case 4309:
    {
        returnValue = F("Albin-Trommler-Str.");
        break;
    }
    case 4310:
    {
        returnValue = F("Albin-Vogler-Str.");
        break;
    }
    case 4311:
    {
        returnValue = F("Albin-Vogt-Str.");
        break;
    }
    case 4312:
    {
        returnValue = F("Albinastr.");
        break;
    }
    case 4313:
    {
        returnValue = F("Albine-Nagel-Str.");
        break;
    }
    case 4314:
    {
        returnValue = F("Albing");
        break;
    }
    case 4315:
    {
        returnValue = F("Albinger Weg");
        break;
    }
    case 4316:
    {
        returnValue = F("Albingerstr.");
        break;
    }
    case 4317:
    {
        returnValue = F("Albingshäuser Dorfstr.");
        break;
    }
    case 4318:
    {
        returnValue = F("Albinistr.");
        break;
    }
    case 4319:
    {
        returnValue = F("Albinmüllerweg");
        break;
    }
    case 4320:
    {
        returnValue = F("Albinshof");
        break;
    }
    case 4321:
    {
        returnValue = F("Albinstr.");
        break;
    }
    case 4322:
    {
        returnValue = F("Albinusstr.");
        break;
    }
    case 4323:
    {
        returnValue = F("Albinusweg");
        break;
    }
    case 4324:
    {
        returnValue = F("Albisheimer Str.");
        break;
    }
    case 4325:
    {
        returnValue = F("Albisheimstr.");
        break;
    }
    case 4326:
    {
        returnValue = F("Albishofener Str.");
        break;
    }
    case 4327:
    {
        returnValue = F("Albisried");
        break;
    }
    case 4328:
    {
        returnValue = F("Albkaserne");
        break;
    }
    case 4329:
    {
        returnValue = F("Alboinstr.");
        break;
    }
    case 4330:
    {
        returnValue = F("Albrandsweg");
        break;
    }
    case 4331:
    {
        returnValue = F("Albrandweg");
        break;
    }
    case 4332:
    {
        returnValue = F("Albrecht Dürer Str.");
        break;
    }
    case 4333:
    {
        returnValue = F("Albrecht-Achilles-Str.");
        break;
    }
    case 4334:
    {
        returnValue = F("Albrecht-Achilles-Weg");
        break;
    }
    case 4335:
    {
        returnValue = F("Albrecht-Alt-Str.");
        break;
    }
    case 4336:
    {
        returnValue = F("Albrecht-Altdorfer-Ring");
        break;
    }
    case 4337:
    {
        returnValue = F("Albrecht-Altdorfer-Str.");
        break;
    }
    case 4338:
    {
        returnValue = F("Albrecht-Altdorfer-Weg");
        break;
    }
    case 4339:
    {
        returnValue = F("Albrecht-Bengel-Str.");
        break;
    }
    case 4340:
    {
        returnValue = F("Albrecht-Berblinger-Str.");
        break;
    }
    case 4341:
    {
        returnValue = F("Albrecht-Berblinger-Weg");
        break;
    }
    case 4342:
    {
        returnValue = F("Albrecht-Bicker-Str.");
        break;
    }
    case 4343:
    {
        returnValue = F("Albrecht-Bühring-Str.");
        break;
    }
    case 4344:
    {
        returnValue = F("Albrecht-Daniel-Thaer-Str.");
        break;
    }
    case 4345:
    {
        returnValue = F("Albrecht-Daniel-Thaer-Weg");
        break;
    }
    case 4346:
    {
        returnValue = F("Albrecht-Delius-Weg");
        break;
    }
    case 4347:
    {
        returnValue = F("Albrecht-Duerer-Str.");
        break;
    }
    case 4348:
    {
        returnValue = F("Albrecht-Dürer-Allee");
        break;
    }
    case 4349:
    {
        returnValue = F("Albrecht-Dürer-Anlagen");
        break;
    }
    case 4350:
    {
        returnValue = F("Albrecht-Dürer-Platz");
        break;
    }
    case 4351:
    {
        returnValue = F("Albrecht-Dürer-Ring");
        break;
    }
    case 4352:
    {
        returnValue = F("Albrecht-Dürer-Str.");
        break;
    }
    case 4353:
    {
        returnValue = F("Albrecht-Dürer-Weg");
        break;
    }
    case 4354:
    {
        returnValue = F("Albrecht-Erhardt-Str.");
        break;
    }
    case 4355:
    {
        returnValue = F("Albrecht-Goes-Platz");
        break;
    }
    case 4356:
    {
        returnValue = F("Albrecht-Goes-Str.");
        break;
    }
    case 4357:
    {
        returnValue = F("Albrecht-Goes-Weg");
        break;
    }
    case 4358:
    {
        returnValue = F("Albrecht-Graefe-Weg");
        break;
    }
    case 4359:
    {
        returnValue = F("Albrecht-Haushofer-Str.");
        break;
    }
    case 4360:
    {
        returnValue = F("Albrecht-Haut-Gasse");
        break;
    }
    case 4361:
    {
        returnValue = F("Albrecht-Hofmann-Allee");
        break;
    }
    case 4362:
    {
        returnValue = F("Albrecht-Janssen-Str.");
        break;
    }
    case 4363:
    {
        returnValue = F("Albrecht-Johannsen-Str.");
        break;
    }
    case 4364:
    {
        returnValue = F("Albrecht-Kossel-Platz");
        break;
    }
    case 4365:
    {
        returnValue = F("Albrecht-Leo-Merz-Weg");
        break;
    }
    case 4366:
    {
        returnValue = F("Albrecht-Lodemann-Weg");
        break;
    }
    case 4367:
    {
        returnValue = F("Albrecht-Merck-Str.");
        break;
    }
    case 4368:
    {
        returnValue = F("Albrecht-Nützel-Weg");
        break;
    }
    case 4369:
    {
        returnValue = F("Albrecht-Ober-Platz");
        break;
    }
    case 4370:
    {
        returnValue = F("Albrecht-Ritz-Str.");
        break;
    }
    case 4371:
    {
        returnValue = F("Albrecht-Rudolf-Str.");
        break;
    }
    case 4372:
    {
        returnValue = F("Albrecht-Schaeffer-Weg");
        break;
    }
    case 4373:
    {
        returnValue = F("Albrecht-Schmidt-Weg");
        break;
    }
    case 4374:
    {
        returnValue = F("Albrecht-Schneider-Str.");
        break;
    }
    case 4375:
    {
        returnValue = F("Albrecht-Stalmann-Weg");
        break;
    }
    case 4376:
    {
        returnValue = F("Albrecht-Stieber-Str.");
        break;
    }
    case 4377:
    {
        returnValue = F("Albrecht-Thaer-Ring");
        break;
    }
    case 4378:
    {
        returnValue = F("Albrecht-Thaer-Str.");
        break;
    }
    case 4379:
    {
        returnValue = F("Albrecht-Thaer-Weg");
        break;
    }
    case 4380:
    {
        returnValue = F("Albrecht-Thoma-Str.");
        break;
    }
    case 4381:
    {
        returnValue = F("Albrecht-Tischbein-Str.");
        break;
    }
    case 4382:
    {
        returnValue = F("Albrecht-Velte-Str.");
        break;
    }
    case 4383:
    {
        returnValue = F("Albrecht-Villinger-Str.");
        break;
    }
    case 4384:
    {
        returnValue = F("Albrecht-Wirt-Str.");
        break;
    }
    case 4385:
    {
        returnValue = F("Albrecht-von-Aiglspeck-Str.");
        break;
    }
    case 4386:
    {
        returnValue = F("Albrecht-von-Bernegger-Str.");
        break;
    }
    case 4387:
    {
        returnValue = F("Albrecht-von-Eyb-Leite");
        break;
    }
    case 4388:
    {
        returnValue = F("Albrecht-von-Hagen-Platz");
        break;
    }
    case 4389:
    {
        returnValue = F("Albrecht-von-Haller-Str.");
        break;
    }
    case 4390:
    {
        returnValue = F("Albrechtdamm");
        break;
    }
    case 4391:
    {
        returnValue = F("Albrechtgasse");
        break;
    }
    case 4392:
    {
        returnValue = F("Albrechtplatz");
        break;
    }
    case 4393:
    {
        returnValue = F("Albrechtring");
        break;
    }
    case 4394:
    {
        returnValue = F("Albrechts Bleiche");
        break;
    }
    case 4395:
    {
        returnValue = F("Albrechts Gang");
        break;
    }
    case 4396:
    {
        returnValue = F("Albrechtsburg");
        break;
    }
    case 4397:
    {
        returnValue = F("Albrechtsdorfer Str.");
        break;
    }
    case 4398:
    {
        returnValue = F("Albrechtser Berg");
        break;
    }
    case 4399:
    {
        returnValue = F("Albrechtser Ring");
        break;
    }
    case 4400:
    {
        returnValue = F("Albrechtser Str.");
        break;
    }
    case 4401:
    {
        returnValue = F("Albrechtser Weg");
        break;
    }
    case 4402:
    {
        returnValue = F("Albrechtsgasse");
        break;
    }
    case 4403:
    {
        returnValue = F("Albrechtsgelände");
        break;
    }
    case 4404:
    {
        returnValue = F("Albrechtshainer See Weg");
        break;
    }
    case 4405:
    {
        returnValue = F("Albrechtshainer Str.");
        break;
    }
    case 4406:
    {
        returnValue = F("Albrechtshainer Weg");
        break;
    }
    case 4407:
    {
        returnValue = F("Albrechtshausen");
        break;
    }
    case 4408:
    {
        returnValue = F("Albrechtshof");
        break;
    }
    case 4409:
    {
        returnValue = F("Albrechtshöhe");
        break;
    }
    case 4410:
    {
        returnValue = F("Albrechtskoppel");
        break;
    }
    case 4411:
    {
        returnValue = F("Albrechtsplatz");
        break;
    }
    case 4412:
    {
        returnValue = F("Albrechtsthal");
        break;
    }
    case 4413:
    {
        returnValue = F("Albrechtstr.");
        break;
    }
    case 4414:
    {
        returnValue = F("Albrechtsweg");
        break;
    }
    case 4415:
    {
        returnValue = F("Albrechtweg");
        break;
    }
    case 4416:
    {
        returnValue = F("Albring");
        break;
    }
    case 4417:
    {
        returnValue = F("Albringen");
        break;
    }
    case 4418:
    {
        returnValue = F("Albringhausen");
        break;
    }
    case 4419:
    {
        returnValue = F("Albringhauser Str.");
        break;
    }
    case 4420:
    {
        returnValue = F("Albringhäuser Weg");
        break;
    }
    case 4421:
    {
        returnValue = F("Albringwehrster Weg");
        break;
    }
    case 4422:
    {
        returnValue = F("Albringwehrster Zwinger");
        break;
    }
    case 4423:
    {
        returnValue = F("Albringwerde");
        break;
    }
    case 4424:
    {
        returnValue = F("Albris");
        break;
    }
    case 4425:
    {
        returnValue = F("Albriser Str.");
        break;
    }
    case 4426:
    {
        returnValue = F("Albrismühle");
        break;
    }
    case 4427:
    {
        returnValue = F("Albroweg");
        break;
    }
    case 4428:
    {
        returnValue = F("Albsfelder Weg");
        break;
    }
    case 4429:
    {
        returnValue = F("Albsheimer Hauptstr.");
        break;
    }
    case 4430:
    {
        returnValue = F("Albsheimer Weg");
        break;
    }
    case 4431:
    {
        returnValue = F("Albshäuser Str.");
        break;
    }
    case 4432:
    {
        returnValue = F("Albshäusertorstr.");
        break;
    }
    case 4433:
    {
        returnValue = F("Albstadter Weg");
        break;
    }
    case 4434:
    {
        returnValue = F("Albstadtweg");
        break;
    }
    case 4435:
    {
        returnValue = F("Albstatter Str.");
        break;
    }
    case 4436:
    {
        returnValue = F("Albstedter Str.");
        break;
    }
    case 4437:
    {
        returnValue = F("Albsteg");
        break;
    }
    case 4438:
    {
        returnValue = F("Albsteige");
        break;
    }
    case 4439:
    {
        returnValue = F("Albstr.");
        break;
    }
    case 4440:
    {
        returnValue = F("Albstädter Str.");
        break;
    }
    case 4441:
    {
        returnValue = F("Albsägmühlschleifweg");
        break;
    }
    case 4442:
    {
        returnValue = F("Albtalstr.");
        break;
    }
    case 4443:
    {
        returnValue = F("Albtalweg");
        break;
    }
    case 4444:
    {
        returnValue = F("Albtorplatz");
        break;
    }
    case 4445:
    {
        returnValue = F("Albuchstr.");
        break;
    }
    case 4446:
    {
        returnValue = F("Albuchsträßchen");
        break;
    }
    case 4447:
    {
        returnValue = F("Albuchweg");
        break;
    }
    case 4448:
    {
        returnValue = F("Albuferstr.");
        break;
    }
    case 4449:
    {
        returnValue = F("Albunger Str.");
        break;
    }
    case 4450:
    {
        returnValue = F("Alburger Hauptstr.");
        break;
    }
    case 4451:
    {
        returnValue = F("Alburger Hochweg");
        break;
    }
    case 4452:
    {
        returnValue = F("Alburger Rennweg");
        break;
    }
    case 4453:
    {
        returnValue = F("Alburger Weg");
        break;
    }
    case 4454:
    {
        returnValue = F("Albus");
        break;
    }
    case 4455:
    {
        returnValue = F("Albusstr.");
        break;
    }
    case 4456:
    {
        returnValue = F("Albvereinsweg");
        break;
    }
    case 4457:
    {
        returnValue = F("Albweg");
        break;
    }
    case 4458:
    {
        returnValue = F("Albwerkstr.");
        break;
    }
    case 4459:
    {
        returnValue = F("Alcatraz");
        break;
    }
    case 4460:
    {
        returnValue = F("Alchenschneise");
        break;
    }
    case 4461:
    {
        returnValue = F("Alcher Str.");
        break;
    }
    case 4462:
    {
        returnValue = F("Alcide-de-Gasperi-Str.");
        break;
    }
    case 4463:
    {
        returnValue = F("Alcmona");
        break;
    }
    case 4464:
    {
        returnValue = F("Aldagessemring");
        break;
    }
    case 4465:
    {
        returnValue = F("Alde Stadtbleik");
        break;
    }
    case 4466:
    {
        returnValue = F("Aldebaranstr.");
        break;
    }
    case 4467:
    {
        returnValue = F("Aldegrever Siedlung");
        break;
    }
    case 4468:
    {
        returnValue = F("Aldegreveranger");
        break;
    }
    case 4469:
    {
        returnValue = F("Aldegreverstr.");
        break;
    }
    case 4470:
    {
        returnValue = F("Aldegreverwall");
        break;
    }
    case 4471:
    {
        returnValue = F("Aldegreverweg");
        break;
    }
    case 4472:
    {
        returnValue = F("Aldegundiskirchplatz");
        break;
    }
    case 4473:
    {
        returnValue = F("Aldegundisstr.");
        break;
    }
    case 4474:
    {
        returnValue = F("Aldehoffstr.");
        break;
    }
    case 4475:
    {
        returnValue = F("Aldehold");
        break;
    }
    case 4476:
    {
        returnValue = F("Aldehusweg");
        break;
    }
    case 4477:
    {
        returnValue = F("Aldeiner Str.");
        break;
    }
    case 4478:
    {
        returnValue = F("Aldekamp");
        break;
    }
    case 4479:
    {
        returnValue = F("Aldekerk Park");
        break;
    }
    case 4480:
    {
        returnValue = F("Aldekerker Landstr.");
        break;
    }
    case 4481:
    {
        returnValue = F("Aldekerker Str.");
        break;
    }
    case 4482:
    {
        returnValue = F("Aldekerkstr.");
        break;
    }
    case 4483:
    {
        returnValue = F("Aldenburger Str.");
        break;
    }
    case 4484:
    {
        returnValue = F("Aldenhofstr.");
        break;
    }
    case 4485:
    {
        returnValue = F("Aldenhovener Str.");
        break;
    }
    case 4486:
    {
        returnValue = F("Aldenhovenstr.");
        break;
    }
    case 4487:
    {
        returnValue = F("Aldenrader Str.");
        break;
    }
    case 4488:
    {
        returnValue = F("Aldenrather Str.");
        break;
    }
    case 4489:
    {
        returnValue = F("Alderichstr.");
        break;
    }
    case 4490:
    {
        returnValue = F("Alderikusstr.");
        break;
    }
    case 4491:
    {
        returnValue = F("Aldersbacher Str.");
        break;
    }
    case 4492:
    {
        returnValue = F("Alderstr.");
        break;
    }
    case 4493:
    {
        returnValue = F("Aldessener Str.");
        break;
    }
    case 4494:
    {
        returnValue = F("Aldi Passage");
        break;
    }
    case 4495:
    {
        returnValue = F("Aldiekstr.");
        break;
    }
    case 4496:
    {
        returnValue = F("Aldinger Str.");
        break;
    }
    case 4497:
    {
        returnValue = F("Aldinger Sträßle");
        break;
    }
    case 4498:
    {
        returnValue = F("Aldinghofer Str.");
        break;
    }
    case 4499:
    {
        returnValue = F("Aldorf");
        break;
    }
    case 4500:
    {
        returnValue = F("Aldorfer Str.");
        break;
    }
    case 4501:
    {
        returnValue = F("Aldrianweg");
        break;
    }
    case 4502:
    {
        returnValue = F("Aldringenstr.");
        break;
    }
    case 4503:
    {
        returnValue = F("Aldringerstr.");
        break;
    }
    case 4504:
    {
        returnValue = F("Aldringerweg");
        break;
    }
    case 4505:
    {
        returnValue = F("Aldruper Brink");
        break;
    }
    case 4506:
    {
        returnValue = F("Aldruper Damm");
        break;
    }
    case 4507:
    {
        returnValue = F("Aldruper Str.");
        break;
    }
    case 4508:
    {
        returnValue = F("Aldruper Weg");
        break;
    }
    case 4509:
    {
        returnValue = F("Aleberg");
        break;
    }
    case 4510:
    {
        returnValue = F("Alec-Moore-Str.");
        break;
    }
    case 4511:
    {
        returnValue = F("Alefeld");
        break;
    }
    case 4512:
    {
        returnValue = F("Alefeldstr.");
        break;
    }
    case 4513:
    {
        returnValue = F("Alefstr.");
        break;
    }
    case 4514:
    {
        returnValue = F("Alekestr.");
        break;
    }
    case 4515:
    {
        returnValue = F("Aleksis-Kivi-Str.");
        break;
    }
    case 4516:
    {
        returnValue = F("Alemanenstr.");
        break;
    }
    case 4517:
    {
        returnValue = F("Alemaniastr.");
        break;
    }
    case 4518:
    {
        returnValue = F("Alemannen Weg");
        break;
    }
    case 4519:
    {
        returnValue = F("Alemannenallee");
        break;
    }
    case 4520:
    {
        returnValue = F("Alemannenfeld");
        break;
    }
    case 4521:
    {
        returnValue = F("Alemannenhofweg");
        break;
    }
    case 4522:
    {
        returnValue = F("Alemannenring");
        break;
    }
    case 4523:
    {
        returnValue = F("Alemannensteige");
        break;
    }
    case 4524:
    {
        returnValue = F("Alemannenstr.");
        break;
    }
    case 4525:
    {
        returnValue = F("Alemannenstrße");
        break;
    }
    case 4526:
    {
        returnValue = F("Alemannenweg");
        break;
    }
    case 4527:
    {
        returnValue = F("Alemanniaweg");
        break;
    }
    case 4528:
    {
        returnValue = F("Alemannstr.");
        break;
    }
    case 4529:
    {
        returnValue = F("Alenberg");
        break;
    }
    case 4530:
    {
        returnValue = F("Alenbergstr.");
        break;
    }
    case 4531:
    {
        returnValue = F("Alenbergweg");
        break;
    }
    case 4532:
    {
        returnValue = F("Alenconer Str.");
        break;
    }
    case 4533:
    {
        returnValue = F("Alendorfstr.");
        break;
    }
    case 4534:
    {
        returnValue = F("Alenweg");
        break;
    }
    case 4535:
    {
        returnValue = F("Aler Neuer Weg");
        break;
    }
    case 4536:
    {
        returnValue = F("Alerdingweg");
        break;
    }
    case 4537:
    {
        returnValue = F("Alerdsweg");
        break;
    }
    case 4538:
    {
        returnValue = F("Alerhop");
        break;
    }
    case 4539:
    {
        returnValue = F("Alersbergstr.");
        break;
    }
    case 4540:
    {
        returnValue = F("Alersfelde");
        break;
    }
    case 4541:
    {
        returnValue = F("Alersstr.");
        break;
    }
    case 4542:
    {
        returnValue = F("Alesheimer Str.");
        break;
    }
    case 4543:
    {
        returnValue = F("Alessandro-Volta-Platz");
        break;
    }
    case 4544:
    {
        returnValue = F("Alessandro-Volta-Str.");
        break;
    }
    case 4545:
    {
        returnValue = F("Alet-Brücke");
        break;
    }
    case 4546:
    {
        returnValue = F("Aletsberg");
        break;
    }
    case 4547:
    {
        returnValue = F("Aletsberger Str.");
        break;
    }
    case 4548:
    {
        returnValue = F("Aletshauser Str.");
        break;
    }
    case 4549:
    {
        returnValue = F("Aletweg");
        break;
    }
    case 4550:
    {
        returnValue = F("Aleuthen");
        break;
    }
    case 4551:
    {
        returnValue = F("Alewinstr.");
        break;
    }
    case 4552:
    {
        returnValue = F("Alex-Devries-Str.");
        break;
    }
    case 4553:
    {
        returnValue = F("Alex-Eckener-Weg");
        break;
    }
    case 4554:
    {
        returnValue = F("Alex-Gugler-Str.");
        break;
    }
    case 4555:
    {
        returnValue = F("Alex-Haffner-Weg");
        break;
    }
    case 4556:
    {
        returnValue = F("Alex-Horstmann-Str.");
        break;
    }
    case 4557:
    {
        returnValue = F("Alex-Hösl-Str.");
        break;
    }
    case 4558:
    {
        returnValue = F("Alex-Kerkhof-Str.");
        break;
    }
    case 4559:
    {
        returnValue = F("Alex-Kirchhof-Weg");
        break;
    }
    case 4560:
    {
        returnValue = F("Alex-Maier-Str.");
        break;
    }
    case 4561:
    {
        returnValue = F("Alex-Möller-Str.");
        break;
    }
    case 4562:
    {
        returnValue = F("Alex-Müller-Str.");
        break;
    }
    case 4563:
    {
        returnValue = F("Alex-Nöthen-Weg");
        break;
    }
    case 4564:
    {
        returnValue = F("Alex-Pinger-Str.");
        break;
    }
    case 4565:
    {
        returnValue = F("Alex-Reyels-Str.");
        break;
    }
    case 4566:
    {
        returnValue = F("Alex-Sailer-Str.");
        break;
    }
    case 4567:
    {
        returnValue = F("Alex-Schmorell-Str.");
        break;
    }
    case 4568:
    {
        returnValue = F("Alex-Stephan-Passage");
        break;
    }
    case 4569:
    {
        returnValue = F("Alex-Zink-Str.");
        break;
    }
    case 4570:
    {
        returnValue = F("Alexander-Alesius-Str.");
        break;
    }
    case 4571:
    {
        returnValue = F("Alexander-Aue-Weg");
        break;
    }
    case 4572:
    {
        returnValue = F("Alexander-Baumann-Str.");
        break;
    }
    case 4573:
    {
        returnValue = F("Alexander-Behm-Str.");
        break;
    }
    case 4574:
    {
        returnValue = F("Alexander-Bell-Str.");
        break;
    }
    case 4575:
    {
        returnValue = F("Alexander-Besser-Weg");
        break;
    }
    case 4576:
    {
        returnValue = F("Alexander-Bolze-Hof");
        break;
    }
    case 4577:
    {
        returnValue = F("Alexander-Bretz-Str.");
        break;
    }
    case 4578:
    {
        returnValue = F("Alexander-Böhm-Str.");
        break;
    }
    case 4579:
    {
        returnValue = F("Alexander-Colin-Str.");
        break;
    }
    case 4580:
    {
        returnValue = F("Alexander-Coppel-Str.");
        break;
    }
    case 4581:
    {
        returnValue = F("Alexander-Diehl-Str.");
        break;
    }
    case 4582:
    {
        returnValue = F("Alexander-Dill-Weg");
        break;
    }
    case 4583:
    {
        returnValue = F("Alexander-Fahrenheim-Weg");
        break;
    }
    case 4584:
    {
        returnValue = F("Alexander-Ferdinand-Str.");
        break;
    }
    case 4585:
    {
        returnValue = F("Alexander-Fleming-Ring");
        break;
    }
    case 4586:
    {
        returnValue = F("Alexander-Fleming-Str.");
        break;
    }
    case 4587:
    {
        returnValue = F("Alexander-Fleming-Weg");
        break;
    }
    case 4588:
    {
        returnValue = F("Alexander-Ganß-Str.");
        break;
    }
    case 4589:
    {
        returnValue = F("Alexander-Geppert-Str.");
        break;
    }
    case 4590:
    {
        returnValue = F("Alexander-Gerbig-Str.");
        break;
    }
    case 4591:
    {
        returnValue = F("Alexander-Giertz-Str.");
        break;
    }
    case 4592:
    {
        returnValue = F("Alexander-Hegius-Str.");
        break;
    }
    case 4593:
    {
        returnValue = F("Alexander-Herzen-Str.");
        break;
    }
    case 4594:
    {
        returnValue = F("Alexander-Klein-Str.");
        break;
    }
    case 4595:
    {
        returnValue = F("Alexander-Koenig-Str.");
        break;
    }
    case 4596:
    {
        returnValue = F("Alexander-Koester-Weg");
        break;
    }
    case 4597:
    {
        returnValue = F("Alexander-Lincke-Str.");
        break;
    }
    case 4598:
    {
        returnValue = F("Alexander-Lippisch-Str.");
        break;
    }
    case 4599:
    {
        returnValue = F("Alexander-Loewenthal-Str.");
        break;
    }
    case 4600:
    {
        returnValue = F("Alexander-Mack-Str.");
        break;
    }
    case 4601:
    {
        returnValue = F("Alexander-Mitscherlich-Platz");
        break;
    }
    case 4602:
    {
        returnValue = F("Alexander-Moksel-Str.");
        break;
    }
    case 4603:
    {
        returnValue = F("Alexander-Monski-Str.");
        break;
    }
    case 4604:
    {
        returnValue = F("Alexander-Olbricht-Str.");
        break;
    }
    case 4605:
    {
        returnValue = F("Alexander-Pachmann-Str.");
        break;
    }
    case 4606:
    {
        returnValue = F("Alexander-Pfohl-Str.");
        break;
    }
    case 4607:
    {
        returnValue = F("Alexander-Popow-Str.");
        break;
    }
    case 4608:
    {
        returnValue = F("Alexander-Puschkin-Platz");
        break;
    }
    case 4609:
    {
        returnValue = F("Alexander-Puschkin-Promenade");
        break;
    }
    case 4610:
    {
        returnValue = F("Alexander-Puschkin-Str.");
        break;
    }
    case 4611:
    {
        returnValue = F("Alexander-Puschkin-Weg");
        break;
    }
    case 4612:
    {
        returnValue = F("Alexander-Reimann-Str.");
        break;
    }
    case 4613:
    {
        returnValue = F("Alexander-Rolinck-Str.");
        break;
    }
    case 4614:
    {
        returnValue = F("Alexander-Sanders-Str.");
        break;
    }
    case 4615:
    {
        returnValue = F("Alexander-Scharff-Str.");
        break;
    }
    case 4616:
    {
        returnValue = F("Alexander-Schem-Str.");
        break;
    }
    case 4617:
    {
        returnValue = F("Alexander-Schleicher-Str.");
        break;
    }
    case 4618:
    {
        returnValue = F("Alexander-Schmorell-Str.");
        break;
    }
    case 4619:
    {
        returnValue = F("Alexander-Schmorell-Weg");
        break;
    }
    case 4620:
    {
        returnValue = F("Alexander-Sigismund-Weg");
        break;
    }
    case 4621:
    {
        returnValue = F("Alexander-Stöpler-Str.");
        break;
    }
    case 4622:
    {
        returnValue = F("Alexander-Suworow-Weg");
        break;
    }
    case 4623:
    {
        returnValue = F("Alexander-Tenhaeff-Str.");
        break;
    }
    case 4624:
    {
        returnValue = F("Alexander-Thalhuber-Str.");
        break;
    }
    case 4625:
    {
        returnValue = F("Alexander-Vollmer-Str.");
        break;
    }
    case 4626:
    {
        returnValue = F("Alexander-Von-Humboldt Str.");
        break;
    }
    case 4627:
    {
        returnValue = F("Alexander-Von-Rotenhan-Str.");
        break;
    }
    case 4628:
    {
        returnValue = F("Alexander-Wacker-Str.");
        break;
    }
    case 4629:
    {
        returnValue = F("Alexander-Weitzel-Str.");
        break;
    }
    case 4630:
    {
        returnValue = F("Alexander-Wellendorff-Str.");
        break;
    }
    case 4631:
    {
        returnValue = F("Alexander-Wiedenhoff-Str.");
        break;
    }
    case 4632:
    {
        returnValue = F("Alexander-Wiegand-Str.");
        break;
    }
    case 4633:
    {
        returnValue = F("Alexander-Winckler-Str.");
        break;
    }
    case 4634:
    {
        returnValue = F("Alexander-Wolff-Str.");
        break;
    }
    case 4635:
    {
        returnValue = F("Alexander-Wolfgang-Str.");
        break;
    }
    case 4636:
    {
        returnValue = F("Alexander-von-Bernus-Str.");
        break;
    }
    case 4637:
    {
        returnValue = F("Alexander-von-Engelberg-Str.");
        break;
    }
    case 4638:
    {
        returnValue = F("Alexander-von-Humboldt-Str.");
        break;
    }
    case 4639:
    {
        returnValue = F("Alexander-von-Humboldt-Weg");
        break;
    }
    case 4640:
    {
        returnValue = F("Alexander-von-Müller-Str.");
        break;
    }
    case 4641:
    {
        returnValue = F("Alexander-von-Szpinger-Str.");
        break;
    }
    case 4642:
    {
        returnValue = F("Alexanderberg");
        break;
    }
    case 4643:
    {
        returnValue = F("Alexanderbusch");
        break;
    }
    case 4644:
    {
        returnValue = F("Alexanderdorfer Weg");
        break;
    }
    case 4645:
    {
        returnValue = F("Alexandergasse");
        break;
    }
    case 4646:
    {
        returnValue = F("Alexanderhof");
        break;
    }
    case 4647:
    {
        returnValue = F("Alexanderhöhe");
        break;
    }
    case 4648:
    {
        returnValue = F("Alexanderpark");
        break;
    }
    case 4649:
    {
        returnValue = F("Alexanderpassage");
        break;
    }
    case 4650:
    {
        returnValue = F("Alexanderplatz");
        break;
    }
    case 4651:
    {
        returnValue = F("Alexanderring");
        break;
    }
    case 4652:
    {
        returnValue = F("Alexanderschanze");
        break;
    }
    case 4653:
    {
        returnValue = F("Alexandersfeld");
        break;
    }
    case 4654:
    {
        returnValue = F("Alexandersreuter Str.");
        break;
    }
    case 4655:
    {
        returnValue = F("Alexanderstieg");
        break;
    }
    case 4656:
    {
        returnValue = F("Alexanderstr.");
        break;
    }
    case 4657:
    {
        returnValue = F("Alexanderweg");
        break;
    }
    case 4658:
    {
        returnValue = F("Alexandra von Wrede Allee");
        break;
    }
    case 4659:
    {
        returnValue = F("Alexandra-Harder-Str.");
        break;
    }
    case 4660:
    {
        returnValue = F("Alexandraplatz");
        break;
    }
    case 4661:
    {
        returnValue = F("Alexandrastr.");
        break;
    }
    case 4662:
    {
        returnValue = F("Alexandraweg");
        break;
    }
    case 4663:
    {
        returnValue = F("Alexandriaweg");
        break;
    }
    case 4664:
    {
        returnValue = F("Alexandriblick");
        break;
    }
    case 4665:
    {
        returnValue = F("Alexandrinenplatz");
        break;
    }
    case 4666:
    {
        returnValue = F("Alexandrinenstr.");
        break;
    }
    case 4667:
    {
        returnValue = F("Alexandrinenweg");
        break;
    }
    case 4668:
    {
        returnValue = F("Alexej-Maltzew-Gäßchen");
        break;
    }
    case 4669:
    {
        returnValue = F("Alexej-Tolstoi-Weg");
        break;
    }
    case 4670:
    {
        returnValue = F("Alexianergraben");
        break;
    }
    case 4671:
    {
        returnValue = F("Alexianerpark");
        break;
    }
    case 4672:
    {
        returnValue = F("Alexianerplatz");
        break;
    }
    case 4673:
    {
        returnValue = F("Alexianerstr.");
        break;
    }
    case 4674:
    {
        returnValue = F("Alexisbader Str.");
        break;
    }
    case 4675:
    {
        returnValue = F("Alexisstr.");
        break;
    }
    case 4676:
    {
        returnValue = F("Alexiusstr.");
        break;
    }
    case 4677:
    {
        returnValue = F("Alexiusweg");
        break;
    }
    case 4678:
    {
        returnValue = F("Alexstr.");
        break;
    }
    case 4679:
    {
        returnValue = F("Aleydisweg");
        break;
    }
    case 4680:
    {
        returnValue = F("Alf-Depser-Str.");
        break;
    }
    case 4681:
    {
        returnValue = F("Alfalter");
        break;
    }
    case 4682:
    {
        returnValue = F("Alfalterbach-Waldweg");
        break;
    }
    case 4683:
    {
        returnValue = F("Alfbachstr.");
        break;
    }
    case 4684:
    {
        returnValue = F("Alfbachweg");
        break;
    }
    case 4685:
    {
        returnValue = F("Alfdagweg");
        break;
    }
    case 4686:
    {
        returnValue = F("Alfdorfer Str.");
        break;
    }
    case 4687:
    {
        returnValue = F("Alfdorfer Weg");
        break;
    }
    case 4688:
    {
        returnValue = F("Alfelder Str.");
        break;
    }
    case 4689:
    {
        returnValue = F("Alfelder Weg");
        break;
    }
    case 4690:
    {
        returnValue = F("Alfenbrunnweg");
        break;
    }
    case 4691:
    {
        returnValue = F("Alfener Kirchweg");
        break;
    }
    case 4692:
    {
        returnValue = F("Alfener Weg");
        break;
    }
    case 4693:
    {
        returnValue = F("Alfenhard");
        break;
    }
    case 4694:
    {
        returnValue = F("Alfenzingen");
        break;
    }
    case 4695:
    {
        returnValue = F("Alfer Weg");
        break;
    }
    case 4696:
    {
        returnValue = F("Alfermannweg");
        break;
    }
    case 4697:
    {
        returnValue = F("Alfersesch");
        break;
    }
    case 4698:
    {
        returnValue = F("Alfershausen");
        break;
    }
    case 4699:
    {
        returnValue = F("Alfersstr.");
        break;
    }
    case 4700:
    {
        returnValue = F("Alfert");
        break;
    }
    case 4701:
    {
        returnValue = F("Alferweg");
        break;
    }
    case 4702:
    {
        returnValue = F("Alferzhagener Str.");
        break;
    }
    case 4703:
    {
        returnValue = F("Alfhausener Str.");
        break;
    }
    case 4704:
    {
        returnValue = F("Alfing");
        break;
    }
    case 4705:
    {
        returnValue = F("Alfler Weg");
        break;
    }
    case 4706:
    {
        returnValue = F("Alfons Halbig Platz");
        break;
    }
    case 4707:
    {
        returnValue = F("Alfons Zobel Str.");
        break;
    }
    case 4708:
    {
        returnValue = F("Alfons-Arnold-Str.");
        break;
    }
    case 4709:
    {
        returnValue = F("Alfons-Auer-Str.");
        break;
    }
    case 4710:
    {
        returnValue = F("Alfons-Baumann-Str.");
        break;
    }
    case 4711:
    {
        returnValue = F("Alfons-Bayerer-Str.");
        break;
    }
    case 4712:
    {
        returnValue = F("Alfons-Beckenbauer-Weg");
        break;
    }
    case 4713:
    {
        returnValue = F("Alfons-Berngehrer-Str.");
        break;
    }
    case 4714:
    {
        returnValue = F("Alfons-Bitschnau-Weg");
        break;
    }
    case 4715:
    {
        returnValue = F("Alfons-Debler-Weg");
        break;
    }
    case 4716:
    {
        returnValue = F("Alfons-Deitermann-Str.");
        break;
    }
    case 4717:
    {
        returnValue = F("Alfons-Deißler-Str.");
        break;
    }
    case 4718:
    {
        returnValue = F("Alfons-Dischinger-Str.");
        break;
    }
    case 4719:
    {
        returnValue = F("Alfons-Duffner-Weg");
        break;
    }
    case 4720:
    {
        returnValue = F("Alfons-Duschl-Str.");
        break;
    }
    case 4721:
    {
        returnValue = F("Alfons-Eberl-Str.");
        break;
    }
    case 4722:
    {
        returnValue = F("Alfons-Feifel-Str.");
        break;
    }
    case 4723:
    {
        returnValue = F("Alfons-Fischer-Allee");
        break;
    }
    case 4724:
    {
        returnValue = F("Alfons-Fleischmann-Str.");
        break;
    }
    case 4725:
    {
        returnValue = F("Alfons-Frick-Weg");
        break;
    }
    case 4726:
    {
        returnValue = F("Alfons-Fügel-Str.");
        break;
    }
    case 4727:
    {
        returnValue = F("Alfons-Ganz-Weg");
        break;
    }
    case 4728:
    {
        returnValue = F("Alfons-Gerl-Str.");
        break;
    }
    case 4729:
    {
        returnValue = F("Alfons-Gerson-Str.");
        break;
    }
    case 4730:
    {
        returnValue = F("Alfons-Gerstl-Str.");
        break;
    }
    case 4731:
    {
        returnValue = F("Alfons-Goppel-Platz");
        break;
    }
    case 4732:
    {
        returnValue = F("Alfons-Goppel-Str.");
        break;
    }
    case 4733:
    {
        returnValue = F("Alfons-Hable-Str.");
        break;
    }
    case 4734:
    {
        returnValue = F("Alfons-Heilmann-Str.");
        break;
    }
    case 4735:
    {
        returnValue = F("Alfons-Hundsrucker-Str.");
        break;
    }
    case 4736:
    {
        returnValue = F("Alfons-Huysmans-Ring");
        break;
    }
    case 4737:
    {
        returnValue = F("Alfons-Jonas-Platz");
        break;
    }
    case 4738:
    {
        returnValue = F("Alfons-Keever-Str.");
        break;
    }
    case 4739:
    {
        returnValue = F("Alfons-Kern-Staffel");
        break;
    }
    case 4740:
    {
        returnValue = F("Alfons-Käfer-Str.");
        break;
    }
    case 4741:
    {
        returnValue = F("Alfons-Legner-Str.");
        break;
    }
    case 4742:
    {
        returnValue = F("Alfons-Leitl-Str.");
        break;
    }
    case 4743:
    {
        returnValue = F("Alfons-Listl-Str.");
        break;
    }
    case 4744:
    {
        returnValue = F("Alfons-M.-Daiminger-Str.");
        break;
    }
    case 4745:
    {
        returnValue = F("Alfons-M.-Mitnacht-Str.");
        break;
    }
    case 4746:
    {
        returnValue = F("Alfons-Maurer-Str.");
        break;
    }
    case 4747:
    {
        returnValue = F("Alfons-Mauser-Str.");
        break;
    }
    case 4748:
    {
        returnValue = F("Alfons-Müller-Weg");
        break;
    }
    case 4749:
    {
        returnValue = F("Alfons-Niedermayer-Weg");
        break;
    }
    case 4750:
    {
        returnValue = F("Alfons-Oswald-Str.");
        break;
    }
    case 4751:
    {
        returnValue = F("Alfons-Paquet-Str.");
        break;
    }
    case 4752:
    {
        returnValue = F("Alfons-Pech-Str.");
        break;
    }
    case 4753:
    {
        returnValue = F("Alfons-Peter-Str.");
        break;
    }
    case 4754:
    {
        returnValue = F("Alfons-Riehl-Str.");
        break;
    }
    case 4755:
    {
        returnValue = F("Alfons-Sahler-Str.");
        break;
    }
    case 4756:
    {
        returnValue = F("Alfons-Schneider-Str.");
        break;
    }
    case 4757:
    {
        returnValue = F("Alfons-Schulte-Str.");
        break;
    }
    case 4758:
    {
        returnValue = F("Alfons-Schulz-Str.");
        break;
    }
    case 4759:
    {
        returnValue = F("Alfons-Schwab-Str.");
        break;
    }
    case 4760:
    {
        returnValue = F("Alfons-Schäffer-Str.");
        break;
    }
    case 4761:
    {
        returnValue = F("Alfons-Schüle-Weg");
        break;
    }
    case 4762:
    {
        returnValue = F("Alfons-Simonius-Str.");
        break;
    }
    case 4763:
    {
        returnValue = F("Alfons-Spielhoff-Platz");
        break;
    }
    case 4764:
    {
        returnValue = F("Alfons-Stadler-Str.");
        break;
    }
    case 4765:
    {
        returnValue = F("Alfons-Stauder-Str.");
        break;
    }
    case 4766:
    {
        returnValue = F("Alfons-Steinhauser-Str.");
        break;
    }
    case 4767:
    {
        returnValue = F("Alfons-Stäußl-Weg");
        break;
    }
    case 4768:
    {
        returnValue = F("Alfons-Stübe-Weg");
        break;
    }
    case 4769:
    {
        returnValue = F("Alfons-Verstege-Weg");
        break;
    }
    case 4770:
    {
        returnValue = F("Alfons-Wanner-Str.");
        break;
    }
    case 4771:
    {
        returnValue = F("Alfons-Werndl-Str.");
        break;
    }
    case 4772:
    {
        returnValue = F("Alfons-Wiegel-Str.");
        break;
    }
    case 4773:
    {
        returnValue = F("Alfonsstr.");
        break;
    }
    case 4774:
    {
        returnValue = F("Alfred-Ackermann-Str.");
        break;
    }
    case 4775:
    {
        returnValue = F("Alfred-Ahner-Str.");
        break;
    }
    case 4776:
    {
        returnValue = F("Alfred-Althus-Str.");
        break;
    }
    case 4777:
    {
        returnValue = F("Alfred-Amann-Weg");
        break;
    }
    case 4778:
    {
        returnValue = F("Alfred-Andersch-Str.");
        break;
    }
    case 4779:
    {
        returnValue = F("Alfred-Balzer-Str.");
        break;
    }
    case 4780:
    {
        returnValue = F("Alfred-Bauer-Str.");
        break;
    }
    case 4781:
    {
        returnValue = F("Alfred-Baur-Str.");
        break;
    }
    case 4782:
    {
        returnValue = F("Alfred-Becker-Str.");
        break;
    }
    case 4783:
    {
        returnValue = F("Alfred-Bentz-Str.");
        break;
    }
    case 4784:
    {
        returnValue = F("Alfred-Berchtold-Weg");
        break;
    }
    case 4785:
    {
        returnValue = F("Alfred-Berger-Str.");
        break;
    }
    case 4786:
    {
        returnValue = F("Alfred-Berndsen-Weg");
        break;
    }
    case 4787:
    {
        returnValue = F("Alfred-Bessler-Str.");
        break;
    }
    case 4788:
    {
        returnValue = F("Alfred-Bierwirth-Weg");
        break;
    }
    case 4789:
    {
        returnValue = F("Alfred-Bischoff-Str.");
        break;
    }
    case 4790:
    {
        returnValue = F("Alfred-Bock-Str.");
        break;
    }
    case 4791:
    {
        returnValue = F("Alfred-Bozi-Str.");
        break;
    }
    case 4792:
    {
        returnValue = F("Alfred-Brehm-Platz");
        break;
    }
    case 4793:
    {
        returnValue = F("Alfred-Brehm-Str.");
        break;
    }
    case 4794:
    {
        returnValue = F("Alfred-Brehm-Weg");
        break;
    }
    case 4795:
    {
        returnValue = F("Alfred-Brinkmann-Weg");
        break;
    }
    case 4796:
    {
        returnValue = F("Alfred-Britsch-Str.");
        break;
    }
    case 4797:
    {
        returnValue = F("Alfred-Brodauf-Str.");
        break;
    }
    case 4798:
    {
        returnValue = F("Alfred-Brunst-Str.");
        break;
    }
    case 4799:
    {
        returnValue = F("Alfred-Bräunig-Str.");
        break;
    }
    case 4800:
    {
        returnValue = F("Alfred-Bucherer-Str.");
        break;
    }
    case 4801:
    {
        returnValue = F("Alfred-Bühling-Str.");
        break;
    }
    case 4802:
    {
        returnValue = F("Alfred-Christlieb-Str.");
        break;
    }
    case 4803:
    {
        returnValue = F("Alfred-Colsmann-Platz");
        break;
    }
    case 4804:
    {
        returnValue = F("Alfred-Darre-Weg");
        break;
    }
    case 4805:
    {
        returnValue = F("Alfred-Delf-Str.");
        break;
    }
    case 4806:
    {
        returnValue = F("Alfred-Delp-Kreisel");
        break;
    }
    case 4807:
    {
        returnValue = F("Alfred-Delp-Platz");
        break;
    }
    case 4808:
    {
        returnValue = F("Alfred-Delp-Ring");
        break;
    }
    case 4809:
    {
        returnValue = F("Alfred-Delp-Str.");
        break;
    }
    case 4810:
    {
        returnValue = F("Alfred-Delp-Weg");
        break;
    }
    case 4811:
    {
        returnValue = F("Alfred-Dengler-Str.");
        break;
    }
    case 4812:
    {
        returnValue = F("Alfred-Dick-Park");
        break;
    }
    case 4813:
    {
        returnValue = F("Alfred-Dick-Ring");
        break;
    }
    case 4814:
    {
        returnValue = F("Alfred-Dick-Str.");
        break;
    }
    case 4815:
    {
        returnValue = F("Alfred-Diebold-Weg");
        break;
    }
    case 4816:
    {
        returnValue = F("Alfred-Diener-Str.");
        break;
    }
    case 4817:
    {
        returnValue = F("Alfred-Dobbert-Str.");
        break;
    }
    case 4818:
    {
        returnValue = F("Alfred-Dregger-Allee");
        break;
    }
    case 4819:
    {
        returnValue = F("Alfred-Drexel-Str.");
        break;
    }
    case 4820:
    {
        returnValue = F("Alfred-Däuble-Str.");
        break;
    }
    case 4821:
    {
        returnValue = F("Alfred-Döblin-Allee");
        break;
    }
    case 4822:
    {
        returnValue = F("Alfred-Döblin-Str.");
        break;
    }
    case 4823:
    {
        returnValue = F("Alfred-Döblin-Weg");
        break;
    }
    case 4824:
    {
        returnValue = F("Alfred-Eckert-Weg");
        break;
    }
    case 4825:
    {
        returnValue = F("Alfred-Egle-Str.");
        break;
    }
    case 4826:
    {
        returnValue = F("Alfred-Embs-Anlage");
        break;
    }
    case 4827:
    {
        returnValue = F("Alfred-Erbes-Weg");
        break;
    }
    case 4828:
    {
        returnValue = F("Alfred-Eymann-Str.");
        break;
    }
    case 4829:
    {
        returnValue = F("Alfred-Fehler-Str.");
        break;
    }
    case 4830:
    {
        returnValue = F("Alfred-Feudel-Weg");
        break;
    }
    case 4831:
    {
        returnValue = F("Alfred-Finkbeiner-Str.");
        break;
    }
    case 4832:
    {
        returnValue = F("Alfred-Flender-Str.");
        break;
    }
    case 4833:
    {
        returnValue = F("Alfred-Frank-Str.");
        break;
    }
    case 4834:
    {
        returnValue = F("Alfred-Franz-Haug-Str.");
        break;
    }
    case 4835:
    {
        returnValue = F("Alfred-Fried-Str.");
        break;
    }
    case 4836:
    {
        returnValue = F("Alfred-Fritsche-Weg");
        break;
    }
    case 4837:
    {
        returnValue = F("Alfred-Fritz-Str.");
        break;
    }
    case 4838:
    {
        returnValue = F("Alfred-Fröhlich-Str.");
        break;
    }
    case 4839:
    {
        returnValue = F("Alfred-Fuchs-Weg");
        break;
    }
    case 4840:
    {
        returnValue = F("Alfred-Funk-Str.");
        break;
    }
    case 4841:
    {
        returnValue = F("Alfred-Giebel-Str.");
        break;
    }
    case 4842:
    {
        returnValue = F("Alfred-Gorgosch-Str.");
        break;
    }
    case 4843:
    {
        returnValue = F("Alfred-Grimminger-Str.");
        break;
    }
    case 4844:
    {
        returnValue = F("Alfred-Grosser-Weg");
        break;
    }
    case 4845:
    {
        returnValue = F("Alfred-Groß-Str.");
        break;
    }
    case 4846:
    {
        returnValue = F("Alfred-Göbel-Weg");
        break;
    }
    case 4847:
    {
        returnValue = F("Alfred-Görner-Str.");
        break;
    }
    case 4848:
    {
        returnValue = F("Alfred-Haas-Str.");
        break;
    }
    case 4849:
    {
        returnValue = F("Alfred-Haberstroh-Weg");
        break;
    }
    case 4850:
    {
        returnValue = F("Alfred-Hagelstein-Str.");
        break;
    }
    case 4851:
    {
        returnValue = F("Alfred-Hanf-Str.");
        break;
    }
    case 4852:
    {
        returnValue = F("Alfred-Harbarth-Str.");
        break;
    }
    case 4853:
    {
        returnValue = F("Alfred-Haude-Str.");
        break;
    }
    case 4854:
    {
        returnValue = F("Alfred-Haußmann-Weg");
        break;
    }
    case 4855:
    {
        returnValue = F("Alfred-Heindl-Str.");
        break;
    }
    case 4856:
    {
        returnValue = F("Alfred-Heinze-Str.");
        break;
    }
    case 4857:
    {
        returnValue = F("Alfred-Hennings-Weg");
        break;
    }
    case 4858:
    {
        returnValue = F("Alfred-Herber-Str.");
        break;
    }
    case 4859:
    {
        returnValue = F("Alfred-Herbst-Str.");
        break;
    }
    case 4860:
    {
        returnValue = F("Alfred-Herrhausen-Allee");
        break;
    }
    case 4861:
    {
        returnValue = F("Alfred-Herrhausen-Brücke");
        break;
    }
    case 4862:
    {
        returnValue = F("Alfred-Herrhausen-Str.");
        break;
    }
    case 4863:
    {
        returnValue = F("Alfred-Hess-Str.");
        break;
    }
    case 4864:
    {
        returnValue = F("Alfred-Hesse Str.");
        break;
    }
    case 4865:
    {
        returnValue = F("Alfred-Hesse-Weg");
        break;
    }
    case 4866:
    {
        returnValue = F("Alfred-Heurich-Str.");
        break;
    }
    case 4867:
    {
        returnValue = F("Alfred-Hinrichs-Str.");
        break;
    }
    case 4868:
    {
        returnValue = F("Alfred-Hirschmeier-Str.");
        break;
    }
    case 4869:
    {
        returnValue = F("Alfred-Hitz-Platz");
        break;
    }
    case 4870:
    {
        returnValue = F("Alfred-Hoehne-Weg");
        break;
    }
    case 4871:
    {
        returnValue = F("Alfred-Holler-Weg");
        break;
    }
    case 4872:
    {
        returnValue = F("Alfred-Hummel-Str.");
        break;
    }
    case 4873:
    {
        returnValue = F("Alfred-Huth-Weg");
        break;
    }
    case 4874:
    {
        returnValue = F("Alfred-Hübner-Str.");
        break;
    }
    case 4875:
    {
        returnValue = F("Alfred-Jeschal-Str.");
        break;
    }
    case 4876:
    {
        returnValue = F("Alfred-Jessen-Weg");
        break;
    }
    case 4877:
    {
        returnValue = F("Alfred-Joos-Str.");
        break;
    }
    case 4878:
    {
        returnValue = F("Alfred-Joos-Weg");
        break;
    }
    case 4879:
    {
        returnValue = F("Alfred-Jost-Str.");
        break;
    }
    case 4880:
    {
        returnValue = F("Alfred-Jung-Str.");
        break;
    }
    case 4881:
    {
        returnValue = F("Alfred-Junge-Str.");
        break;
    }
    case 4882:
    {
        returnValue = F("Alfred-Kailbach-Str.");
        break;
    }
    case 4883:
    {
        returnValue = F("Alfred-Kamp-Str.");
        break;
    }
    case 4884:
    {
        returnValue = F("Alfred-Kelbassa-Str.");
        break;
    }
    case 4885:
    {
        returnValue = F("Alfred-Keller-Str.");
        break;
    }
    case 4886:
    {
        returnValue = F("Alfred-Kempe-Str.");
        break;
    }
    case 4887:
    {
        returnValue = F("Alfred-Kettner-Str.");
        break;
    }
    case 4888:
    {
        returnValue = F("Alfred-Kiefer-Weg");
        break;
    }
    case 4889:
    {
        returnValue = F("Alfred-Kirsten-Str.");
        break;
    }
    case 4890:
    {
        returnValue = F("Alfred-Kleefeldt-Weg");
        break;
    }
    case 4891:
    {
        returnValue = F("Alfred-Klingele-Str.");
        break;
    }
    case 4892:
    {
        returnValue = F("Alfred-Koch-Str.");
        break;
    }
    case 4893:
    {
        returnValue = F("Alfred-Kohler-Str.");
        break;
    }
    case 4894:
    {
        returnValue = F("Alfred-Kraft-Str.");
        break;
    }
    case 4895:
    {
        returnValue = F("Alfred-Kraume-Str.");
        break;
    }
    case 4896:
    {
        returnValue = F("Alfred-Kretz-Str.");
        break;
    }
    case 4897:
    {
        returnValue = F("Alfred-Krupp-Str.");
        break;
    }
    case 4898:
    {
        returnValue = F("Alfred-Krämer-Str.");
        break;
    }
    case 4899:
    {
        returnValue = F("Alfred-Kubin-Str.");
        break;
    }
    case 4900:
    {
        returnValue = F("Alfred-Kubin-Weg");
        break;
    }
    case 4901:
    {
        returnValue = F("Alfred-Kärcher-Str.");
        break;
    }
    case 4902:
    {
        returnValue = F("Alfred-Kästner-Str.");
        break;
    }
    case 4903:
    {
        returnValue = F("Alfred-Kühne-Str.");
        break;
    }
    case 4904:
    {
        returnValue = F("Alfred-Kühnert-Str.");
        break;
    }
    case 4905:
    {
        returnValue = F("Alfred-Lang-Str.");
        break;
    }
    case 4906:
    {
        returnValue = F("Alfred-Lange-Str.");
        break;
    }
    case 4907:
    {
        returnValue = F("Alfred-Leikam-Str.");
        break;
    }
    case 4908:
    {
        returnValue = F("Alfred-Leiß-Str.");
        break;
    }
    case 4909:
    {
        returnValue = F("Alfred-Lingg-Str.");
        break;
    }
    case 4910:
    {
        returnValue = F("Alfred-Lythall-Str.");
        break;
    }
    case 4911:
    {
        returnValue = F("Alfred-Löffler-Str.");
        break;
    }
    case 4912:
    {
        returnValue = F("Alfred-Markwitz-Str.");
        break;
    }
    case 4913:
    {
        returnValue = F("Alfred-Martin-Str.");
        break;
    }
    case 4914:
    {
        returnValue = F("Alfred-Maul-Str.");
        break;
    }
    case 4915:
    {
        returnValue = F("Alfred-Meermann-Str.");
        break;
    }
    case 4916:
    {
        returnValue = F("Alfred-Mehl-Str.");
        break;
    }
    case 4917:
    {
        returnValue = F("Alfred-Meier-Str.");
        break;
    }
    case 4918:
    {
        returnValue = F("Alfred-Mendler-Weg");
        break;
    }
    case 4919:
    {
        returnValue = F("Alfred-Messel-Platz");
        break;
    }
    case 4920:
    {
        returnValue = F("Alfred-Messel-Weg");
        break;
    }
    case 4921:
    {
        returnValue = F("Alfred-Minner-Str.");
        break;
    }
    case 4922:
    {
        returnValue = F("Alfred-Mithöfer-Str.");
        break;
    }
    case 4923:
    {
        returnValue = F("Alfred-Mozer-Str.");
        break;
    }
    case 4924:
    {
        returnValue = F("Alfred-Mumbächer-Str.");
        break;
    }
    case 4925:
    {
        returnValue = F("Alfred-Möller-Str.");
        break;
    }
    case 4926:
    {
        returnValue = F("Alfred-Müller-Weg");
        break;
    }
    case 4927:
    {
        returnValue = F("Alfred-Nathan-Str.");
        break;
    }
    case 4928:
    {
        returnValue = F("Alfred-Naumann-Str.");
        break;
    }
    case 4929:
    {
        returnValue = F("Alfred-Neef-Str.");
        break;
    }
    case 4930:
    {
        returnValue = F("Alfred-Neubert-Str.");
        break;
    }
    case 4931:
    {
        returnValue = F("Alfred-Nitzsche-Str.");
        break;
    }
    case 4932:
    {
        returnValue = F("Alfred-Nobel-Allee");
        break;
    }
    case 4933:
    {
        returnValue = F("Alfred-Nobel-Bogen");
        break;
    }
    case 4934:
    {
        returnValue = F("Alfred-Nobel-Platz");
        break;
    }
    case 4935:
    {
        returnValue = F("Alfred-Nobel-Ring");
        break;
    }
    case 4936:
    {
        returnValue = F("Alfred-Nobel-Str.");
        break;
    }
    case 4937:
    {
        returnValue = F("Alfred-Nobel-Weg");
        break;
    }
    case 4938:
    {
        returnValue = F("Alfred-Nägele-Str.");
        break;
    }
    case 4939:
    {
        returnValue = F("Alfred-Oehme-Str.");
        break;
    }
    case 4940:
    {
        returnValue = F("Alfred-Oelßner-Str.");
        break;
    }
    case 4941:
    {
        returnValue = F("Alfred-Ott-Str.");
        break;
    }
    case 4942:
    {
        returnValue = F("Alfred-Partikel-Weg");
        break;
    }
    case 4943:
    {
        returnValue = F("Alfred-Paulsen-Str.");
        break;
    }
    case 4944:
    {
        returnValue = F("Alfred-Peter-Platz");
        break;
    }
    case 4945:
    {
        returnValue = F("Alfred-Peth-Brücke");
        break;
    }
    case 4946:
    {
        returnValue = F("Alfred-Petto-Str.");
        break;
    }
    case 4947:
    {
        returnValue = F("Alfred-Ranft-Weg");
        break;
    }
    case 4948:
    {
        returnValue = F("Alfred-Reinhardt-Str.");
        break;
    }
    case 4949:
    {
        returnValue = F("Alfred-Remmele-Str.");
        break;
    }
    case 4950:
    {
        returnValue = F("Alfred-Renelt-Weg");
        break;
    }
    case 4951:
    {
        returnValue = F("Alfred-Rethel-Str.");
        break;
    }
    case 4952:
    {
        returnValue = F("Alfred-Ritter-Str.");
        break;
    }
    case 4953:
    {
        returnValue = F("Alfred-Ruppert-Str.");
        break;
    }
    case 4954:
    {
        returnValue = F("Alfred-Sauerteig-Anlage");
        break;
    }
    case 4955:
    {
        returnValue = F("Alfred-Schaffer-Str.");
        break;
    }
    case 4956:
    {
        returnValue = F("Alfred-Schefenacker-Str.");
        break;
    }
    case 4957:
    {
        returnValue = F("Alfred-Schlagk-Str.");
        break;
    }
    case 4958:
    {
        returnValue = F("Alfred-Schlagmann-Str.");
        break;
    }
    case 4959:
    {
        returnValue = F("Alfred-Schmieder-Str.");
        break;
    }
    case 4960:
    {
        returnValue = F("Alfred-Schneider-Str.");
        break;
    }
    case 4961:
    {
        returnValue = F("Alfred-Schnüttgen-Str.");
        break;
    }
    case 4962:
    {
        returnValue = F("Alfred-Scholz-Str.");
        break;
    }
    case 4963:
    {
        returnValue = F("Alfred-Schradin-Str.");
        break;
    }
    case 4964:
    {
        returnValue = F("Alfred-Schradin-Weg");
        break;
    }
    case 4965:
    {
        returnValue = F("Alfred-Schrapel-Str.");
        break;
    }
    case 4966:
    {
        returnValue = F("Alfred-Schreiber-Str.");
        break;
    }
    case 4967:
    {
        returnValue = F("Alfred-Schröder-Str.");
        break;
    }
    case 4968:
    {
        returnValue = F("Alfred-Schulze-Str.");
        break;
    }
    case 4969:
    {
        returnValue = F("Alfred-Schumann-Str.");
        break;
    }
    case 4970:
    {
        returnValue = F("Alfred-Schurig-Str.");
        break;
    }
    case 4971:
    {
        returnValue = F("Alfred-Schwarzmann-Weg");
        break;
    }
    case 4972:
    {
        returnValue = F("Alfred-Schön-Allee");
        break;
    }
    case 4973:
    {
        returnValue = F("Alfred-Schönbucher-Platz");
        break;
    }
    case 4974:
    {
        returnValue = F("Alfred-Seepe-Str.");
        break;
    }
    case 4975:
    {
        returnValue = F("Alfred-Sell-Str.");
        break;
    }
    case 4976:
    {
        returnValue = F("Alfred-Siefert-Weg");
        break;
    }
    case 4977:
    {
        returnValue = F("Alfred-Siems-Str.");
        break;
    }
    case 4978:
    {
        returnValue = F("Alfred-Sollmann-Str.");
        break;
    }
    case 4979:
    {
        returnValue = F("Alfred-Steuer-Weg");
        break;
    }
    case 4980:
    {
        returnValue = F("Alfred-Stock-Str.");
        break;
    }
    case 4981:
    {
        returnValue = F("Alfred-Stursberg-Weg");
        break;
    }
    case 4982:
    {
        returnValue = F("Alfred-Sußbauer-Str.");
        break;
    }
    case 4983:
    {
        returnValue = F("Alfred-Tack-Str.");
        break;
    }
    case 4984:
    {
        returnValue = F("Alfred-Taube-Str.");
        break;
    }
    case 4985:
    {
        returnValue = F("Alfred-Teves-Str.");
        break;
    }
    case 4986:
    {
        returnValue = F("Alfred-Thiele-Str.");
        break;
    }
    case 4987:
    {
        returnValue = F("Alfred-Thumm-Str.");
        break;
    }
    case 4988:
    {
        returnValue = F("Alfred-Toepfer-Weg");
        break;
    }
    case 4989:
    {
        returnValue = F("Alfred-Trebchen-Str.");
        break;
    }
    case 4990:
    {
        returnValue = F("Alfred-Ulrich-Str.");
        break;
    }
    case 4991:
    {
        returnValue = F("Alfred-Völkel-Str.");
        break;
    }
    case 4992:
    {
        returnValue = F("Alfred-Wachtel-Str.");
        break;
    }
    case 4993:
    {
        returnValue = F("Alfred-Wainald-Weg");
        break;
    }
    case 4994:
    {
        returnValue = F("Alfred-Weber-Platz");
        break;
    }
    case 4995:
    {
        returnValue = F("Alfred-Weber-Weg");
        break;
    }
    case 4996:
    {
        returnValue = F("Alfred-Wegener-Platz");
        break;
    }
    case 4997:
    {
        returnValue = F("Alfred-Wegener-Str.");
        break;
    }
    case 4998:
    {
        returnValue = F("Alfred-Weidner-Weg");
        break;
    }
    case 4999:
    {
        returnValue = F("Alfred-Weil-Str.");
        break;
    }
    case 5000:
    {
        returnValue = F("Alfred-Weis-Str.");
        break;
    }
    case 5001:
    {
        returnValue = F("Alfred-Weissenberger-Weg");
        break;
    }
    case 5002:
    {
        returnValue = F("Alfred-Weiß-Str.");
        break;
    }
    case 5003:
    {
        returnValue = F("Alfred-Wendt-Str.");
        break;
    }
    case 5004:
    {
        returnValue = F("Alfred-Wetzig-Weg");
        break;
    }
    case 5005:
    {
        returnValue = F("Alfred-Wiedemann-Weg");
        break;
    }
    case 5006:
    {
        returnValue = F("Alfred-Wiegmann-Weg");
        break;
    }
    case 5007:
    {
        returnValue = F("Alfred-Wilke-Str.");
        break;
    }
    case 5008:
    {
        returnValue = F("Alfred-Wilm-Str.");
        break;
    }
    case 5009:
    {
        returnValue = F("Alfred-Wirth-Str.");
        break;
    }
    case 5010:
    {
        returnValue = F("Alfred-Wölfel-Str.");
        break;
    }
    case 5011:
    {
        returnValue = F("Alfred-Zingler-Str.");
        break;
    }
    case 5012:
    {
        returnValue = F("Alfredaweg");
        break;
    }
    case 5013:
    {
        returnValue = F("Alfrediplatz");
        break;
    }
    case 5014:
    {
        returnValue = F("Alfredplatz");
        break;
    }
    case 5015:
    {
        returnValue = F("Alfredshöhe");
        break;
    }
    case 5016:
    {
        returnValue = F("Alfredshöher Str.");
        break;
    }
    case 5017:
    {
        returnValue = F("Alfredstarsse");
        break;
    }
    case 5018:
    {
        returnValue = F("Alfredstr.");
        break;
    }
    case 5019:
    {
        returnValue = F("Alfriede-Marioth-Str.");
        break;
    }
    case 5020:
    {
        returnValue = F("Alfrin");
        break;
    }
    case 5021:
    {
        returnValue = F("Alfsmühle");
        break;
    }
    case 5022:
    {
        returnValue = F("Alfstedter Hauptstr.");
        break;
    }
    case 5023:
    {
        returnValue = F("Alfstedter Pfad");
        break;
    }
    case 5024:
    {
        returnValue = F("Alfstr.");
        break;
    }
    case 5025:
    {
        returnValue = F("Alftalblick");
        break;
    }
    case 5026:
    {
        returnValue = F("Alftalstr.");
        break;
    }
    case 5027:
    {
        returnValue = F("Alfterer Hufebahn");
        break;
    }
    case 5028:
    {
        returnValue = F("Alfterer Str.");
        break;
    }
    case 5029:
    {
        returnValue = F("Alfterer Weg");
        break;
    }
    case 5030:
    {
        returnValue = F("Alfterstr.");
        break;
    }
    case 5031:
    {
        returnValue = F("Algasing");
        break;
    }
    case 5032:
    {
        returnValue = F("Algasinger Weg");
        break;
    }
    case 5033:
    {
        returnValue = F("Algehof");
        break;
    }
    case 5034:
    {
        returnValue = F("Algenbachstr.");
        break;
    }
    case 5035:
    {
        returnValue = F("Algenrodter Str.");
        break;
    }
    case 5036:
    {
        returnValue = F("Algenrother Str.");
        break;
    }
    case 5037:
    {
        returnValue = F("Algenstedter Str.");
        break;
    }
    case 5038:
    {
        returnValue = F("Algenweg");
        break;
    }
    case 5039:
    {
        returnValue = F("Algermissener Str.");
        break;
    }
    case 5040:
    {
        returnValue = F("Algers");
        break;
    }
    case 5041:
    {
        returnValue = F("Algershausener Str.");
        break;
    }
    case 5042:
    {
        returnValue = F("Algershofen");
        break;
    }
    case 5043:
    {
        returnValue = F("Algersweg");
        break;
    }
    case 5044:
    {
        returnValue = F("Algerter Str.");
        break;
    }
    case 5045:
    {
        returnValue = F("Algerting");
        break;
    }
    case 5046:
    {
        returnValue = F("Algesbüttel");
        break;
    }
    case 5047:
    {
        returnValue = F("Algesbütteler Weg");
        break;
    }
    case 5048:
    {
        returnValue = F("Algesdorfer Kirchweg");
        break;
    }
    case 5049:
    {
        returnValue = F("Algishofen");
        break;
    }
    case 5050:
    {
        returnValue = F("Algiweg");
        break;
    }
    case 5051:
    {
        returnValue = F("Algolsheimer Str.");
        break;
    }
    case 5052:
    {
        returnValue = F("Algunder Steig");
        break;
    }
    case 5053:
    {
        returnValue = F("Algunder Str.");
        break;
    }
    case 5054:
    {
        returnValue = F("Algunder Weg");
        break;
    }
    case 5055:
    {
        returnValue = F("Alhambra-Passage");
        break;
    }
    case 5056:
    {
        returnValue = F("Alhardstr.");
        break;
    }
    case 5057:
    {
        returnValue = F("Alhartstr.");
        break;
    }
    case 5058:
    {
        returnValue = F("Alhauser Str.");
        break;
    }
    case 5059:
    {
        returnValue = F("Alhausstr.");
        break;
    }
    case 5060:
    {
        returnValue = F("Alheidisstr.");
        break;
    }
    case 5061:
    {
        returnValue = F("Alheimer Str.");
        break;
    }
    case 5062:
    {
        returnValue = F("Alheimer Weg");
        break;
    }
    case 5063:
    {
        returnValue = F("Alheimerstr.");
        break;
    }
    case 5064:
    {
        returnValue = F("Alhornstr.");
        break;
    }
    case 5065:
    {
        returnValue = F("Alice-Bloch-Str.");
        break;
    }
    case 5066:
    {
        returnValue = F("Alice-Bärlein-Weg");
        break;
    }
    case 5067:
    {
        returnValue = F("Alice-Droller-Str.");
        break;
    }
    case 5068:
    {
        returnValue = F("Alice-Haarburger-Hof");
        break;
    }
    case 5069:
    {
        returnValue = F("Alice-Haarburger-Str.");
        break;
    }
    case 5070:
    {
        returnValue = F("Alice-Haarburger-Weg");
        break;
    }
    case 5071:
    {
        returnValue = F("Alice-Heye-Platz");
        break;
    }
    case 5072:
    {
        returnValue = F("Alice-Neugebauer-Str.");
        break;
    }
    case 5073:
    {
        returnValue = F("Alice-Prausnitz-Weg");
        break;
    }
    case 5074:
    {
        returnValue = F("Alice-Rosenberg-Weg");
        break;
    }
    case 5075:
    {
        returnValue = F("Alice-Salomon-Hof");
        break;
    }
    case 5076:
    {
        returnValue = F("Alice-Salomon-Ring");
        break;
    }
    case 5077:
    {
        returnValue = F("Alice-Salomon-Str.");
        break;
    }
    case 5078:
    {
        returnValue = F("Alice-Salomon-Weg");
        break;
    }
    case 5079:
    {
        returnValue = F("Alice-von-Swaine-Str.");
        break;
    }
    case 5080:
    {
        returnValue = F("Alicenplatz");
        break;
    }
    case 5081:
    {
        returnValue = F("Alicensteg");
        break;
    }
    case 5082:
    {
        returnValue = F("Alicenstr.");
        break;
    }
    case 5083:
    {
        returnValue = F("Alicenweg");
        break;
    }
    case 5084:
    {
        returnValue = F("Alicestr.");
        break;
    }
    case 5085:
    {
        returnValue = F("Aligser Dorfstr.");
        break;
    }
    case 5086:
    {
        returnValue = F("Aligser Torfweg");
        break;
    }
    case 5087:
    {
        returnValue = F("Aligser Weg");
        break;
    }
    case 5088:
    {
        returnValue = F("Alinenhofer Weg");
        break;
    }
    case 5089:
    {
        returnValue = F("Alisa-Park");
        break;
    }
    case 5090:
    {
        returnValue = F("Alisostr.");
        break;
    }
    case 5091:
    {
        returnValue = F("Alisowall");
        break;
    }
    case 5092:
    {
        returnValue = F("Alitzheimer Str.");
        break;
    }
    case 5093:
    {
        returnValue = F("Aljezurstr.");
        break;
    }
    case 5094:
    {
        returnValue = F("Alkenbrink");
        break;
    }
    case 5095:
    {
        returnValue = F("Alkendiek");
        break;
    }
    case 5096:
    {
        returnValue = F("Alkener Weg");
        break;
    }
    case 5097:
    {
        returnValue = F("Alkenrather Str.");
        break;
    }
    case 5098:
    {
        returnValue = F("Alkenstiege");
        break;
    }
    case 5099:
    {
        returnValue = F("Alkenstr.");
        break;
    }
    case 5100:
    {
        returnValue = F("Alkersheimer Weg");
        break;
    }
    case 5101:
    {
        returnValue = F("Alkerslebener Str.");
        break;
    }
    case 5102:
    {
        returnValue = F("Alkersleber Weg");
        break;
    }
    case 5103:
    {
        returnValue = F("Alkersumer Stieg");
        break;
    }
    case 5104:
    {
        returnValue = F("Alkerter Weg");
        break;
    }
    case 5105:
    {
        returnValue = F("Alkertshausen");
        break;
    }
    case 5106:
    {
        returnValue = F("Alkeweg");
        break;
    }
    case 5107:
    {
        returnValue = F("Alkhofen");
        break;
    }
    case 5108:
    {
        returnValue = F("Alkhofer Weg");
        break;
    }
    case 5109:
    {
        returnValue = F("Alkhorster Feldweg");
        break;
    }
    case 5110:
    {
        returnValue = F("Alkmaarer Str.");
        break;
    }
    case 5111:
    {
        returnValue = F("Alkmaarstr.");
        break;
    }
    case 5112:
    {
        returnValue = F("Alkmenenring");
        break;
    }
    case 5113:
    {
        returnValue = F("Alkmenestr.");
        break;
    }
    case 5114:
    {
        returnValue = F("Alkofener Hauptstr.");
        break;
    }
    case 5115:
    {
        returnValue = F("Alkofer Weg");
        break;
    }
    case 5116:
    {
        returnValue = F("Alkoferstr.");
        break;
    }
    case 5117:
    {
        returnValue = F("Alkostr.");
        break;
    }
    case 5118:
    {
        returnValue = F("Alkuinstr.");
        break;
    }
    case 5119:
    {
        returnValue = F("Allacher Str.");
        break;
    }
    case 5120:
    {
        returnValue = F("Allachstr.");
        break;
    }
    case 5121:
    {
        returnValue = F("Allackerstr.");
        break;
    }
    case 5122:
    {
        returnValue = F("Alladorfer Weg");
        break;
    }
    case 5123:
    {
        returnValue = F("Allakofen");
        break;
    }
    case 5124:
    {
        returnValue = F("Allakofener Str.");
        break;
    }
    case 5125:
    {
        returnValue = F("Allakofer Str.");
        break;
    }
    case 5126:
    {
        returnValue = F("Allandsbusch");
        break;
    }
    case 5127:
    {
        returnValue = F("Allaniaweg");
        break;
    }
    case 5128:
    {
        returnValue = F("Allauchplatz");
        break;
    }
    case 5129:
    {
        returnValue = F("Allbergstr.");
        break;
    }
    case 5130:
    {
        returnValue = F("Alldieckstr.");
        break;
    }
    case 5131:
    {
        returnValue = F("Alldorn");
        break;
    }
    case 5132:
    {
        returnValue = F("Allee");
        break;
    }
    case 5133:
    {
        returnValue = F("Allee 13");
        break;
    }
    case 5134:
    {
        returnValue = F("Allee 8");
        break;
    }
    case 5135:
    {
        returnValue = F("Allee Cité");
        break;
    }
    case 5136:
    {
        returnValue = F("Allee I");
        break;
    }
    case 5137:
    {
        returnValue = F("Allee II");
        break;
    }
    case 5138:
    {
        returnValue = F("Allee III");
        break;
    }
    case 5139:
    {
        returnValue = F("Allee IV");
        break;
    }
    case 5140:
    {
        returnValue = F("Allee Kanton Saint-Julien");
        break;
    }
    case 5141:
    {
        returnValue = F("Allee La Chapelle-Saint-Luc");
        break;
    }
    case 5142:
    {
        returnValue = F("Allee V");
        break;
    }
    case 5143:
    {
        returnValue = F("Allee VI");
        break;
    }
    case 5144:
    {
        returnValue = F("Allee VII");
        break;
    }
    case 5145:
    {
        returnValue = F("Allee VIII");
        break;
    }
    case 5146:
    {
        returnValue = F("Allee am Forsthaus");
        break;
    }
    case 5147:
    {
        returnValue = F("Allee am Röthelheimpark");
        break;
    }
    case 5148:
    {
        returnValue = F("Allee de Theix");
        break;
    }
    case 5149:
    {
        returnValue = F("Allee der Brunnenmeister");
        break;
    }
    case 5150:
    {
        returnValue = F("Allee der Bäume des Jahres");
        break;
    }
    case 5151:
    {
        returnValue = F("Allee der Heimattage");
        break;
    }
    case 5152:
    {
        returnValue = F("Allee der Pyramideneichen");
        break;
    }
    case 5153:
    {
        returnValue = F("Allee des Chasseurs");
        break;
    }
    case 5154:
    {
        returnValue = F("Allee des Weltklimas");
        break;
    }
    case 5155:
    {
        returnValue = F("Allee les Bleus");
        break;
    }
    case 5156:
    {
        returnValue = F("Allee nach Glienicke");
        break;
    }
    case 5157:
    {
        returnValue = F("Allee nach Sanssouci");
        break;
    }
    case 5158:
    {
        returnValue = F("Allee zu den Mühlenstücken");
        break;
    }
    case 5159:
    {
        returnValue = F("Allee zum Sportpark");
        break;
    }
    case 5160:
    {
        returnValue = F("Alleebreite");
        break;
    }
    case 5161:
    {
        returnValue = F("Alleebrücke");
        break;
    }
    case 5162:
    {
        returnValue = F("Alleebüchelweg");
        break;
    }
    case 5163:
    {
        returnValue = F("Alleegarten");
        break;
    }
    case 5164:
    {
        returnValue = F("Alleegasse");
        break;
    }
    case 5165:
    {
        returnValue = F("Alleegäßchen");
        break;
    }
    case 5166:
    {
        returnValue = F("Alleekoppel");
        break;
    }
    case 5167:
    {
        returnValue = F("Alleele");
        break;
    }
    case 5168:
    {
        returnValue = F("Alleenbrücke");
        break;
    }
    case 5169:
    {
        returnValue = F("Alleenpassage");
        break;
    }
    case 5170:
    {
        returnValue = F("Alleenradweg");
        break;
    }
    case 5171:
    {
        returnValue = F("Alleenradweg Aggertalbahn");
        break;
    }
    case 5172:
    {
        returnValue = F("Alleenring");
        break;
    }
    case 5173:
    {
        returnValue = F("Alleenstr.");
        break;
    }
    case 5174:
    {
        returnValue = F("Alleenweg");
        break;
    }
    case 5175:
    {
        returnValue = F("Alleestr.");
        break;
    }
    case 5176:
    {
        returnValue = F("Alleeweg");
        break;
    }
    case 5177:
    {
        returnValue = F("Allemannenweg");
        break;
    }
    case 5178:
    {
        returnValue = F("Allemühler Str.");
        break;
    }
    case 5179:
    {
        returnValue = F("Allenackerfeld");
        break;
    }
    case 5180:
    {
        returnValue = F("Allenbacher Str.");
        break;
    }
    case 5181:
    {
        returnValue = F("Allenberg");
        break;
    }
    case 5182:
    {
        returnValue = F("Allenberger Str.");
        break;
    }
    case 5183:
    {
        returnValue = F("Allenbergstr.");
        break;
    }
    case 5184:
    {
        returnValue = F("Allenbostel");
        break;
    }
    case 5185:
    {
        returnValue = F("Allenbosteler Weg");
        break;
    }
    case 5186:
    {
        returnValue = F("Allendestr.");
        break;
    }
    case 5187:
    {
        returnValue = F("Allendorfer Allee");
        break;
    }
    case 5188:
    {
        returnValue = F("Allendorfer Grund");
        break;
    }
    case 5189:
    {
        returnValue = F("Allendorfer Höhe");
        break;
    }
    case 5190:
    {
        returnValue = F("Allendorfer Str.");
        break;
    }
    case 5191:
    {
        returnValue = F("Allendorfer Weg");
        break;
    }
    case 5192:
    {
        returnValue = F("Allendorfweg");
        break;
    }
    case 5193:
    {
        returnValue = F("Allendörfer Au");
        break;
    }
    case 5194:
    {
        returnValue = F("Allendörfer Weg");
        break;
    }
    case 5195:
    {
        returnValue = F("Allener Kreisel");
        break;
    }
    case 5196:
    {
        returnValue = F("Allener Str.");
        break;
    }
    case 5197:
    {
        returnValue = F("Allenfeld");
        break;
    }
    case 5198:
    {
        returnValue = F("Allenfeld-Ring");
        break;
    }
    case 5199:
    {
        returnValue = F("Allenfeldstr.");
        break;
    }
    case 5200:
    {
        returnValue = F("Allenhohn");
        break;
    }
    case 5201:
    {
        returnValue = F("Allenkamp");
        break;
    }
    case 5202:
    {
        returnValue = F("Allensbacher Str.");
        break;
    }
    case 5203:
    {
        returnValue = F("Allensbacher Weg");
        break;
    }
    case 5204:
    {
        returnValue = F("Allenschwandweg");
        break;
    }
    case 5205:
    {
        returnValue = F("Allenspacher Weg");
        break;
    }
    case 5206:
    {
        returnValue = F("Allenstedtskamp");
        break;
    }
    case 5207:
    {
        returnValue = F("Allensteiner Ring");
        break;
    }
    case 5208:
    {
        returnValue = F("Allensteiner Str.");
        break;
    }
    case 5209:
    {
        returnValue = F("Allensteiner Weg");
        break;
    }
    case 5210:
    {
        returnValue = F("Allensteinstr.");
        break;
    }
    case 5211:
    {
        returnValue = F("Allensteinweg");
        break;
    }
    case 5212:
    {
        returnValue = F("Allenstr.");
        break;
    }
    case 5213:
    {
        returnValue = F("Allenwinden");
        break;
    }
    case 5214:
    {
        returnValue = F("Allenzer Str.");
        break;
    }
    case 5215:
    {
        returnValue = F("Aller Fernradweg");
        break;
    }
    case 5216:
    {
        returnValue = F("Aller Radweg");
        break;
    }
    case 5217:
    {
        returnValue = F("Allerbachstr.");
        break;
    }
    case 5218:
    {
        returnValue = F("Allerbecker Weg");
        break;
    }
    case 5219:
    {
        returnValue = F("Allerbeckweg");
        break;
    }
    case 5220:
    {
        returnValue = F("Allerbeekskehre");
        break;
    }
    case 5221:
    {
        returnValue = F("Allerbeeksring");
        break;
    }
    case 5222:
    {
        returnValue = F("Allerberg");
        break;
    }
    case 5223:
    {
        returnValue = F("Allerblick");
        break;
    }
    case 5224:
    {
        returnValue = F("Allerbogen");
        break;
    }
    case 5225:
    {
        returnValue = F("Allerbrake");
        break;
    }
    case 5226:
    {
        returnValue = F("Allerbreite");
        break;
    }
    case 5227:
    {
        returnValue = F("Allerbruch");
        break;
    }
    case 5228:
    {
        returnValue = F("Allerbruchweg");
        break;
    }
    case 5229:
    {
        returnValue = F("Allerburg");
        break;
    }
    case 5230:
    {
        returnValue = F("Allerbusch");
        break;
    }
    case 5231:
    {
        returnValue = F("Allerdamm");
        break;
    }
    case 5232:
    {
        returnValue = F("Allerdammstr.");
        break;
    }
    case 5233:
    {
        returnValue = F("Allerding");
        break;
    }
    case 5234:
    {
        returnValue = F("Allerdorf");
        break;
    }
    case 5235:
    {
        returnValue = F("Allerfeld");
        break;
    }
    case 5236:
    {
        returnValue = F("Allerfeldstr.");
        break;
    }
    case 5237:
    {
        returnValue = F("Allerfurt");
        break;
    }
    case 5238:
    {
        returnValue = F("Allergarten");
        break;
    }
    case 5239:
    {
        returnValue = F("Allergasse");
        break;
    }
    case 5240:
    {
        returnValue = F("Allerheide");
        break;
    }
    case 5241:
    {
        returnValue = F("Allerheiligenbergstr.");
        break;
    }
    case 5242:
    {
        returnValue = F("Allerheiligengasse");
        break;
    }
    case 5243:
    {
        returnValue = F("Allerheiligenschleifweg");
        break;
    }
    case 5244:
    {
        returnValue = F("Allerheiligenstr.");
        break;
    }
    case 5245:
    {
        returnValue = F("Allerheiligensträßchen");
        break;
    }
    case 5246:
    {
        returnValue = F("Allerheiligenweg");
        break;
    }
    case 5247:
    {
        returnValue = F("Allerhoopsweg");
        break;
    }
    case 5248:
    {
        returnValue = F("Allerhop");
        break;
    }
    case 5249:
    {
        returnValue = F("Alleringerslebener Str.");
        break;
    }
    case 5250:
    {
        returnValue = F("Alleringersleber Weg");
        break;
    }
    case 5251:
    {
        returnValue = F("Alleringsleber Str.");
        break;
    }
    case 5252:
    {
        returnValue = F("Allerkamp");
        break;
    }
    case 5253:
    {
        returnValue = F("Allerkampstr.");
        break;
    }
    case 5254:
    {
        returnValue = F("Allerloh");
        break;
    }
    case 5255:
    {
        returnValue = F("Allermannstr.");
        break;
    }
    case 5256:
    {
        returnValue = F("Allermühlenweg");
        break;
    }
    case 5257:
    {
        returnValue = F("Allern");
        break;
    }
    case 5258:
    {
        returnValue = F("Allernborn");
        break;
    }
    case 5259:
    {
        returnValue = F("Allernbusch");
        break;
    }
    case 5260:
    {
        returnValue = F("Allernweg");
        break;
    }
    case 5261:
    {
        returnValue = F("Allerpark");
        break;
    }
    case 5262:
    {
        returnValue = F("Allerradweg");
        break;
    }
    case 5263:
    {
        returnValue = F("Allerriede");
        break;
    }
    case 5264:
    {
        returnValue = F("Allersberg");
        break;
    }
    case 5265:
    {
        returnValue = F("Allersberger Str.");
        break;
    }
    case 5266:
    {
        returnValue = F("Allersbergstr.");
        break;
    }
    case 5267:
    {
        returnValue = F("Allersbergweg");
        break;
    }
    case 5268:
    {
        returnValue = F("Allersburg");
        break;
    }
    case 5269:
    {
        returnValue = F("Allersdorf");
        break;
    }
    case 5270:
    {
        returnValue = F("Allersdorfer Str.");
        break;
    }
    case 5271:
    {
        returnValue = F("Allersdorfer Waldweg");
        break;
    }
    case 5272:
    {
        returnValue = F("Allersdorfer Weg");
        break;
    }
    case 5273:
    {
        returnValue = F("Allerseeweg");
        break;
    }
    case 5274:
    {
        returnValue = F("Allersfeldener Str.");
        break;
    }
    case 5275:
    {
        returnValue = F("Allersheim");
        break;
    }
    case 5276:
    {
        returnValue = F("Allersheimer Kirchweg");
        break;
    }
    case 5277:
    {
        returnValue = F("Allersheimer Str.");
        break;
    }
    case 5278:
    {
        returnValue = F("Allershäger Str.");
        break;
    }
    case 5279:
    {
        returnValue = F("Allershäuser Weg");
        break;
    }
    case 5280:
    {
        returnValue = F("Allersiek");
        break;
    }
    case 5281:
    {
        returnValue = F("Allersstr.");
        break;
    }
    case 5282:
    {
        returnValue = F("Allerstedter Str.");
        break;
    }
    case 5283:
    {
        returnValue = F("Allerstorfer Chaussee");
        break;
    }
    case 5284:
    {
        returnValue = F("Allerstr.");
        break;
    }
    case 5285:
    {
        returnValue = F("Allersweg");
        break;
    }
    case 5286:
    {
        returnValue = F("Allertal");
        break;
    }
    case 5287:
    {
        returnValue = F("Allertalweg");
        break;
    }
    case 5288:
    {
        returnValue = F("Allerthalweg");
        break;
    }
    case 5289:
    {
        returnValue = F("Allerting");
        break;
    }
    case 5290:
    {
        returnValue = F("Allertinger Feld West");
        break;
    }
    case 5291:
    {
        returnValue = F("Allertinger Str.");
        break;
    }
    case 5292:
    {
        returnValue = F("Allertsham");
        break;
    }
    case 5293:
    {
        returnValue = F("Allertshofen");
        break;
    }
    case 5294:
    {
        returnValue = F("Allertshäuser Dorfplatz");
        break;
    }
    case 5295:
    {
        returnValue = F("Allertshäuser Str.");
        break;
    }
    case 5296:
    {
        returnValue = F("Allertshäuser Weg");
        break;
    }
    case 5297:
    {
        returnValue = F("Allerweg");
        break;
    }
    case 5298:
    {
        returnValue = F("Allerwelle");
        break;
    }
    case 5299:
    {
        returnValue = F("Allerwinkel");
        break;
    }
    case 5300:
    {
        returnValue = F("Allesgrundweg");
        break;
    }
    case 5301:
    {
        returnValue = F("Alleshauser Str.");
        break;
    }
    case 5302:
    {
        returnValue = F("Alletseestr.");
        break;
    }
    case 5303:
    {
        returnValue = F("Alletsried");
        break;
    }
    case 5304:
    {
        returnValue = F("Allewarder Weg");
        break;
    }
    case 5305:
    {
        returnValue = F("Allewellestwete");
        break;
    }
    case 5306:
    {
        returnValue = F("Allewind");
        break;
    }
    case 5307:
    {
        returnValue = F("Allewindenstr.");
        break;
    }
    case 5308:
    {
        returnValue = F("Allewinder Str.");
        break;
    }
    case 5309:
    {
        returnValue = F("Allewindstr.");
        break;
    }
    case 5310:
    {
        returnValue = F("Allfelder Str.");
        break;
    }
    case 5311:
    {
        returnValue = F("Allfelder Weg");
        break;
    }
    case 5312:
    {
        returnValue = F("Allfelder-Grenzweg");
        break;
    }
    case 5313:
    {
        returnValue = F("Allgaierstr.");
        break;
    }
    case 5314:
    {
        returnValue = F("Allgau");
        break;
    }
    case 5315:
    {
        returnValue = F("Allgaustr.");
        break;
    }
    case 5316:
    {
        returnValue = F("Allgeierhofweg");
        break;
    }
    case 5317:
    {
        returnValue = F("Allgeierweg");
        break;
    }
    case 5318:
    {
        returnValue = F("Allgerstr.");
        break;
    }
    case 5319:
    {
        returnValue = F("Allgramsdorf");
        break;
    }
    case 5320:
    {
        returnValue = F("Allgäublick");
        break;
    }
    case 5321:
    {
        returnValue = F("Allgäuer Ring");
        break;
    }
    case 5322:
    {
        returnValue = F("Allgäuer Str.");
        break;
    }
    case 5323:
    {
        returnValue = F("Allgäuer Weg");
        break;
    }
    case 5324:
    {
        returnValue = F("Allgäuerstr.");
        break;
    }
    case 5325:
    {
        returnValue = F("Allgäustr.");
        break;
    }
    case 5326:
    {
        returnValue = F("Allgäuweg");
        break;
    }
    case 5327:
    {
        returnValue = F("Allhartsmais");
        break;
    }
    case 5328:
    {
        returnValue = F("Allhornstr.");
        break;
    }
    case 5329:
    {
        returnValue = F("Allhovener Str.");
        break;
    }
    case 5330:
    {
        returnValue = F("Allhöherstr.");
        break;
    }
    case 5331:
    {
        returnValue = F("Alliger Weg");
        break;
    }
    case 5332:
    {
        returnValue = F("Allinger Str.");
        break;
    }
    case 5333:
    {
        returnValue = F("Allingerweg");
        break;
    }
    case 5334:
    {
        returnValue = F("Allinghausener Str.");
        break;
    }
    case 5335:
    {
        returnValue = F("Allinghofstr.");
        break;
    }
    case 5336:
    {
        returnValue = F("Allkampstr.");
        break;
    }
    case 5337:
    {
        returnValue = F("Allkofener Str.");
        break;
    }
    case 5338:
    {
        returnValue = F("Allmand");
        break;
    }
    case 5339:
    {
        returnValue = F("Allmand-Weg");
        break;
    }
    case 5340:
    {
        returnValue = F("Allmandenstr.");
        break;
    }
    case 5341:
    {
        returnValue = F("Allmandgasse");
        break;
    }
    case 5342:
    {
        returnValue = F("Allmandgäßle");
        break;
    }
    case 5343:
    {
        returnValue = F("Allmandklinge");
        break;
    }
    case 5344:
    {
        returnValue = F("Allmandsteige");
        break;
    }
    case 5345:
    {
        returnValue = F("Allmandstr.");
        break;
    }
    case 5346:
    {
        returnValue = F("Allmandweg");
        break;
    }
    case 5347:
    {
        returnValue = F("Allmannsberg");
        break;
    }
    case 5348:
    {
        returnValue = F("Allmannsdorfer Str.");
        break;
    }
    case 5349:
    {
        returnValue = F("Allmannsdorfer Weg");
        break;
    }
    case 5350:
    {
        returnValue = F("Allmannshausen");
        break;
    }
    case 5351:
    {
        returnValue = F("Allmannshornweg");
        break;
    }
    case 5352:
    {
        returnValue = F("Allmannspforte");
        break;
    }
    case 5353:
    {
        returnValue = F("Allmannsried");
        break;
    }
    case 5354:
    {
        returnValue = F("Allmannstr.");
        break;
    }
    case 5355:
    {
        returnValue = F("Allmannsweierer Hauptstr.");
        break;
    }
    case 5356:
    {
        returnValue = F("Allmannsweierer Str.");
        break;
    }
    case 5357:
    {
        returnValue = F("Allmannsweiler Str.");
        break;
    }
    case 5358:
    {
        returnValue = F("Allmannsweilerstr.");
        break;
    }
    case 5359:
    {
        returnValue = F("Allmansweilerstr.");
        break;
    }
    case 5360:
    {
        returnValue = F("Allmelingstr.");
        break;
    }
    case 5361:
    {
        returnValue = F("Allmend");
        break;
    }
    case 5362:
    {
        returnValue = F("Allmend Hauptweg");
        break;
    }
    case 5363:
    {
        returnValue = F("Allmendbrunnenweg");
        break;
    }
    case 5364:
    {
        returnValue = F("Allmendbrücke");
        break;
    }
    case 5365:
    {
        returnValue = F("Allmendbuck");
        break;
    }
    case 5366:
    {
        returnValue = F("Allmendbühl");
        break;
    }
    case 5367:
    {
        returnValue = F("Allmende");
        break;
    }
    case 5368:
    {
        returnValue = F("Allmendenweg");
        break;
    }
    case 5369:
    {
        returnValue = F("Allmendestr.");
        break;
    }
    case 5370:
    {
        returnValue = F("Allmendeweg");
        break;
    }
    case 5371:
    {
        returnValue = F("Allmendgasse");
        break;
    }
    case 5372:
    {
        returnValue = F("Allmendgaß");
        break;
    }
    case 5373:
    {
        returnValue = F("Allmendgrütt");
        break;
    }
    case 5374:
    {
        returnValue = F("Allmendgärten");
        break;
    }
    case 5375:
    {
        returnValue = F("Allmendgässle");
        break;
    }
    case 5376:
    {
        returnValue = F("Allmendinger");
        break;
    }
    case 5377:
    {
        returnValue = F("Allmendinger Str.");
        break;
    }
    case 5378:
    {
        returnValue = F("Allmendpfad");
        break;
    }
    case 5379:
    {
        returnValue = F("Allmendplatz");
        break;
    }
    case 5380:
    {
        returnValue = F("Allmendrain");
        break;
    }
    case 5381:
    {
        returnValue = F("Allmendrainstr.");
        break;
    }
    case 5382:
    {
        returnValue = F("Allmendsand");
        break;
    }
    case 5383:
    {
        returnValue = F("Allmendsberg");
        break;
    }
    case 5384:
    {
        returnValue = F("Allmendstr.");
        break;
    }
    case 5385:
    {
        returnValue = F("Allmendsweg");
        break;
    }
    case 5386:
    {
        returnValue = F("Allmendwaldweg");
        break;
    }
    case 5387:
    {
        returnValue = F("Allmendwasen");
        break;
    }
    case 5388:
    {
        returnValue = F("Allmendweg");
        break;
    }
    case 5389:
    {
        returnValue = F("Allmendwäldleweg");
        break;
    }
    case 5390:
    {
        returnValue = F("Allmendzeilstr.");
        break;
    }
    case 5391:
    {
        returnValue = F("Allmendäckerle");
        break;
    }
    case 5392:
    {
        returnValue = F("Allmendäckerstr.");
        break;
    }
    case 5393:
    {
        returnValue = F("Allmenröder Str.");
        break;
    }
    case 5394:
    {
        returnValue = F("Allmenröder Weg");
        break;
    }
    case 5395:
    {
        returnValue = F("Allmenweg");
        break;
    }
    case 5396:
    {
        returnValue = F("Allmering");
        break;
    }
    case 5397:
    {
        returnValue = F("Allmersallee");
        break;
    }
    case 5398:
    {
        returnValue = F("Allmersbacher Str.");
        break;
    }
    case 5399:
    {
        returnValue = F("Allmerspfad");
        break;
    }
    case 5400:
    {
        returnValue = F("Allmersstr.");
        break;
    }
    case 5401:
    {
        returnValue = F("Allmersweg");
        break;
    }
    case 5402:
    {
        returnValue = F("Allmerweg");
        break;
    }
    case 5403:
    {
        returnValue = F("Allmeyweg");
        break;
    }
    case 5404:
    {
        returnValue = F("Allming");
        break;
    }
    case 5405:
    {
        returnValue = F("Allmingweg");
        break;
    }
    case 5406:
    {
        returnValue = F("Allmoor");
        break;
    }
    case 5407:
    {
        returnValue = F("Allmoorweg");
        break;
    }
    case 5408:
    {
        returnValue = F("Allmunzener Str.");
        break;
    }
    case 5409:
    {
        returnValue = F("Allmuser Str.");
        break;
    }
    case 5410:
    {
        returnValue = F("Allmuthstr.");
        break;
    }
    case 5411:
    {
        returnValue = F("Allnaer Mühle");
        break;
    }
    case 5412:
    {
        returnValue = F("Allnastr.");
        break;
    }
    case 5413:
    {
        returnValue = F("Allnatalstr.");
        break;
    }
    case 5414:
    {
        returnValue = F("Allofskamp");
        break;
    }
    case 5415:
    {
        returnValue = F("Allonnesstr.");
        break;
    }
    case 5416:
    {
        returnValue = F("Allouagnestr.");
        break;
    }
    case 5417:
    {
        returnValue = F("Allradclub Herzogswalde e.V.");
        break;
    }
    case 5418:
    {
        returnValue = F("Allrather Platz");
        break;
    }
    case 5419:
    {
        returnValue = F("Allrather Str.");
        break;
    }
    case 5420:
    {
        returnValue = F("Allroder Loipe");
        break;
    }
    case 5421:
    {
        returnValue = F("Allrottweg");
        break;
    }
    case 5422:
    {
        returnValue = F("Allröder Osterberg");
        break;
    }
    case 5423:
    {
        returnValue = F("Allröder Weg");
        break;
    }
    case 5424:
    {
        returnValue = F("Allrüschenweg");
        break;
    }
    case 5425:
    {
        returnValue = F("Allscheider Str.");
        break;
    }
    case 5426:
    {
        returnValue = F("Allscheidt");
        break;
    }
    case 5427:
    {
        returnValue = F("Allschwiler Weg");
        break;
    }
    case 5428:
    {
        returnValue = F("Allstedter Chaussee");
        break;
    }
    case 5429:
    {
        returnValue = F("Allstedter Str.");
        break;
    }
    case 5430:
    {
        returnValue = F("Allstr.");
        break;
    }
    case 5431:
    {
        returnValue = F("Alltäger Str.");
        break;
    }
    case 5432:
    {
        returnValue = F("Allumer Brücke");
        break;
    }
    case 5433:
    {
        returnValue = F("Allverdensweg");
        break;
    }
    case 5434:
    {
        returnValue = F("Allwardtshof");
        break;
    }
    case 5435:
    {
        returnValue = F("Allweggasse");
        break;
    }
    case 5436:
    {
        returnValue = F("Allweh");
        break;
    }
    case 5437:
    {
        returnValue = F("Allweilerstr.");
        break;
    }
    case 5438:
    {
        returnValue = F("Allwendstr.");
        break;
    }
    case 5439:
    {
        returnValue = F("Allwenne");
        break;
    }
    case 5440:
    {
        returnValue = F("Allwies");
        break;
    }
    case 5441:
    {
        returnValue = F("Allwiese");
        break;
    }
    case 5442:
    {
        returnValue = F("Allwördener Deich");
        break;
    }
    case 5443:
    {
        returnValue = F("Allée Seiches-sur-le-Loir");
        break;
    }
    case 5444:
    {
        returnValue = F("Alléstr.");
        break;
    }
    case 5445:
    {
        returnValue = F("Alm");
        break;
    }
    case 5446:
    {
        returnValue = F("Alma Weg");
        break;
    }
    case 5447:
    {
        returnValue = F("Alma-Mahler-Platz");
        break;
    }
    case 5448:
    {
        returnValue = F("Alma-Mahler-Weg");
        break;
    }
    case 5449:
    {
        returnValue = F("Alma-Mahler-Werfel-Str.");
        break;
    }
    case 5450:
    {
        returnValue = F("Alma-Mühlhausen-Str.");
        break;
    }
    case 5451:
    {
        returnValue = F("Alma-Riedel-Str.");
        break;
    }
    case 5452:
    {
        returnValue = F("Alma-Rogge-Str.");
        break;
    }
    case 5453:
    {
        returnValue = F("Alma-Rogge-Weg");
        break;
    }
    case 5454:
    {
        returnValue = F("Alma-Seidel-Weg");
        break;
    }
    case 5455:
    {
        returnValue = F("Alma-Str.");
        break;
    }
    case 5456:
    {
        returnValue = F("Almabahn");
        break;
    }
    case 5457:
    {
        returnValue = F("Almai");
        break;
    }
    case 5458:
    {
        returnValue = F("Almarinstr.");
        break;
    }
    case 5459:
    {
        returnValue = F("Almarstr.");
        break;
    }
    case 5460:
    {
        returnValue = F("Almastr.");
        break;
    }
    case 5461:
    {
        returnValue = F("Almau");
        break;
    }
    case 5462:
    {
        returnValue = F("Almaweg");
        break;
    }
    case 5463:
    {
        returnValue = F("Almbach");
        break;
    }
    case 5464:
    {
        returnValue = F("Almbachweg");
        break;
    }
    case 5465:
    {
        returnValue = F("Almbergstr.");
        break;
    }
    case 5466:
    {
        returnValue = F("Almbergweg");
        break;
    }
    case 5467:
    {
        returnValue = F("Almeaue");
        break;
    }
    case 5468:
    {
        returnValue = F("Almeauen");
        break;
    }
    case 5469:
    {
        returnValue = F("Almebachstr.");
        break;
    }
    case 5470:
    {
        returnValue = F("Almecke");
        break;
    }
    case 5471:
    {
        returnValue = F("Almedeich");
        break;
    }
    case 5472:
    {
        returnValue = F("Almehof");
        break;
    }
    case 5473:
    {
        returnValue = F("Almeidaweg");
        break;
    }
    case 5474:
    {
        returnValue = F("Almeloer Str.");
        break;
    }
    case 5475:
    {
        returnValue = F("Almelostr.");
        break;
    }
    case 5476:
    {
        returnValue = F("Almelstr.");
        break;
    }
    case 5477:
    {
        returnValue = F("Almen");
        break;
    }
    case 5478:
    {
        returnValue = F("Almenaer Berg");
        break;
    }
    case 5479:
    {
        returnValue = F("Almenaer Str.");
        break;
    }
    case 5480:
    {
        returnValue = F("Almend-Fahrenberg-Weg");
        break;
    }
    case 5481:
    {
        returnValue = F("Almendorfer Str.");
        break;
    }
    case 5482:
    {
        returnValue = F("Almendweg");
        break;
    }
    case 5483:
    {
        returnValue = F("Almengarten");
        break;
    }
    case 5484:
    {
        returnValue = F("Almenkopfweg");
        break;
    }
    case 5485:
    {
        returnValue = F("Almenplatz");
        break;
    }
    case 5486:
    {
        returnValue = F("Almenrauschstr.");
        break;
    }
    case 5487:
    {
        returnValue = F("Almenrauschweg");
        break;
    }
    case 5488:
    {
        returnValue = F("Almenscheid");
        break;
    }
    case 5489:
    {
        returnValue = F("Almensleber Weg");
        break;
    }
    case 5490:
    {
        returnValue = F("Almenstr.");
        break;
    }
    case 5491:
    {
        returnValue = F("Almenweg");
        break;
    }
    case 5492:
    {
        returnValue = F("Almepark");
        break;
    }
    case 5493:
    {
        returnValue = F("Almer Freibad");
        break;
    }
    case 5494:
    {
        returnValue = F("Almer Kirchweg");
        break;
    }
    case 5495:
    {
        returnValue = F("Almer Str.");
        break;
    }
    case 5496:
    {
        returnValue = F("Almererweg");
        break;
    }
    case 5497:
    {
        returnValue = F("Almerfeldweg");
        break;
    }
    case 5498:
    {
        returnValue = F("Almering");
        break;
    }
    case 5499:
    {
        returnValue = F("Almersbacher Str.");
        break;
    }
    case 5500:
    {
        returnValue = F("Almersbacher Weg");
        break;
    }
    case 5501:
    {
        returnValue = F("Almersstr.");
        break;
    }
    case 5502:
    {
        returnValue = F("Almerstr.");
        break;
    }
    case 5503:
    {
        returnValue = F("Almersweg");
        break;
    }
    case 5504:
    {
        returnValue = F("Almerswinder Str.");
        break;
    }
    case 5505:
    {
        returnValue = F("Almerswinder Weg");
        break;
    }
    case 5506:
    {
        returnValue = F("Almertsham");
        break;
    }
    case 5507:
    {
        returnValue = F("Almerweg");
        break;
    }
    case 5508:
    {
        returnValue = F("Almesbach");
        break;
    }
    case 5509:
    {
        returnValue = F("Almesbacher Weg");
        break;
    }
    case 5510:
    {
        returnValue = F("Almeschlag");
        break;
    }
    case 5511:
    {
        returnValue = F("Almestr.");
        break;
    }
    case 5512:
    {
        returnValue = F("Almetal");
        break;
    }
    case 5513:
    {
        returnValue = F("Almeweg");
        break;
    }
    case 5514:
    {
        returnValue = F("Almfeld");
        break;
    }
    case 5515:
    {
        returnValue = F("Almfeldstr.");
        break;
    }
    case 5516:
    {
        returnValue = F("Almgasse");
        break;
    }
    case 5517:
    {
        returnValue = F("Almhofweg");
        break;
    }
    case 5518:
    {
        returnValue = F("Almhorster Str.");
        break;
    }
    case 5519:
    {
        returnValue = F("Almhöhe");
        break;
    }
    case 5520:
    {
        returnValue = F("Almhüttenweg");
        break;
    }
    case 5521:
    {
        returnValue = F("Almingweg");
        break;
    }
    case 5522:
    {
        returnValue = F("Almker Str.");
        break;
    }
    case 5523:
    {
        returnValue = F("Almooswiesen");
        break;
    }
    case 5524:
    {
        returnValue = F("Almose");
        break;
    }
    case 5525:
    {
        returnValue = F("Almosenbachhorn");
        break;
    }
    case 5526:
    {
        returnValue = F("Almosenbrunnenschneise");
        break;
    }
    case 5527:
    {
        returnValue = F("Almosenpfad");
        break;
    }
    case 5528:
    {
        returnValue = F("Almosenrain");
        break;
    }
    case 5529:
    {
        returnValue = F("Almosenweg");
        break;
    }
    case 5530:
    {
        returnValue = F("Almrauschstr.");
        break;
    }
    case 5531:
    {
        returnValue = F("Almrauschweg");
        break;
    }
    case 5532:
    {
        returnValue = F("Almricher Weg");
        break;
    }
    case 5533:
    {
        returnValue = F("Almsche Gasse");
        break;
    }
    case 5534:
    {
        returnValue = F("Almseeweg");
        break;
    }
    case 5535:
    {
        returnValue = F("Almshuberweg");
        break;
    }
    case 5536:
    {
        returnValue = F("Almshäuser Weg");
        break;
    }
    case 5537:
    {
        returnValue = F("Almsloher Dorfstr.");
        break;
    }
    case 5538:
    {
        returnValue = F("Almsloher Str.");
        break;
    }
    case 5539:
    {
        returnValue = F("Almstedter Str.");
        break;
    }
    case 5540:
    {
        returnValue = F("Almstorf");
        break;
    }
    case 5541:
    {
        returnValue = F("Almstr.");
        break;
    }
    case 5542:
    {
        returnValue = F("Almsweg");
        break;
    }
    case 5543:
    {
        returnValue = F("Almtweg");
        break;
    }
    case 5544:
    {
        returnValue = F("Almushof");
        break;
    }
    case 5545:
    {
        returnValue = F("Almusweg");
        break;
    }
    case 5546:
    {
        returnValue = F("Almut-Weingart-Weg");
        break;
    }
    case 5547:
    {
        returnValue = F("Almuthweg");
        break;
    }
    case 5548:
    {
        returnValue = F("Almutstr.");
        break;
    }
    case 5549:
    {
        returnValue = F("Almuñécarstr.");
        break;
    }
    case 5550:
    {
        returnValue = F("Almweg");
        break;
    }
    case 5551:
    {
        returnValue = F("Almwiese");
        break;
    }
    case 5552:
    {
        returnValue = F("Almwirtsberg");
        break;
    }
    case 5553:
    {
        returnValue = F("Alnpeckstr.");
        break;
    }
    case 5554:
    {
        returnValue = F("Alois - Herth - Anlage");
        break;
    }
    case 5555:
    {
        returnValue = F("Alois-Alzheimer-Allee");
        break;
    }
    case 5556:
    {
        returnValue = F("Alois-Andritzki-Str.");
        break;
    }
    case 5557:
    {
        returnValue = F("Alois-Aschauer-Str.");
        break;
    }
    case 5558:
    {
        returnValue = F("Alois-Barth-Str.");
        break;
    }
    case 5559:
    {
        returnValue = F("Alois-Bauer-Str.");
        break;
    }
    case 5560:
    {
        returnValue = F("Alois-Beerhalter-Str.");
        break;
    }
    case 5561:
    {
        returnValue = F("Alois-Berger-Allee");
        break;
    }
    case 5562:
    {
        returnValue = F("Alois-Bergmann-Franken-Str.");
        break;
    }
    case 5563:
    {
        returnValue = F("Alois-Bergmann-Weg");
        break;
    }
    case 5564:
    {
        returnValue = F("Alois-Birner-Weg");
        break;
    }
    case 5565:
    {
        returnValue = F("Alois-Brems-Str.");
        break;
    }
    case 5566:
    {
        returnValue = F("Alois-Breu-Str.");
        break;
    }
    case 5567:
    {
        returnValue = F("Alois-Buchleitner-Weg");
        break;
    }
    case 5568:
    {
        returnValue = F("Alois-Burger-Str.");
        break;
    }
    case 5569:
    {
        returnValue = F("Alois-Bölte-Str.");
        break;
    }
    case 5570:
    {
        returnValue = F("Alois-Bürgermeister-Weg");
        break;
    }
    case 5571:
    {
        returnValue = F("Alois-Dantonello-Str.");
        break;
    }
    case 5572:
    {
        returnValue = F("Alois-Degler-Str.");
        break;
    }
    case 5573:
    {
        returnValue = F("Alois-Deschler-Str.");
        break;
    }
    case 5574:
    {
        returnValue = F("Alois-Eberl-Str.");
        break;
    }
    case 5575:
    {
        returnValue = F("Alois-Eckert-Str.");
        break;
    }
    case 5576:
    {
        returnValue = F("Alois-Eckert-Weg");
        break;
    }
    case 5577:
    {
        returnValue = F("Alois-Elsner-Str.");
        break;
    }
    case 5578:
    {
        returnValue = F("Alois-Frank-Weg");
        break;
    }
    case 5579:
    {
        returnValue = F("Alois-Fritsch-Str.");
        break;
    }
    case 5580:
    {
        returnValue = F("Alois-Fuchs-Weg");
        break;
    }
    case 5581:
    {
        returnValue = F("Alois-Funk-Str.");
        break;
    }
    case 5582:
    {
        returnValue = F("Alois-Fölsl-Weg");
        break;
    }
    case 5583:
    {
        returnValue = F("Alois-Fürst-Str.");
        break;
    }
    case 5584:
    {
        returnValue = F("Alois-Gall-Str.");
        break;
    }
    case 5585:
    {
        returnValue = F("Alois-Geisberger Str.");
        break;
    }
    case 5586:
    {
        returnValue = F("Alois-Gessner-Weg");
        break;
    }
    case 5587:
    {
        returnValue = F("Alois-Gratz-Str.");
        break;
    }
    case 5588:
    {
        returnValue = F("Alois-Greiner-Str.");
        break;
    }
    case 5589:
    {
        returnValue = F("Alois-Grimm-Str.");
        break;
    }
    case 5590:
    {
        returnValue = F("Alois-Gruber-Weg");
        break;
    }
    case 5591:
    {
        returnValue = F("Alois-Gundalach-Str.");
        break;
    }
    case 5592:
    {
        returnValue = F("Alois-Gäßl-Str.");
        break;
    }
    case 5593:
    {
        returnValue = F("Alois-Haehser-Str.");
        break;
    }
    case 5594:
    {
        returnValue = F("Alois-Harbeck-Platz");
        break;
    }
    case 5595:
    {
        returnValue = F("Alois-Harlander-Str.");
        break;
    }
    case 5596:
    {
        returnValue = F("Alois-Hauser-Str.");
        break;
    }
    case 5597:
    {
        returnValue = F("Alois-Herb-Str.");
        break;
    }
    case 5598:
    {
        returnValue = F("Alois-Hildenbrand-Str.");
        break;
    }
    case 5599:
    {
        returnValue = F("Alois-Hirt-Str.");
        break;
    }
    case 5600:
    {
        returnValue = F("Alois-Johannes-Lippl-Str.");
        break;
    }
    case 5601:
    {
        returnValue = F("Alois-Josef-Ruckert-Str.");
        break;
    }
    case 5602:
    {
        returnValue = F("Alois-Jäger-Platz");
        break;
    }
    case 5603:
    {
        returnValue = F("Alois-Kainz-Str.");
        break;
    }
    case 5604:
    {
        returnValue = F("Alois-Kimmelmann-Str.");
        break;
    }
    case 5605:
    {
        returnValue = F("Alois-Knauer-Str.");
        break;
    }
    case 5606:
    {
        returnValue = F("Alois-Koch-Str.");
        break;
    }
    case 5607:
    {
        returnValue = F("Alois-Kraemer-Str.");
        break;
    }
    case 5608:
    {
        returnValue = F("Alois-Kölbl-Weg");
        break;
    }
    case 5609:
    {
        returnValue = F("Alois-Lang-Str.");
        break;
    }
    case 5610:
    {
        returnValue = F("Alois-Leitner-Str.");
        break;
    }
    case 5611:
    {
        returnValue = F("Alois-Lemke-Str.");
        break;
    }
    case 5612:
    {
        returnValue = F("Alois-Leuchte-Weg");
        break;
    }
    case 5613:
    {
        returnValue = F("Alois-Link-Platz");
        break;
    }
    case 5614:
    {
        returnValue = F("Alois-Lödige-Str.");
        break;
    }
    case 5615:
    {
        returnValue = F("Alois-Maier-Str.");
        break;
    }
    case 5616:
    {
        returnValue = F("Alois-Mandl-Ring");
        break;
    }
    case 5617:
    {
        returnValue = F("Alois-Markert-Str.");
        break;
    }
    case 5618:
    {
        returnValue = F("Alois-Matheis-Str.");
        break;
    }
    case 5619:
    {
        returnValue = F("Alois-Melcher-Str.");
        break;
    }
    case 5620:
    {
        returnValue = F("Alois-Mengele-Str.");
        break;
    }
    case 5621:
    {
        returnValue = F("Alois-Metzger-Str.");
        break;
    }
    case 5622:
    {
        returnValue = F("Alois-Mussner-Str.");
        break;
    }
    case 5623:
    {
        returnValue = F("Alois-Muttenhammer-Str.");
        break;
    }
    case 5624:
    {
        returnValue = F("Alois-Mutz-Str.");
        break;
    }
    case 5625:
    {
        returnValue = F("Alois-Mück-Str.");
        break;
    }
    case 5626:
    {
        returnValue = F("Alois-Neymeyer-Str.");
        break;
    }
    case 5627:
    {
        returnValue = F("Alois-Oberauer-Str.");
        break;
    }
    case 5628:
    {
        returnValue = F("Alois-Pollinger-Str.");
        break;
    }
    case 5629:
    {
        returnValue = F("Alois-Probst-Str.");
        break;
    }
    case 5630:
    {
        returnValue = F("Alois-Rehrl-Str.");
        break;
    }
    case 5631:
    {
        returnValue = F("Alois-Reiner-Str.");
        break;
    }
    case 5632:
    {
        returnValue = F("Alois-Rid-Weg");
        break;
    }
    case 5633:
    {
        returnValue = F("Alois-Riedl-Str.");
        break;
    }
    case 5634:
    {
        returnValue = F("Alois-Ruf-Weg");
        break;
    }
    case 5635:
    {
        returnValue = F("Alois-Rößler-Str.");
        break;
    }
    case 5636:
    {
        returnValue = F("Alois-Sartory-Str.");
        break;
    }
    case 5637:
    {
        returnValue = F("Alois-Schenk-Str.");
        break;
    }
    case 5638:
    {
        returnValue = F("Alois-Schindler-Str.");
        break;
    }
    case 5639:
    {
        returnValue = F("Alois-Schlachter-Weg");
        break;
    }
    case 5640:
    {
        returnValue = F("Alois-Schmid-Str.");
        break;
    }
    case 5641:
    {
        returnValue = F("Alois-Schnorr-Str.");
        break;
    }
    case 5642:
    {
        returnValue = F("Alois-Schober Str.");
        break;
    }
    case 5643:
    {
        returnValue = F("Alois-Schoppe-Weg");
        break;
    }
    case 5644:
    {
        returnValue = F("Alois-Schraufstetter-Str.");
        break;
    }
    case 5645:
    {
        returnValue = F("Alois-Schwörer-Str.");
        break;
    }
    case 5646:
    {
        returnValue = F("Alois-Seibold-Str.");
        break;
    }
    case 5647:
    {
        returnValue = F("Alois-Senefelder-Allee");
        break;
    }
    case 5648:
    {
        returnValue = F("Alois-Senefelder-Str.");
        break;
    }
    case 5649:
    {
        returnValue = F("Alois-Skatulla-Str.");
        break;
    }
    case 5650:
    {
        returnValue = F("Alois-Sperrer-Str.");
        break;
    }
    case 5651:
    {
        returnValue = F("Alois-Staab-Str.");
        break;
    }
    case 5652:
    {
        returnValue = F("Alois-Stadler-Str.");
        break;
    }
    case 5653:
    {
        returnValue = F("Alois-Steinecker-Str.");
        break;
    }
    case 5654:
    {
        returnValue = F("Alois-Stettner-Str.");
        break;
    }
    case 5655:
    {
        returnValue = F("Alois-Stöckl-Str.");
        break;
    }
    case 5656:
    {
        returnValue = F("Alois-Tenschert-Ring");
        break;
    }
    case 5657:
    {
        returnValue = F("Alois-Thums-Str.");
        break;
    }
    case 5658:
    {
        returnValue = F("Alois-Türk-Str.");
        break;
    }
    case 5659:
    {
        returnValue = F("Alois-Vogedes-Str.");
        break;
    }
    case 5660:
    {
        returnValue = F("Alois-Wagner-Str.");
        break;
    }
    case 5661:
    {
        returnValue = F("Alois-Wenzel-Str.");
        break;
    }
    case 5662:
    {
        returnValue = F("Alois-Widmann-Str.");
        break;
    }
    case 5663:
    {
        returnValue = F("Alois-Wiehagen-Str.");
        break;
    }
    case 5664:
    {
        returnValue = F("Alois-Wiesböck-Str.");
        break;
    }
    case 5665:
    {
        returnValue = F("Alois-Zwislsberger-Str.");
        break;
    }
    case 5666:
    {
        returnValue = F("Alois-von-Brinz-Str.");
        break;
    }
    case 5667:
    {
        returnValue = F("Aloisia-Rand-Str.");
        break;
    }
    case 5668:
    {
        returnValue = F("Aloisiusweg");
        break;
    }
    case 5669:
    {
        returnValue = F("Aloisiweg");
        break;
    }
    case 5670:
    {
        returnValue = F("Aloisstr.");
        break;
    }
    case 5671:
    {
        returnValue = F("Alojs-Andricki-Str.");
        break;
    }
    case 5672:
    {
        returnValue = F("Alolfstr.");
        break;
    }
    case 5673:
    {
        returnValue = F("Aloys Alt Str.");
        break;
    }
    case 5674:
    {
        returnValue = F("Aloys-Barth-Str.");
        break;
    }
    case 5675:
    {
        returnValue = F("Aloys-Bunge-Platz");
        break;
    }
    case 5676:
    {
        returnValue = F("Aloys-Drilling-Str.");
        break;
    }
    case 5677:
    {
        returnValue = F("Aloys-Eckermann-Str.");
        break;
    }
    case 5678:
    {
        returnValue = F("Aloys-Endrich-Weg");
        break;
    }
    case 5679:
    {
        returnValue = F("Aloys-Feldmann-Str.");
        break;
    }
    case 5680:
    {
        returnValue = F("Aloys-Fischer-Str.");
        break;
    }
    case 5681:
    {
        returnValue = F("Aloys-Korn-Str.");
        break;
    }
    case 5682:
    {
        returnValue = F("Aloys-Kreye-Str.");
        break;
    }
    case 5683:
    {
        returnValue = F("Aloys-Mennekes-Str.");
        break;
    }
    case 5684:
    {
        returnValue = F("Aloys-Müller-Weg");
        break;
    }
    case 5685:
    {
        returnValue = F("Aloys-Odenthal-Platz");
        break;
    }
    case 5686:
    {
        returnValue = F("Aloys-Ruppel-Str.");
        break;
    }
    case 5687:
    {
        returnValue = F("Aloys-Rüberg-Str.");
        break;
    }
    case 5688:
    {
        returnValue = F("Aloys-Schneider-Str.");
        break;
    }
    case 5689:
    {
        returnValue = F("Aloys-Scholze-Str.");
        break;
    }
    case 5690:
    {
        returnValue = F("Aloys-Schreiber-Str.");
        break;
    }
    case 5691:
    {
        returnValue = F("Aloys-Schulte-Str.");
        break;
    }
    case 5692:
    {
        returnValue = F("Aloys-Senefelder-Str.");
        break;
    }
    case 5693:
    {
        returnValue = F("Aloys-Siegeroth-Str.");
        break;
    }
    case 5694:
    {
        returnValue = F("Aloys-Weddeling-Str.");
        break;
    }
    case 5695:
    {
        returnValue = F("Aloys-van-Gries-Str.");
        break;
    }
    case 5696:
    {
        returnValue = F("Aloysianastr.");
        break;
    }
    case 5697:
    {
        returnValue = F("Aloysius-Lauer-Str.");
        break;
    }
    case 5698:
    {
        returnValue = F("Aloysiusplatz");
        break;
    }
    case 5699:
    {
        returnValue = F("Aloysiusstr.");
        break;
    }
    case 5700:
    {
        returnValue = F("Aloysstr.");
        break;
    }
    case 5701:
    {
        returnValue = F("Alpaka");
        break;
    }
    case 5702:
    {
        returnValue = F("Alpaka Gehege");
        break;
    }
    case 5703:
    {
        returnValue = F("Alpakas, Nandus");
        break;
    }
    case 5704:
    {
        returnValue = F("Alpakas/Lamas");
        break;
    }
    case 5705:
    {
        returnValue = F("Alpbachstr.");
        break;
    }
    case 5706:
    {
        returnValue = F("Alpe Eck");
        break;
    }
    case 5707:
    {
        returnValue = F("Alpe-Egg-Weg");
        break;
    }
    case 5708:
    {
        returnValue = F("Alpeblick");
        break;
    }
    case 5709:
    {
        returnValue = F("Alpen-Hangweg");
        break;
    }
    case 5710:
    {
        returnValue = F("Alpen-Talweg");
        break;
    }
    case 5711:
    {
        returnValue = F("Alpenbadstr.");
        break;
    }
    case 5712:
    {
        returnValue = F("Alpenblick");
        break;
    }
    case 5713:
    {
        returnValue = F("Alpenblickstr.");
        break;
    }
    case 5714:
    {
        returnValue = F("Alpenblickweg");
        break;
    }
    case 5715:
    {
        returnValue = F("Alpendohlenweg");
        break;
    }
    case 5716:
    {
        returnValue = F("Alpener Str.");
        break;
    }
    case 5717:
    {
        returnValue = F("Alpenheideweg");
        break;
    }
    case 5718:
    {
        returnValue = F("Alpenkorpsstr.");
        break;
    }
    case 5719:
    {
        returnValue = F("Alpenkönigweg");
        break;
    }
    case 5720:
    {
        returnValue = F("Alpenpfad");
        break;
    }
    case 5721:
    {
        returnValue = F("Alpenring");
        break;
    }
    case 5722:
    {
        returnValue = F("Alpenroder Str.");
        break;
    }
    case 5723:
    {
        returnValue = F("Alpenrosenstr.");
        break;
    }
    case 5724:
    {
        returnValue = F("Alpenrosenweg");
        break;
    }
    case 5725:
    {
        returnValue = F("Alpenstieg");
        break;
    }
    case 5726:
    {
        returnValue = F("Alpenstr.");
        break;
    }
    case 5727:
    {
        returnValue = F("Alpenstrandläuferweg");
        break;
    }
    case 5728:
    {
        returnValue = F("Alpentalstr.");
        break;
    }
    case 5729:
    {
        returnValue = F("Alpenveilchenstr.");
        break;
    }
    case 5730:
    {
        returnValue = F("Alpenveilchenweg");
        break;
    }
    case 5731:
    {
        returnValue = F("Alpenweg");
        break;
    }
    case 5732:
    {
        returnValue = F("Alper Str.");
        break;
    }
    case 5733:
    {
        returnValue = F("Alperbrück");
        break;
    }
    case 5734:
    {
        returnValue = F("Alperheide");
        break;
    }
    case 5735:
    {
        returnValue = F("Alperhofweg");
        break;
    }
    case 5736:
    {
        returnValue = F("Alpermühle");
        break;
    }
    case 5737:
    {
        returnValue = F("Alpers Koppel");
        break;
    }
    case 5738:
    {
        returnValue = F("Alperscheider Weg");
        break;
    }
    case 5739:
    {
        returnValue = F("Alpersdorf");
        break;
    }
    case 5740:
    {
        returnValue = F("Alpersdorfer Str.");
        break;
    }
    case 5741:
    {
        returnValue = F("Alpershausen");
        break;
    }
    case 5742:
    {
        returnValue = F("Alpershausener Weg");
        break;
    }
    case 5743:
    {
        returnValue = F("Alpershauser Str.");
        break;
    }
    case 5744:
    {
        returnValue = F("Alpersstr.");
        break;
    }
    case 5745:
    {
        returnValue = F("Alperstedter Str.");
        break;
    }
    case 5746:
    {
        returnValue = F("Alperstedter Weg");
        break;
    }
    case 5747:
    {
        returnValue = F("Alperting");
        break;
    }
    case 5748:
    {
        returnValue = F("Alpestr.");
        break;
    }
    case 5749:
    {
        returnValue = F("Alpetalstr.");
        break;
    }
    case 5750:
    {
        returnValue = F("Alpfeldstr.");
        break;
    }
    case 5751:
    {
        returnValue = F("Alpfenstr.");
        break;
    }
    case 5752:
    {
        returnValue = F("Alpgarten");
        break;
    }
    case 5753:
    {
        returnValue = F("Alpgasse");
        break;
    }
    case 5754:
    {
        returnValue = F("Alpgaustr.");
        break;
    }
    case 5755:
    {
        returnValue = F("Alpheim-Weg");
        break;
    }
    case 5756:
    {
        returnValue = F("Alphons-Hecking-Platz");
        break;
    }
    case 5757:
    {
        returnValue = F("Alphornstr.");
        break;
    }
    case 5758:
    {
        returnValue = F("Alpina-Ring");
        break;
    }
    case 5759:
    {
        returnValue = F("Alpinenstr.");
        break;
    }
    case 5760:
    {
        returnValue = F("Alpiner Steig");
        break;
    }
    case 5761:
    {
        returnValue = F("Alpinestr.");
        break;
    }
    case 5762:
    {
        returnValue = F("Alpinum");
        break;
    }
    case 5763:
    {
        returnValue = F("Alpirsbacher Str.");
        break;
    }
    case 5764:
    {
        returnValue = F("Alpirsbacher Weg");
        break;
    }
    case 5765:
    {
        returnValue = F("Alpirsbachstr.");
        break;
    }
    case 5766:
    {
        returnValue = F("Alpkestr.");
        break;
    }
    case 5767:
    {
        returnValue = F("Alpmeweg");
        break;
    }
    case 5768:
    {
        returnValue = F("Alpseestr.");
        break;
    }
    case 5769:
    {
        returnValue = F("Alpseeweg");
        break;
    }
    case 5770:
    {
        returnValue = F("Alpspitzring");
        break;
    }
    case 5771:
    {
        returnValue = F("Alpspitzstr.");
        break;
    }
    case 5772:
    {
        returnValue = F("Alpspitzweg");
        break;
    }
    case 5773:
    {
        returnValue = F("Alpsrayer Str.");
        break;
    }
    case 5774:
    {
        returnValue = F("Alpsteigtobel");
        break;
    }
    case 5775:
    {
        returnValue = F("Alpsteinstr.");
        break;
    }
    case 5776:
    {
        returnValue = F("Alpsteinweg");
        break;
    }
    case 5777:
    {
        returnValue = F("Alpursaweg");
        break;
    }
    case 5778:
    {
        returnValue = F("Alpweg");
        break;
    }
    case 5779:
    {
        returnValue = F("Alpweg Lochbachtal");
        break;
    }
    case 5780:
    {
        returnValue = F("Alrafter Str.");
        break;
    }
    case 5781:
    {
        returnValue = F("Alram");
        break;
    }
    case 5782:
    {
        returnValue = F("Alramweg");
        break;
    }
    case 5783:
    {
        returnValue = F("Alraunenweg");
        break;
    }
    case 5784:
    {
        returnValue = F("Alreff");
        break;
    }
    case 5785:
    {
        returnValue = F("Alrich-Ibelings-Weg");
        break;
    }
    case 5786:
    {
        returnValue = F("Alrunastr.");
        break;
    }
    case 5787:
    {
        returnValue = F("Alruneweg");
        break;
    }
    case 5788:
    {
        returnValue = F("Alsbach");
        break;
    }
    case 5789:
    {
        returnValue = F("Alsbachblick");
        break;
    }
    case 5790:
    {
        returnValue = F("Alsbacher Str.");
        break;
    }
    case 5791:
    {
        returnValue = F("Alsbacher Weg");
        break;
    }
    case 5792:
    {
        returnValue = F("Alsbachstr.");
        break;
    }
    case 5793:
    {
        returnValue = F("Alsbachweg");
        break;
    }
    case 5794:
    {
        returnValue = F("Alsbergstr.");
        break;
    }
    case 5795:
    {
        returnValue = F("Alsbergweg");
        break;
    }
    case 5796:
    {
        returnValue = F("Alschbacher Hohl");
        break;
    }
    case 5797:
    {
        returnValue = F("Alschbacher Weg");
        break;
    }
    case 5798:
    {
        returnValue = F("Alschberger Weg");
        break;
    }
    case 5799:
    {
        returnValue = F("Alscherstr.");
        break;
    }
    case 5800:
    {
        returnValue = F("Alschleber Weg");
        break;
    }
    case 5801:
    {
        returnValue = F("Alsdorfer Hof");
        break;
    }
    case 5802:
    {
        returnValue = F("Alsdorfer Str.");
        break;
    }
    case 5803:
    {
        returnValue = F("Alsdorfer Weg");
        break;
    }
    case 5804:
    {
        returnValue = F("Alseeweg");
        break;
    }
    case 5805:
    {
        returnValue = F("Alsen");
        break;
    }
    case 5806:
    {
        returnValue = F("Alsenborner Str.");
        break;
    }
    case 5807:
    {
        returnValue = F("Alsenbrücker Str.");
        break;
    }
    case 5808:
    {
        returnValue = F("Alsenhof");
        break;
    }
    case 5809:
    {
        returnValue = F("Alsenplatz");
        break;
    }
    case 5810:
    {
        returnValue = F("Alsenskamp");
        break;
    }
    case 5811:
    {
        returnValue = F("Alsenstr.");
        break;
    }
    case 5812:
    {
        returnValue = F("Alsenthal");
        break;
    }
    case 5813:
    {
        returnValue = F("Alsenweg");
        break;
    }
    case 5814:
    {
        returnValue = F("Alsenzer Str.");
        break;
    }
    case 5815:
    {
        returnValue = F("Alsenzstr.");
        break;
    }
    case 5816:
    {
        returnValue = F("Alsenztalstr.");
        break;
    }
    case 5817:
    {
        returnValue = F("Alsenzweg");
        break;
    }
    case 5818:
    {
        returnValue = F("Alser Deich");
        break;
    }
    case 5819:
    {
        returnValue = F("Alser Hellmer");
        break;
    }
    case 5820:
    {
        returnValue = F("Alser Str.");
        break;
    }
    case 5821:
    {
        returnValue = F("Alserwurp");
        break;
    }
    case 5822:
    {
        returnValue = F("Alsfelder Str.");
        break;
    }
    case 5823:
    {
        returnValue = F("Alsfelder Tor");
        break;
    }
    case 5824:
    {
        returnValue = F("Alsfelder Warte");
        break;
    }
    case 5825:
    {
        returnValue = F("Alsfelder Weg");
        break;
    }
    case 5826:
    {
        returnValue = F("Alsfeldstr.");
        break;
    }
    case 5827:
    {
        returnValue = F("Alsforde");
        break;
    }
    case 5828:
    {
        returnValue = F("Alsheide");
        break;
    }
    case 5829:
    {
        returnValue = F("Alsheimer Str.");
        break;
    }
    case 5830:
    {
        returnValue = F("Alsheimer Weg");
        break;
    }
    case 5831:
    {
        returnValue = F("Alskerstr.");
        break;
    }
    case 5832:
    {
        returnValue = F("Alslebener Landstr.");
        break;
    }
    case 5833:
    {
        returnValue = F("Alslebener Str.");
        break;
    }
    case 5834:
    {
        returnValue = F("Alsstr.");
        break;
    }
    case 5835:
    {
        returnValue = F("Alst");
        break;
    }
    case 5836:
    {
        returnValue = F("Alstadener Str.");
        break;
    }
    case 5837:
    {
        returnValue = F("Alstater Str.");
        break;
    }
    case 5838:
    {
        returnValue = F("Alstedde");
        break;
    }
    case 5839:
    {
        returnValue = F("Alstedder Esch");
        break;
    }
    case 5840:
    {
        returnValue = F("Alstedder Grenze");
        break;
    }
    case 5841:
    {
        returnValue = F("Alstedder Str.");
        break;
    }
    case 5842:
    {
        returnValue = F("Alstedstr.");
        break;
    }
    case 5843:
    {
        returnValue = F("Alsteinstr.");
        break;
    }
    case 5844:
    {
        returnValue = F("Alster Kastianienallee");
        break;
    }
    case 5845:
    {
        returnValue = F("Alsterbogen");
        break;
    }
    case 5846:
    {
        returnValue = F("Alsterfeld");
        break;
    }
    case 5847:
    {
        returnValue = F("Alsterplatz");
        break;
    }
    case 5848:
    {
        returnValue = F("Alsterring");
        break;
    }
    case 5849:
    {
        returnValue = F("Alsterstieg");
        break;
    }
    case 5850:
    {
        returnValue = F("Alsterstr.");
        break;
    }
    case 5851:
    {
        returnValue = F("Alstertalweg");
        break;
    }
    case 5852:
    {
        returnValue = F("Alsterterrasse");
        break;
    }
    case 5853:
    {
        returnValue = F("Alstertwiete");
        break;
    }
    case 5854:
    {
        returnValue = F("Alsterweg");
        break;
    }
    case 5855:
    {
        returnValue = F("Alsterweiler Hauptstr.");
        break;
    }
    case 5856:
    {
        returnValue = F("Alsterwiesen");
        break;
    }
    case 5857:
    {
        returnValue = F("Alstinger Weg");
        break;
    }
    case 5858:
    {
        returnValue = F("Alstorfer Weg");
        break;
    }
    case 5859:
    {
        returnValue = F("Alstädter Str.");
        break;
    }
    case 5860:
    {
        returnValue = F("Alstätte");
        break;
    }
    case 5861:
    {
        returnValue = F("Alstätter Brook");
        break;
    }
    case 5862:
    {
        returnValue = F("Alstätter Friedhofstr.");
        break;
    }
    case 5863:
    {
        returnValue = F("Alstätter Str.");
        break;
    }
    case 5864:
    {
        returnValue = F("Alsumer Feld");
        break;
    }
    case 5865:
    {
        returnValue = F("Alsumer Hellme");
        break;
    }
    case 5866:
    {
        returnValue = F("Alsumer Specken");
        break;
    }
    case 5867:
    {
        returnValue = F("Alsumer Str.");
        break;
    }
    case 5868:
    {
        returnValue = F("Alsumer Weg");
        break;
    }
    case 5869:
    {
        returnValue = F("Alsweder Landstr.");
        break;
    }
    case 5870:
    {
        returnValue = F("Alsweder Ring");
        break;
    }
    case 5871:
    {
        returnValue = F("Alsweder Str.");
        break;
    }
    case 5872:
    {
        returnValue = F("Alsweilerstr.");
        break;
    }
    case 5873:
    {
        returnValue = F("Alt Addenhausen");
        break;
    }
    case 5874:
    {
        returnValue = F("Alt Ahrbeck");
        break;
    }
    case 5875:
    {
        returnValue = F("Alt Allertshofen");
        break;
    }
    case 5876:
    {
        returnValue = F("Alt Arendsee");
        break;
    }
    case 5877:
    {
        returnValue = F("Alt Astheim");
        break;
    }
    case 5878:
    {
        returnValue = F("Alt Auringen");
        break;
    }
    case 5879:
    {
        returnValue = F("Alt Bandau");
        break;
    }
    case 5880:
    {
        returnValue = F("Alt Bartelsdorfer Str.");
        break;
    }
    case 5881:
    {
        returnValue = F("Alt Bellahn");
        break;
    }
    case 5882:
    {
        returnValue = F("Alt Benneckenbeck");
        break;
    }
    case 5883:
    {
        returnValue = F("Alt Bestenbostel");
        break;
    }
    case 5884:
    {
        returnValue = F("Alt Bischofsheim");
        break;
    }
    case 5885:
    {
        returnValue = F("Alt Bleyener Deich");
        break;
    }
    case 5886:
    {
        returnValue = F("Alt Bork");
        break;
    }
    case 5887:
    {
        returnValue = F("Alt Bossel");
        break;
    }
    case 5888:
    {
        returnValue = F("Alt Brüssow");
        break;
    }
    case 5889:
    {
        returnValue = F("Alt Burgholzhausen");
        break;
    }
    case 5890:
    {
        returnValue = F("Alt Burlage");
        break;
    }
    case 5891:
    {
        returnValue = F("Alt Daber");
        break;
    }
    case 5892:
    {
        returnValue = F("Alt Dellnau");
        break;
    }
    case 5893:
    {
        returnValue = F("Alt Diele");
        break;
    }
    case 5894:
    {
        returnValue = F("Alt Diesdorf");
        break;
    }
    case 5895:
    {
        returnValue = F("Alt Drewitz");
        break;
    }
    case 5896:
    {
        returnValue = F("Alt Egart");
        break;
    }
    case 5897:
    {
        returnValue = F("Alt Eggesin");
        break;
    }
    case 5898:
    {
        returnValue = F("Alt Ferchau");
        break;
    }
    case 5899:
    {
        returnValue = F("Alt Fermersleben");
        break;
    }
    case 5900:
    {
        returnValue = F("Alt Frose");
        break;
    }
    case 5901:
    {
        returnValue = F("Alt Frösleer Weg");
        break;
    }
    case 5902:
    {
        returnValue = F("Alt Garger Str.");
        break;
    }
    case 5903:
    {
        returnValue = F("Alt Gladbach");
        break;
    }
    case 5904:
    {
        returnValue = F("Alt Glasow");
        break;
    }
    case 5905:
    {
        returnValue = F("Alt Glau");
        break;
    }
    case 5906:
    {
        returnValue = F("Alt Glowe");
        break;
    }
    case 5907:
    {
        returnValue = F("Alt Gollwitz");
        break;
    }
    case 5908:
    {
        returnValue = F("Alt Gonzenheim");
        break;
    }
    case 5909:
    {
        returnValue = F("Alt Granschütz");
        break;
    }
    case 5910:
    {
        returnValue = F("Alt Groß Hehlen");
        break;
    }
    case 5911:
    {
        returnValue = F("Alt Großziethen");
        break;
    }
    case 5912:
    {
        returnValue = F("Alt Güstelitz");
        break;
    }
    case 5913:
    {
        returnValue = F("Alt Hammoor");
        break;
    }
    case 5914:
    {
        returnValue = F("Alt Hartmannsdorfer Str.");
        break;
    }
    case 5915:
    {
        returnValue = F("Alt Helstorf");
        break;
    }
    case 5916:
    {
        returnValue = F("Alt Herges");
        break;
    }
    case 5917:
    {
        returnValue = F("Alt Herrenwyk");
        break;
    }
    case 5918:
    {
        returnValue = F("Alt Holzhauser Str.");
        break;
    }
    case 5919:
    {
        returnValue = F("Alt Hoxhohl");
        break;
    }
    case 5920:
    {
        returnValue = F("Alt Hubertushöhe");
        break;
    }
    case 5921:
    {
        returnValue = F("Alt Hustedt");
        break;
    }
    case 5922:
    {
        returnValue = F("Alt Hüsten");
        break;
    }
    case 5923:
    {
        returnValue = F("Alt Ihren");
        break;
    }
    case 5924:
    {
        returnValue = F("Alt Ipweger Weg");
        break;
    }
    case 5925:
    {
        returnValue = F("Alt Isenhagen");
        break;
    }
    case 5926:
    {
        returnValue = F("Alt Jassewitzer Str.");
        break;
    }
    case 5927:
    {
        returnValue = F("Alt Karlseck");
        break;
    }
    case 5928:
    {
        returnValue = F("Alt Karstädter Weg");
        break;
    }
    case 5929:
    {
        returnValue = F("Alt Kirchweg");
        break;
    }
    case 5930:
    {
        returnValue = F("Alt Klein Bülten");
        break;
    }
    case 5931:
    {
        returnValue = F("Alt Kleinziethen");
        break;
    }
    case 5932:
    {
        returnValue = F("Alt Kolpin");
        break;
    }
    case 5933:
    {
        returnValue = F("Alt Kosenow");
        break;
    }
    case 5934:
    {
        returnValue = F("Alt Kotzenhof");
        break;
    }
    case 5935:
    {
        returnValue = F("Alt Krassow");
        break;
    }
    case 5936:
    {
        returnValue = F("Alt Kusey");
        break;
    }
    case 5937:
    {
        returnValue = F("Alt Laberweg");
        break;
    }
    case 5938:
    {
        returnValue = F("Alt Langenfeld");
        break;
    }
    case 5939:
    {
        returnValue = F("Alt Langenhain");
        break;
    }
    case 5940:
    {
        returnValue = F("Alt Langst");
        break;
    }
    case 5941:
    {
        returnValue = F("Alt Lanschvitz");
        break;
    }
    case 5942:
    {
        returnValue = F("Alt Lauerhof");
        break;
    }
    case 5943:
    {
        returnValue = F("Alt Lenzburg");
        break;
    }
    case 5944:
    {
        returnValue = F("Alt Lorsbach");
        break;
    }
    case 5945:
    {
        returnValue = F("Alt Lückerath");
        break;
    }
    case 5946:
    {
        returnValue = F("Alt Marienburg");
        break;
    }
    case 5947:
    {
        returnValue = F("Alt Mariensee");
        break;
    }
    case 5948:
    {
        returnValue = F("Alt Metelener Weg");
        break;
    }
    case 5949:
    {
        returnValue = F("Alt Meteler Str.");
        break;
    }
    case 5950:
    {
        returnValue = F("Alt Metelner Str.");
        break;
    }
    case 5951:
    {
        returnValue = F("Alt Moorburg");
        break;
    }
    case 5952:
    {
        returnValue = F("Alt Mödewitz");
        break;
    }
    case 5953:
    {
        returnValue = F("Alt Möllner Str.");
        break;
    }
    case 5954:
    {
        returnValue = F("Alt Mühlendorfer Weg");
        break;
    }
    case 5955:
    {
        returnValue = F("Alt Neuferchauer Weg");
        break;
    }
    case 5956:
    {
        returnValue = F("Alt Niederhofheim");
        break;
    }
    case 5957:
    {
        returnValue = F("Alt Nowawes");
        break;
    }
    case 5958:
    {
        returnValue = F("Alt Oberliederbach");
        break;
    }
    case 5959:
    {
        returnValue = F("Alt Oelinghoven");
        break;
    }
    case 5960:
    {
        returnValue = F("Alt Oese");
        break;
    }
    case 5961:
    {
        returnValue = F("Alt Ohlenstedt");
        break;
    }
    case 5962:
    {
        returnValue = F("Alt Orsbeck");
        break;
    }
    case 5963:
    {
        returnValue = F("Alt Ostland");
        break;
    }
    case 5964:
    {
        returnValue = F("Alt Ottersleben");
        break;
    }
    case 5965:
    {
        returnValue = F("Alt Pannekow");
        break;
    }
    case 5966:
    {
        returnValue = F("Alt Pastitz");
        break;
    }
    case 5967:
    {
        returnValue = F("Alt Philippinenhof");
        break;
    }
    case 5968:
    {
        returnValue = F("Alt Plestlin");
        break;
    }
    case 5969:
    {
        returnValue = F("Alt Pollert");
        break;
    }
    case 5970:
    {
        returnValue = F("Alt Poorstorf");
        break;
    }
    case 5971:
    {
        returnValue = F("Alt Prester");
        break;
    }
    case 5972:
    {
        returnValue = F("Alt Prielip");
        break;
    }
    case 5973:
    {
        returnValue = F("Alt Quitzenow");
        break;
    }
    case 5974:
    {
        returnValue = F("Alt Reddevitz");
        break;
    }
    case 5975:
    {
        returnValue = F("Alt Refrath");
        break;
    }
    case 5976:
    {
        returnValue = F("Alt Rensefeld");
        break;
    }
    case 5977:
    {
        returnValue = F("Alt Reuden");
        break;
    }
    case 5978:
    {
        returnValue = F("Alt Riemsloh");
        break;
    }
    case 5979:
    {
        returnValue = F("Alt Roggentiner Weg");
        break;
    }
    case 5980:
    {
        returnValue = F("Alt Ruppiner Allee");
        break;
    }
    case 5981:
    {
        returnValue = F("Alt Ruppiner Str.");
        break;
    }
    case 5982:
    {
        returnValue = F("Alt Räsa");
        break;
    }
    case 5983:
    {
        returnValue = F("Alt Saale");
        break;
    }
    case 5984:
    {
        returnValue = F("Alt Salbke");
        break;
    }
    case 5985:
    {
        returnValue = F("Alt Sammiter Damm");
        break;
    }
    case 5986:
    {
        returnValue = F("Alt Sanitz");
        break;
    }
    case 5987:
    {
        returnValue = F("Alt Scharnebeck");
        break;
    }
    case 5988:
    {
        returnValue = F("Alt Scholitz");
        break;
    }
    case 5989:
    {
        returnValue = F("Alt Schweriner Weg");
        break;
    }
    case 5990:
    {
        returnValue = F("Alt Schönefeld");
        break;
    }
    case 5991:
    {
        returnValue = F("Alt Schürkesfeld");
        break;
    }
    case 5992:
    {
        returnValue = F("Alt Sergener Weg");
        break;
    }
    case 5993:
    {
        returnValue = F("Alt Seulberg");
        break;
    }
    case 5994:
    {
        returnValue = F("Alt Sievershagen");
        break;
    }
    case 5995:
    {
        returnValue = F("Alt Springhirsch");
        break;
    }
    case 5996:
    {
        returnValue = F("Alt Stassow");
        break;
    }
    case 5997:
    {
        returnValue = F("Alt Steinbücheler Weg");
        break;
    }
    case 5998:
    {
        returnValue = F("Alt Teterin");
        break;
    }
    case 5999:
    {
        returnValue = F("Alt Thymer Str.");
        break;
    }
    case 6000:
    {
        returnValue = F("Alt Thören");
        break;
    }
    case 6001:
    {
        returnValue = F("Alt Tochheim");
        break;
    }
    case 6002:
    {
        returnValue = F("Alt Treuenfeld");
        break;
    }
    case 6003:
    {
        returnValue = F("Alt Tröstau");
        break;
    }
    case 6004:
    {
        returnValue = F("Alt Venner Weg");
        break;
    }
    case 6005:
    {
        returnValue = F("Alt Vogelhof");
        break;
    }
    case 6006:
    {
        returnValue = F("Alt Vorst");
        break;
    }
    case 6007:
    {
        returnValue = F("Alt Vorwerk");
        break;
    }
    case 6008:
    {
        returnValue = F("Alt Voslapp");
        break;
    }
    case 6009:
    {
        returnValue = F("Alt Wachenbuchen");
        break;
    }
    case 6010:
    {
        returnValue = F("Alt Wahlershausen");
        break;
    }
    case 6011:
    {
        returnValue = F("Alt Werder");
        break;
    }
    case 6012:
    {
        returnValue = F("Alt Werret");
        break;
    }
    case 6013:
    {
        returnValue = F("Alt Westerhüsen");
        break;
    }
    case 6014:
    {
        returnValue = F("Alt Wiescheid");
        break;
    }
    case 6015:
    {
        returnValue = F("Alt Wieven");
        break;
    }
    case 6016:
    {
        returnValue = F("Alt Wildsachsen");
        break;
    }
    case 6017:
    {
        returnValue = F("Alt Wilkendorf");
        break;
    }
    case 6018:
    {
        returnValue = F("Alt Wittstocker Weg");
        break;
    }
    case 6019:
    {
        returnValue = F("Alt Wormbach");
        break;
    }
    case 6020:
    {
        returnValue = F("Alt Zachuner Landstr.");
        break;
    }
    case 6021:
    {
        returnValue = F("Alt Zepernick");
        break;
    }
    case 6022:
    {
        returnValue = F("Alt Zeschdorfer Weg");
        break;
    }
    case 6023:
    {
        returnValue = F("Alt-Benninghöfener-Weg");
        break;
    }
    case 6024:
    {
        returnValue = F("Alt-Bieber");
        break;
    }
    case 6025:
    {
        returnValue = F("Alt-Bremland");
        break;
    }
    case 6026:
    {
        returnValue = F("Alt-Breyeller-Weg");
        break;
    }
    case 6027:
    {
        returnValue = F("Alt-Böternhöfen");
        break;
    }
    case 6028:
    {
        returnValue = F("Alt-Campen-Str.");
        break;
    }
    case 6029:
    {
        returnValue = F("Alt-Caselwitz");
        break;
    }
    case 6030:
    {
        returnValue = F("Alt-Damhuser-Weg");
        break;
    }
    case 6031:
    {
        returnValue = F("Alt-Derken");
        break;
    }
    case 6032:
    {
        returnValue = F("Alt-Deulowitz");
        break;
    }
    case 6033:
    {
        returnValue = F("Alt-Dorfstr.");
        break;
    }
    case 6034:
    {
        returnValue = F("Alt-Eller");
        break;
    }
    case 6035:
    {
        returnValue = F("Alt-Engelbostel");
        break;
    }
    case 6036:
    {
        returnValue = F("Alt-Falkenstein");
        break;
    }
    case 6037:
    {
        returnValue = F("Alt-Fruerlundhof");
        break;
    }
    case 6038:
    {
        returnValue = F("Alt-Gielsdorf");
        break;
    }
    case 6039:
    {
        returnValue = F("Alt-Godshorn");
        break;
    }
    case 6040:
    {
        returnValue = F("Alt-Golpaer Str.");
        break;
    }
    case 6041:
    {
        returnValue = F("Alt-Grundend");
        break;
    }
    case 6042:
    {
        returnValue = F("Alt-Guthendorfer Chaussee");
        break;
    }
    case 6043:
    {
        returnValue = F("Alt-Güstrower Str.");
        break;
    }
    case 6044:
    {
        returnValue = F("Alt-Haarener Str.");
        break;
    }
    case 6045:
    {
        returnValue = F("Alt-Hanser-Weg");
        break;
    }
    case 6046:
    {
        returnValue = F("Alt-Hasselt-Str.");
        break;
    }
    case 6047:
    {
        returnValue = F("Alt-Hesepertwist");
        break;
    }
    case 6048:
    {
        returnValue = F("Alt-Homburger-Str.");
        break;
    }
    case 6049:
    {
        returnValue = F("Alt-Horster-Weg");
        break;
    }
    case 6050:
    {
        returnValue = F("Alt-Ikoven");
        break;
    }
    case 6051:
    {
        returnValue = F("Alt-Kauerndorf");
        break;
    }
    case 6052:
    {
        returnValue = F("Alt-Kentzlin");
        break;
    }
    case 6053:
    {
        returnValue = F("Alt-Krenzliner-Str.");
        break;
    }
    case 6054:
    {
        returnValue = F("Alt-Kuhlenfeld");
        break;
    }
    case 6055:
    {
        returnValue = F("Alt-Lindenau");
        break;
    }
    case 6056:
    {
        returnValue = F("Alt-Löwenbruch");
        break;
    }
    case 6057:
    {
        returnValue = F("Alt-Maibach");
        break;
    }
    case 6058:
    {
        returnValue = F("Alt-Malecker Weg");
        break;
    }
    case 6059:
    {
        returnValue = F("Alt-Marienhausen");
        break;
    }
    case 6060:
    {
        returnValue = F("Alt-Möhlenwarf");
        break;
    }
    case 6061:
    {
        returnValue = F("Alt-Möllner Str.");
        break;
    }
    case 6062:
    {
        returnValue = F("Alt-Mühlrath");
        break;
    }
    case 6063:
    {
        returnValue = F("Alt-Münkeboer Str.");
        break;
    }
    case 6064:
    {
        returnValue = F("Alt-Neundorf");
        break;
    }
    case 6065:
    {
        returnValue = F("Alt-Oetzsch");
        break;
    }
    case 6066:
    {
        returnValue = F("Alt-Oranischer-Platz");
        break;
    }
    case 6067:
    {
        returnValue = F("Alt-Passarge-Str.");
        break;
    }
    case 6068:
    {
        returnValue = F("Alt-Placht");
        break;
    }
    case 6069:
    {
        returnValue = F("Alt-Plachter Weg");
        break;
    }
    case 6070:
    {
        returnValue = F("Alt-Pouch");
        break;
    }
    case 6071:
    {
        returnValue = F("Alt-Pungelscheid");
        break;
    }
    case 6072:
    {
        returnValue = F("Alt-Radekower Str.");
        break;
    }
    case 6073:
    {
        returnValue = F("Alt-Rattwitz");
        break;
    }
    case 6074:
    {
        returnValue = F("Alt-Reeser-Weg");
        break;
    }
    case 6075:
    {
        returnValue = F("Alt-Riethagen");
        break;
    }
    case 6076:
    {
        returnValue = F("Alt-Rottwerndorf");
        break;
    }
    case 6077:
    {
        returnValue = F("Alt-Ruhlsdorf");
        break;
    }
    case 6078:
    {
        returnValue = F("Alt-Rühlertwist");
        break;
    }
    case 6079:
    {
        returnValue = F("Alt-Sallenthin");
        break;
    }
    case 6080:
    {
        returnValue = F("Alt-Schanzendorfer Str.");
        break;
    }
    case 6081:
    {
        returnValue = F("Alt-Schmidtstedter Weg");
        break;
    }
    case 6082:
    {
        returnValue = F("Alt-Schockemühle");
        break;
    }
    case 6083:
    {
        returnValue = F("Alt-Seehagen");
        break;
    }
    case 6084:
    {
        returnValue = F("Alt-Seiferweg");
        break;
    }
    case 6085:
    {
        returnValue = F("Alt-Sylbacher-Weg");
        break;
    }
    case 6086:
    {
        returnValue = F("Alt-Thienhausen");
        break;
    }
    case 6087:
    {
        returnValue = F("Alt-Thießener Weg");
        break;
    }
    case 6088:
    {
        returnValue = F("Alt-Ulmer-Str.");
        break;
    }
    case 6089:
    {
        returnValue = F("Alt-Vynscher-Weg");
        break;
    }
    case 6090:
    {
        returnValue = F("Alt-Wettinshöhe");
        break;
    }
    case 6091:
    {
        returnValue = F("Alt-Wietstock");
        break;
    }
    case 6092:
    {
        returnValue = F("Alt-Witznitzer-Str.");
        break;
    }
    case 6093:
    {
        returnValue = F("Alt-Wäldemleweg");
        break;
    }
    case 6094:
    {
        returnValue = F("Alt-Württemberg-Allee");
        break;
    }
    case 6095:
    {
        returnValue = F("Alt-Zachuner-Str.");
        break;
    }
    case 6096:
    {
        returnValue = F("Altach");
        break;
    }
    case 6097:
    {
        returnValue = F("Altacher Str.");
        break;
    }
    case 6098:
    {
        returnValue = F("Altachsberg");
        break;
    }
    case 6099:
    {
        returnValue = F("Altachstr.");
        break;
    }
    case 6100:
    {
        returnValue = F("Altachweg");
        break;
    }
    case 6101:
    {
        returnValue = F("Altackerhohl");
        break;
    }
    case 6102:
    {
        returnValue = F("Altal");
        break;
    }
    case 6103:
    {
        returnValue = F("Altalmrich");
        break;
    }
    case 6104:
    {
        returnValue = F("Altanenwiesenweg");
        break;
    }
    case 6105:
    {
        returnValue = F("Altangarten");
        break;
    }
    case 6106:
    {
        returnValue = F("Altar Busch");
        break;
    }
    case 6107:
    {
        returnValue = F("Altarasstr.");
        break;
    }
    case 6108:
    {
        returnValue = F("Altarbergsheide");
        break;
    }
    case 6109:
    {
        returnValue = F("Altarklippenweg");
        break;
    }
    case 6110:
    {
        returnValue = F("Altarstein");
        break;
    }
    case 6111:
    {
        returnValue = F("Altau");
        break;
    }
    case 6112:
    {
        returnValue = F("Altbach");
        break;
    }
    case 6113:
    {
        returnValue = F("Altbacher Hof");
        break;
    }
    case 6114:
    {
        returnValue = F("Altbacher Str.");
        break;
    }
    case 6115:
    {
        returnValue = F("Altbachgasse");
        break;
    }
    case 6116:
    {
        returnValue = F("Altbachstr.");
        break;
    }
    case 6117:
    {
        returnValue = F("Altbachweg");
        break;
    }
    case 6118:
    {
        returnValue = F("Altbahnhofstr.");
        break;
    }
    case 6119:
    {
        returnValue = F("Altbauern");
        break;
    }
    case 6120:
    {
        returnValue = F("Altbauernsiedlung");
        break;
    }
    case 6121:
    {
        returnValue = F("Altbauernstr.");
        break;
    }
    case 6122:
    {
        returnValue = F("Altbauhof");
        break;
    }
    case 6123:
    {
        returnValue = F("Altbayernstr.");
        break;
    }
    case 6124:
    {
        returnValue = F("Altbelliner Str.");
        break;
    }
    case 6125:
    {
        returnValue = F("Altbensdorfer Str.");
        break;
    }
    case 6126:
    {
        returnValue = F("Altbergstr.");
        break;
    }
    case 6127:
    {
        returnValue = F("Altbertkower Weg");
        break;
    }
    case 6128:
    {
        returnValue = F("Altbessinger Weg");
        break;
    }
    case 6129:
    {
        returnValue = F("Altbettelmönchstr.");
        break;
    }
    case 6130:
    {
        returnValue = F("Altbettingen");
        break;
    }
    case 6131:
    {
        returnValue = F("Altbirkwitz");
        break;
    }
    case 6132:
    {
        returnValue = F("Altbirnau");
        break;
    }
    case 6133:
    {
        returnValue = F("Altbohlstr.");
        break;
    }
    case 6134:
    {
        returnValue = F("Altbokhorst");
        break;
    }
    case 6135:
    {
        returnValue = F("Altbrander Str.");
        break;
    }
    case 6136:
    {
        returnValue = F("Altbreithofweg");
        break;
    }
    case 6137:
    {
        returnValue = F("Altbremerstr.");
        break;
    }
    case 6138:
    {
        returnValue = F("Altbriesnitz");
        break;
    }
    case 6139:
    {
        returnValue = F("Altbroekhuysen");
        break;
    }
    case 6140:
    {
        returnValue = F("Altbruch");
        break;
    }
    case 6141:
    {
        returnValue = F("Altbuchenstr.");
        break;
    }
    case 6142:
    {
        returnValue = F("Altbuchsland");
        break;
    }
    case 6143:
    {
        returnValue = F("Altbuchweg");
        break;
    }
    case 6144:
    {
        returnValue = F("Altbulacher Str.");
        break;
    }
    case 6145:
    {
        returnValue = F("Altburger Steige");
        break;
    }
    case 6146:
    {
        returnValue = F("Altburger Str.");
        break;
    }
    case 6147:
    {
        returnValue = F("Altburger Weg");
        break;
    }
    case 6148:
    {
        returnValue = F("Altburgk");
        break;
    }
    case 6149:
    {
        returnValue = F("Altburgstr.");
        break;
    }
    case 6150:
    {
        returnValue = F("Altburgstädtel");
        break;
    }
    case 6151:
    {
        returnValue = F("Altburgtal");
        break;
    }
    case 6152:
    {
        returnValue = F("Altburgunder Weg");
        break;
    }
    case 6153:
    {
        returnValue = F("Altburrenstr.");
        break;
    }
    case 6154:
    {
        returnValue = F("Altbuschower Str.");
        break;
    }
    case 6155:
    {
        returnValue = F("Altbuschower Weg");
        break;
    }
    case 6156:
    {
        returnValue = F("Altböllberg");
        break;
    }
    case 6157:
    {
        returnValue = F("Altböllinger Hof");
        break;
    }
    case 6158:
    {
        returnValue = F("Altbürgermeister Köberle Str.");
        break;
    }
    case 6159:
    {
        returnValue = F("Altbürgermeister-Erhard-Str.");
        break;
    }
    case 6160:
    {
        returnValue = F("Altbürgermeister-Müller-Ring");
        break;
    }
    case 6161:
    {
        returnValue = F("Altbürgermeister-Wiedemann-Str.");
        break;
    }
    case 6162:
    {
        returnValue = F("Altcappenbergstr.");
        break;
    }
    case 6163:
    {
        returnValue = F("Altchemnitzer Str.");
        break;
    }
    case 6164:
    {
        returnValue = F("Altcrange");
        break;
    }
    case 6165:
    {
        returnValue = F("Altcunnewitz");
        break;
    }
    case 6166:
    {
        returnValue = F("Altdammer Str.");
        break;
    }
    case 6167:
    {
        returnValue = F("Altdammstücken");
        break;
    }
    case 6168:
    {
        returnValue = F("Altdorf");
        break;
    }
    case 6169:
    {
        returnValue = F("Altdorfer Kirchenweg");
        break;
    }
    case 6170:
    {
        returnValue = F("Altdorfer Str.");
        break;
    }
    case 6171:
    {
        returnValue = F("Altdorfer Sträßle");
        break;
    }
    case 6172:
    {
        returnValue = F("Altdorfer Weg");
        break;
    }
    case 6173:
    {
        returnValue = F("Altdorferstr.");
        break;
    }
    case 6174:
    {
        returnValue = F("Altdorferweg");
        break;
    }
    case 6175:
    {
        returnValue = F("Altdorfpfad");
        break;
    }
    case 6176:
    {
        returnValue = F("Altdorfplatz");
        break;
    }
    case 6177:
    {
        returnValue = F("Altdorfstr.");
        break;
    }
    case 6178:
    {
        returnValue = F("Altdorfweg");
        break;
    }
    case 6179:
    {
        returnValue = F("Altdrossenfeld");
        break;
    }
    case 6180:
    {
        returnValue = F("Altdöbener Str.");
        break;
    }
    case 6181:
    {
        returnValue = F("Altdöberner Landstr.");
        break;
    }
    case 6182:
    {
        returnValue = F("Altdöberner Str.");
        break;
    }
    case 6183:
    {
        returnValue = F("Altdörfer Str.");
        break;
    }
    case 6184:
    {
        returnValue = F("Alte \"Brander Str.");
        break;
    }
    case 6185:
    {
        returnValue = F("Alte 's-Heerenberger Str.");
        break;
    }
    case 6186:
    {
        returnValue = F("Alte 1");
        break;
    }
    case 6187:
    {
        returnValue = F("Alte 13");
        break;
    }
    case 6188:
    {
        returnValue = F("Alte 3");
        break;
    }
    case 6189:
    {
        returnValue = F("Alte 4");
        break;
    }
    case 6190:
    {
        returnValue = F("Alte 8");
        break;
    }
    case 6191:
    {
        returnValue = F("Alte Aachener Str.");
        break;
    }
    case 6192:
    {
        returnValue = F("Alte Aachgasse");
        break;
    }
    case 6193:
    {
        returnValue = F("Alte Aaltener Str.");
        break;
    }
    case 6194:
    {
        returnValue = F("Alte Abtsgmünder Str.");
        break;
    }
    case 6195:
    {
        returnValue = F("Alte Abtswinder Str.");
        break;
    }
    case 6196:
    {
        returnValue = F("Alte Acht");
        break;
    }
    case 6197:
    {
        returnValue = F("Alte Ackersteige");
        break;
    }
    case 6198:
    {
        returnValue = F("Alte Adorfer Str.");
        break;
    }
    case 6199:
    {
        returnValue = F("Alte Ahlersbacher Str.");
        break;
    }
    case 6200:
    {
        returnValue = F("Alte Ahnebrücke");
        break;
    }
    case 6201:
    {
        returnValue = F("Alte Aischbrücke");
        break;
    }
    case 6202:
    {
        returnValue = F("Alte Akademie");
        break;
    }
    case 6203:
    {
        returnValue = F("Alte Albtalbahn");
        break;
    }
    case 6204:
    {
        returnValue = F("Alte Allee");
        break;
    }
    case 6205:
    {
        returnValue = F("Alte Allee / L3353");
        break;
    }
    case 6206:
    {
        returnValue = F("Alte Altenberger Str.");
        break;
    }
    case 6207:
    {
        returnValue = F("Alte Altenburger Str.");
        break;
    }
    case 6208:
    {
        returnValue = F("Alte Altheimer Str.");
        break;
    }
    case 6209:
    {
        returnValue = F("Alte Amalienstr.");
        break;
    }
    case 6210:
    {
        returnValue = F("Alte Amberger Str.");
        break;
    }
    case 6211:
    {
        returnValue = F("Alte Ameisenlachschneise");
        break;
    }
    case 6212:
    {
        returnValue = F("Alte Aminghauser Str.");
        break;
    }
    case 6213:
    {
        returnValue = F("Alte Amorbacher Str.");
        break;
    }
    case 6214:
    {
        returnValue = F("Alte Amtsstr.");
        break;
    }
    case 6215:
    {
        returnValue = F("Alte Andernacher Str.");
        break;
    }
    case 6216:
    {
        returnValue = F("Alte Angermünder Landstr.");
        break;
    }
    case 6217:
    {
        returnValue = F("Alte Anlagen");
        break;
    }
    case 6218:
    {
        returnValue = F("Alte Annaberger Str.");
        break;
    }
    case 6219:
    {
        returnValue = F("Alte Annendorfer Str.");
        break;
    }
    case 6220:
    {
        returnValue = F("Alte Arnsdorfer Str.");
        break;
    }
    case 6221:
    {
        returnValue = F("Alte Arnstädter Str.");
        break;
    }
    case 6222:
    {
        returnValue = F("Alte Arolser Str.");
        break;
    }
    case 6223:
    {
        returnValue = F("Alte Artilleriekaserne");
        break;
    }
    case 6224:
    {
        returnValue = F("Alte Arzheimer Landstrasse");
        break;
    }
    case 6225:
    {
        returnValue = F("Alte Ascheberger Str.");
        break;
    }
    case 6226:
    {
        returnValue = F("Alte Auchten");
        break;
    }
    case 6227:
    {
        returnValue = F("Alte Audenhainer Str.");
        break;
    }
    case 6228:
    {
        returnValue = F("Alte Aue");
        break;
    }
    case 6229:
    {
        returnValue = F("Alte Auer Str.");
        break;
    }
    case 6230:
    {
        returnValue = F("Alte Auerbacher Str.");
        break;
    }
    case 6231:
    {
        returnValue = F("Alte Auerbergstr.");
        break;
    }
    case 6232:
    {
        returnValue = F("Alte Auerstr.");
        break;
    }
    case 6233:
    {
        returnValue = F("Alte Augsburger Str.");
        break;
    }
    case 6234:
    {
        returnValue = F("Alte Augustusburger Str.");
        break;
    }
    case 6235:
    {
        returnValue = F("Alte Aumaer Str.");
        break;
    }
    case 6236:
    {
        returnValue = F("Alte Aurachbrücke");
        break;
    }
    case 6237:
    {
        returnValue = F("Alte Autobahn");
        break;
    }
    case 6238:
    {
        returnValue = F("Alte Autobahn 4");
        break;
    }
    case 6239:
    {
        returnValue = F("Alte B 189");
        break;
    }
    case 6240:
    {
        returnValue = F("Alte B 311");
        break;
    }
    case 6241:
    {
        returnValue = F("Alte B 83");
        break;
    }
    case 6242:
    {
        returnValue = F("Alte B16");
        break;
    }
    case 6243:
    {
        returnValue = F("Alte B248");
        break;
    }
    case 6244:
    {
        returnValue = F("Alte B3");
        break;
    }
    case 6245:
    {
        returnValue = F("Alte B36");
        break;
    }
    case 6246:
    {
        returnValue = F("Alte B56");
        break;
    }
    case 6247:
    {
        returnValue = F("Alte B80");
        break;
    }
    case 6248:
    {
        returnValue = F("Alte Baacher Str.");
        break;
    }
    case 6249:
    {
        returnValue = F("Alte Babenhäuser Str.");
        break;
    }
    case 6250:
    {
        returnValue = F("Alte Bach Weg");
        break;
    }
    case 6251:
    {
        returnValue = F("Alte Bachgasse");
        break;
    }
    case 6252:
    {
        returnValue = F("Alte Bachstr.");
        break;
    }
    case 6253:
    {
        returnValue = F("Alte Backhausstr.");
        break;
    }
    case 6254:
    {
        returnValue = F("Alte Backnanger Str.");
        break;
    }
    case 6255:
    {
        returnValue = F("Alte Badeanstalt");
        break;
    }
    case 6256:
    {
        returnValue = F("Alte Badstr.");
        break;
    }
    case 6257:
    {
        returnValue = F("Alte Bahn");
        break;
    }
    case 6258:
    {
        returnValue = F("Alte Bahn Bleicherode-Herzberg");
        break;
    }
    case 6259:
    {
        returnValue = F("Alte Bahn Bleicherode-Herzberg Tunnel");
        break;
    }
    case 6260:
    {
        returnValue = F("Alte Bahnbrücke");
        break;
    }
    case 6261:
    {
        returnValue = F("Alte Bahnhofsstr.");
        break;
    }
    case 6262:
    {
        returnValue = F("Alte Bahnhofstr.");
        break;
    }
    case 6263:
    {
        returnValue = F("Alte Bahnlinie");
        break;
    }
    case 6264:
    {
        returnValue = F("Alte Bahnmeisterei");
        break;
    }
    case 6265:
    {
        returnValue = F("Alte Bahnschiene");
        break;
    }
    case 6266:
    {
        returnValue = F("Alte Bahnstr.");
        break;
    }
    case 6267:
    {
        returnValue = F("Alte Bahnstrecke");
        break;
    }
    case 6268:
    {
        returnValue = F("Alte Bahnstrecke Rennerod - Herborn");
        break;
    }
    case 6269:
    {
        returnValue = F("Alte Bahntrasse");
        break;
    }
    case 6270:
    {
        returnValue = F("Alte Bahntrasse Schwarzenbachtalsperre");
        break;
    }
    case 6271:
    {
        returnValue = F("Alte Bahrastr.");
        break;
    }
    case 6272:
    {
        returnValue = F("Alte Baierecker Steige");
        break;
    }
    case 6273:
    {
        returnValue = F("Alte Baierecker Str.");
        break;
    }
    case 6274:
    {
        returnValue = F("Alte Balinger Str.");
        break;
    }
    case 6275:
    {
        returnValue = F("Alte Balzfelder Str.");
        break;
    }
    case 6276:
    {
        returnValue = F("Alte Bamberger Str.");
        break;
    }
    case 6277:
    {
        returnValue = F("Alte Banzel");
        break;
    }
    case 6278:
    {
        returnValue = F("Alte Bargener Str.");
        break;
    }
    case 6279:
    {
        returnValue = F("Alte Bargener Strasse");
        break;
    }
    case 6280:
    {
        returnValue = F("Alte Barnsdorfer Str.");
        break;
    }
    case 6281:
    {
        returnValue = F("Alte Basler Str.");
        break;
    }
    case 6282:
    {
        returnValue = F("Alte Basler Str. Nord");
        break;
    }
    case 6283:
    {
        returnValue = F("Alte Bauernschaft");
        break;
    }
    case 6284:
    {
        returnValue = F("Alte Bauernstr.");
        break;
    }
    case 6285:
    {
        returnValue = F("Alte Baumechanik");
        break;
    }
    case 6286:
    {
        returnValue = F("Alte Baumschule");
        break;
    }
    case 6287:
    {
        returnValue = F("Alte Bautzener Str.");
        break;
    }
    case 6288:
    {
        returnValue = F("Alte Bautzener Strasse");
        break;
    }
    case 6289:
    {
        returnValue = F("Alte Bautzner Str.");
        break;
    }
    case 6290:
    {
        returnValue = F("Alte Bayerdillinger Str.");
        break;
    }
    case 6291:
    {
        returnValue = F("Alte Bayerische Str.");
        break;
    }
    case 6292:
    {
        returnValue = F("Alte Bayreuther Str.");
        break;
    }
    case 6293:
    {
        returnValue = F("Alte Beckumer Str.");
        break;
    }
    case 6294:
    {
        returnValue = F("Alte Beeke");
        break;
    }
    case 6295:
    {
        returnValue = F("Alte Beelitzer Str.");
        break;
    }
    case 6296:
    {
        returnValue = F("Alte Behrensdorfstr.");
        break;
    }
    case 6297:
    {
        returnValue = F("Alte Beiersdorfer Str.");
        break;
    }
    case 6298:
    {
        returnValue = F("Alte Beilsteiner Str.");
        break;
    }
    case 6299:
    {
        returnValue = F("Alte Beke");
        break;
    }
    case 6300:
    {
        returnValue = F("Alte Bellingser Str.");
        break;
    }
    case 6301:
    {
        returnValue = F("Alte Belmsdorfer Str.");
        break;
    }
    case 6302:
    {
        returnValue = F("Alte Belziger Str.");
        break;
    }
    case 6303:
    {
        returnValue = F("Alte Benden");
        break;
    }
    case 6304:
    {
        returnValue = F("Alte Bengendorfer Str.");
        break;
    }
    case 6305:
    {
        returnValue = F("Alte Benn");
        break;
    }
    case 6306:
    {
        returnValue = F("Alte Bennstedter Str.");
        break;
    }
    case 6307:
    {
        returnValue = F("Alte Berchtesgadener Str.");
        break;
    }
    case 6308:
    {
        returnValue = F("Alte Berg");
        break;
    }
    case 6309:
    {
        returnValue = F("Alte Bergaer Str.");
        break;
    }
    case 6310:
    {
        returnValue = F("Alte Berger Str.");
        break;
    }
    case 6311:
    {
        returnValue = F("Alte Bergheimer Str.");
        break;
    }
    case 6312:
    {
        returnValue = F("Alte Bergseestr.");
        break;
    }
    case 6313:
    {
        returnValue = F("Alte Bergsteige");
        break;
    }
    case 6314:
    {
        returnValue = F("Alte Bergstr.");
        break;
    }
    case 6315:
    {
        returnValue = F("Alte Bergwerkstr.");
        break;
    }
    case 6316:
    {
        returnValue = F("Alte Berliner Heerstr.");
        break;
    }
    case 6317:
    {
        returnValue = F("Alte Berliner Str.");
        break;
    }
    case 6318:
    {
        returnValue = F("Alte Bernauer Str.");
        break;
    }
    case 6319:
    {
        returnValue = F("Alte Bernbacher Steige");
        break;
    }
    case 6320:
    {
        returnValue = F("Alte Bernsbacher Str.");
        break;
    }
    case 6321:
    {
        returnValue = F("Alte Bernstädter Str.");
        break;
    }
    case 6322:
    {
        returnValue = F("Alte Berolzheimer Str.");
        break;
    }
    case 6323:
    {
        returnValue = F("Alte Besigheimer Str.");
        break;
    }
    case 6324:
    {
        returnValue = F("Alte Beuchaer Str.");
        break;
    }
    case 6325:
    {
        returnValue = F("Alte Bevern");
        break;
    }
    case 6326:
    {
        returnValue = F("Alte Biberacher Str.");
        break;
    }
    case 6327:
    {
        returnValue = F("Alte Bielefelder Str.");
        break;
    }
    case 6328:
    {
        returnValue = F("Alte Bierhelder Str.");
        break;
    }
    case 6329:
    {
        returnValue = F("Alte Bierstr.");
        break;
    }
    case 6330:
    {
        returnValue = F("Alte Birkinger Str.");
        break;
    }
    case 6331:
    {
        returnValue = F("Alte Bismarckstr.");
        break;
    }
    case 6332:
    {
        returnValue = F("Alte Bissinger Str.");
        break;
    }
    case 6333:
    {
        returnValue = F("Alte Bitburger Str.");
        break;
    }
    case 6334:
    {
        returnValue = F("Alte Bitzen");
        break;
    }
    case 6335:
    {
        returnValue = F("Alte Bitzer Steige");
        break;
    }
    case 6336:
    {
        returnValue = F("Alte Blankenburger Heerstr.");
        break;
    }
    case 6337:
    {
        returnValue = F("Alte Blankenburger Str.");
        break;
    }
    case 6338:
    {
        returnValue = F("Alte Blankengründelweg");
        break;
    }
    case 6339:
    {
        returnValue = F("Alte Bleiche");
        break;
    }
    case 6340:
    {
        returnValue = F("Alte Bliesendorfer Str.");
        break;
    }
    case 6341:
    {
        returnValue = F("Alte Blumenstr.");
        break;
    }
    case 6342:
    {
        returnValue = F("Alte Bobbahn");
        break;
    }
    case 6343:
    {
        returnValue = F("Alte Bobstadter Str.");
        break;
    }
    case 6344:
    {
        returnValue = F("Alte Bockradener Str.");
        break;
    }
    case 6345:
    {
        returnValue = F("Alte Bogengasse");
        break;
    }
    case 6346:
    {
        returnValue = F("Alte Bogenschneise");
        break;
    }
    case 6347:
    {
        returnValue = F("Alte Bogenstr.");
        break;
    }
    case 6348:
    {
        returnValue = F("Alte Bohle");
        break;
    }
    case 6349:
    {
        returnValue = F("Alte Bonner Str.");
        break;
    }
    case 6350:
    {
        returnValue = F("Alte Bonnstr.");
        break;
    }
    case 6351:
    {
        returnValue = F("Alte Borner Str.");
        break;
    }
    case 6352:
    {
        returnValue = F("Alte Bornsdorfer Str.");
        break;
    }
    case 6353:
    {
        returnValue = F("Alte Bornstr.");
        break;
    }
    case 6354:
    {
        returnValue = F("Alte Borstendorfer Str.");
        break;
    }
    case 6355:
    {
        returnValue = F("Alte Brache");
        break;
    }
    case 6356:
    {
        returnValue = F("Alte Brandenburger");
        break;
    }
    case 6357:
    {
        returnValue = F("Alte Brandenburger Str.");
        break;
    }
    case 6358:
    {
        returnValue = F("Alte Brandiser Str.");
        break;
    }
    case 6359:
    {
        returnValue = F("Alte Brandleite");
        break;
    }
    case 6360:
    {
        returnValue = F("Alte Brandstr.");
        break;
    }
    case 6361:
    {
        returnValue = F("Alte Brauerei");
        break;
    }
    case 6362:
    {
        returnValue = F("Alte Braugasse");
        break;
    }
    case 6363:
    {
        returnValue = F("Alte Braunlager Str.");
        break;
    }
    case 6364:
    {
        returnValue = F("Alte Braunschweiger Str.");
        break;
    }
    case 6365:
    {
        returnValue = F("Alte Braustätte");
        break;
    }
    case 6366:
    {
        returnValue = F("Alte Bredower Allee");
        break;
    }
    case 6367:
    {
        returnValue = F("Alte Bredstedter Str.");
        break;
    }
    case 6368:
    {
        returnValue = F("Alte Breisacher Str.");
        break;
    }
    case 6369:
    {
        returnValue = F("Alte Breite");
        break;
    }
    case 6370:
    {
        returnValue = F("Alte Breitensteiner Str.");
        break;
    }
    case 6371:
    {
        returnValue = F("Alte Bremer Str.");
        break;
    }
    case 6372:
    {
        returnValue = F("Alte Brennerei");
        break;
    }
    case 6373:
    {
        returnValue = F("Alte Brettener Str.");
        break;
    }
    case 6374:
    {
        returnValue = F("Alte Briesener Str.");
        break;
    }
    case 6375:
    {
        returnValue = F("Alte Briloner Str.");
        break;
    }
    case 6376:
    {
        returnValue = F("Alte Brockhäger Str.");
        break;
    }
    case 6377:
    {
        returnValue = F("Alte Bruchsaler Str.");
        break;
    }
    case 6378:
    {
        returnValue = F("Alte Bruchstr.");
        break;
    }
    case 6379:
    {
        returnValue = F("Alte Brucker Str.");
        break;
    }
    case 6380:
    {
        returnValue = F("Alte Brunnengasse");
        break;
    }
    case 6381:
    {
        returnValue = F("Alte Brunnenstr.");
        break;
    }
    case 6382:
    {
        returnValue = F("Alte Bräuhausgasse");
        break;
    }
    case 6383:
    {
        returnValue = F("Alte Brüche");
        break;
    }
    case 6384:
    {
        returnValue = F("Alte Brücke");
        break;
    }
    case 6385:
    {
        returnValue = F("Alte Brücke Lederfabrik");
        break;
    }
    case 6386:
    {
        returnValue = F("Alte Brückenstr.");
        break;
    }
    case 6387:
    {
        returnValue = F("Alte Brüderstr.");
        break;
    }
    case 6388:
    {
        returnValue = F("Alte Brügger Landstr.");
        break;
    }
    case 6389:
    {
        returnValue = F("Alte Brühlstr.");
        break;
    }
    case 6390:
    {
        returnValue = F("Alte Brünloser Str.");
        break;
    }
    case 6391:
    {
        returnValue = F("Alte Bubenhauser Str.");
        break;
    }
    case 6392:
    {
        returnValue = F("Alte Bucher Str.");
        break;
    }
    case 6393:
    {
        returnValue = F("Alte Buchheimer Str.");
        break;
    }
    case 6394:
    {
        returnValue = F("Alte Buchholzer Str.");
        break;
    }
    case 6395:
    {
        returnValue = F("Alte Buersche Str.");
        break;
    }
    case 6396:
    {
        returnValue = F("Alte Bundesstr.");
        break;
    }
    case 6397:
    {
        returnValue = F("Alte Burbach");
        break;
    }
    case 6398:
    {
        returnValue = F("Alte Burg");
        break;
    }
    case 6399:
    {
        returnValue = F("Alte Burg Weg");
        break;
    }
    case 6400:
    {
        returnValue = F("Alte Burgauer Brücke");
        break;
    }
    case 6401:
    {
        returnValue = F("Alte Burghausener Str.");
        break;
    }
    case 6402:
    {
        returnValue = F("Alte Burgsteige");
        break;
    }
    case 6403:
    {
        returnValue = F("Alte Burgstr.");
        break;
    }
    case 6404:
    {
        returnValue = F("Alte Burgwedeler Str.");
        break;
    }
    case 6405:
    {
        returnValue = F("Alte Buschstr.");
        break;
    }
    case 6406:
    {
        returnValue = F("Alte Buschwiesen");
        break;
    }
    case 6407:
    {
        returnValue = F("Alte Buttlarer Str.");
        break;
    }
    case 6408:
    {
        returnValue = F("Alte Butzbacher Str.");
        break;
    }
    case 6409:
    {
        returnValue = F("Alte Bächelstr.");
        break;
    }
    case 6410:
    {
        returnValue = F("Alte Bäckerei");
        break;
    }
    case 6411:
    {
        returnValue = F("Alte Bäckerstr.");
        break;
    }
    case 6412:
    {
        returnValue = F("Alte Bäderstr.");
        break;
    }
    case 6413:
    {
        returnValue = F("Alte Bärenhöhle");
        break;
    }
    case 6414:
    {
        returnValue = F("Alte Böhmerstr.");
        break;
    }
    case 6415:
    {
        returnValue = F("Alte Böhmische Glasstr.");
        break;
    }
    case 6416:
    {
        returnValue = F("Alte Böhmische Str.");
        break;
    }
    case 6417:
    {
        returnValue = F("Alte Bömische Str.");
        break;
    }
    case 6418:
    {
        returnValue = F("Alte Böttcherei");
        break;
    }
    case 6419:
    {
        returnValue = F("Alte Büchenbronner Str.");
        break;
    }
    case 6420:
    {
        returnValue = F("Alte Büdding");
        break;
    }
    case 6421:
    {
        returnValue = F("Alte Büdnerei");
        break;
    }
    case 6422:
    {
        returnValue = F("Alte Bünder Str.");
        break;
    }
    case 6423:
    {
        returnValue = F("Alte Bürg");
        break;
    }
    case 6424:
    {
        returnValue = F("Alte Bürgerschule");
        break;
    }
    case 6425:
    {
        returnValue = F("Alte Calauer Str.");
        break;
    }
    case 6426:
    {
        returnValue = F("Alte Calbacher Str.");
        break;
    }
    case 6427:
    {
        returnValue = F("Alte Calbesche Str.");
        break;
    }
    case 6428:
    {
        returnValue = F("Alte Calmbacher Str.");
        break;
    }
    case 6429:
    {
        returnValue = F("Alte Camberg-Usinger Poststr.");
        break;
    }
    case 6430:
    {
        returnValue = F("Alte Camburger Str.");
        break;
    }
    case 6431:
    {
        returnValue = F("Alte Cannewitzer Str.");
        break;
    }
    case 6432:
    {
        returnValue = F("Alte Carumer Str.");
        break;
    }
    case 6433:
    {
        returnValue = F("Alte Celler Heerstr.");
        break;
    }
    case 6434:
    {
        returnValue = F("Alte Chamer Str.");
        break;
    }
    case 6435:
    {
        returnValue = F("Alte Chausee [K6] [K7]");
        break;
    }
    case 6436:
    {
        returnValue = F("Alte Chaussee");
        break;
    }
    case 6437:
    {
        returnValue = F("Alte Chausseestr.");
        break;
    }
    case 6438:
    {
        returnValue = F("Alte Chemnitzer Str.");
        break;
    }
    case 6439:
    {
        returnValue = F("Alte Cloppenburger Str.");
        break;
    }
    case 6440:
    {
        returnValue = F("Alte Clüverstr.");
        break;
    }
    case 6441:
    {
        returnValue = F("Alte Coburger Str.");
        break;
    }
    case 6442:
    {
        returnValue = F("Alte Coesfelder Str.");
        break;
    }
    case 6443:
    {
        returnValue = F("Alte Coseler Str.");
        break;
    }
    case 6444:
    {
        returnValue = F("Alte Crivitzer Landstr.");
        break;
    }
    case 6445:
    {
        returnValue = F("Alte Cunnersdorfer Str.");
        break;
    }
    case 6446:
    {
        returnValue = F("Alte Daisbacher Str.");
        break;
    }
    case 6447:
    {
        returnValue = F("Alte Dammstr.");
        break;
    }
    case 6448:
    {
        returnValue = F("Alte Dampferbrücke");
        break;
    }
    case 6449:
    {
        returnValue = F("Alte Danziger Str.");
        break;
    }
    case 6450:
    {
        returnValue = F("Alte Darmstädter Str.");
        break;
    }
    case 6451:
    {
        returnValue = F("Alte Darscheider Str.");
        break;
    }
    case 6452:
    {
        returnValue = F("Alte Dauner Str.");
        break;
    }
    case 6453:
    {
        returnValue = F("Alte Deichlohne");
        break;
    }
    case 6454:
    {
        returnValue = F("Alte Deichstr.");
        break;
    }
    case 6455:
    {
        returnValue = F("Alte Delitzscher Str.");
        break;
    }
    case 6456:
    {
        returnValue = F("Alte Delme");
        break;
    }
    case 6457:
    {
        returnValue = F("Alte Delogstr.");
        break;
    }
    case 6458:
    {
        returnValue = F("Alte Dessauer Str.");
        break;
    }
    case 6459:
    {
        returnValue = F("Alte Detmolder Str.");
        break;
    }
    case 6460:
    {
        returnValue = F("Alte Dettenhäuser Str.");
        break;
    }
    case 6461:
    {
        returnValue = F("Alte Dettinger Str.");
        break;
    }
    case 6462:
    {
        returnValue = F("Alte Dieburger Str.");
        break;
    }
    case 6463:
    {
        returnValue = F("Alte Dielbacher Str.");
        break;
    }
    case 6464:
    {
        returnValue = F("Alte Diepersdorfer Str.");
        break;
    }
    case 6465:
    {
        returnValue = F("Alte Dietersdorfer Str.");
        break;
    }
    case 6466:
    {
        returnValue = F("Alte Dietlinger Str.");
        break;
    }
    case 6467:
    {
        returnValue = F("Alte Dinauer Str.");
        break;
    }
    case 6468:
    {
        returnValue = F("Alte Dinslakener Str.");
        break;
    }
    case 6469:
    {
        returnValue = F("Alte Dippoldiswalder Str.");
        break;
    }
    case 6470:
    {
        returnValue = F("Alte Dobler Str.");
        break;
    }
    case 6471:
    {
        returnValue = F("Alte Doblstr.");
        break;
    }
    case 6472:
    {
        returnValue = F("Alte Dohrstr.");
        break;
    }
    case 6473:
    {
        returnValue = F("Alte Dombach");
        break;
    }
    case 6474:
    {
        returnValue = F("Alte Dorfchemnitzer Str.");
        break;
    }
    case 6475:
    {
        returnValue = F("Alte Dorffreiheit");
        break;
    }
    case 6476:
    {
        returnValue = F("Alte Dorfgasse");
        break;
    }
    case 6477:
    {
        returnValue = F("Alte Dorfschule");
        break;
    }
    case 6478:
    {
        returnValue = F("Alte Dorfstelle");
        break;
    }
    case 6479:
    {
        returnValue = F("Alte Dorfstr.");
        break;
    }
    case 6480:
    {
        returnValue = F("Alte Dorfstr. 29a-31");
        break;
    }
    case 6481:
    {
        returnValue = F("Alte Dorfstr. 32-34");
        break;
    }
    case 6482:
    {
        returnValue = F("Alte Dormitzer Str.");
        break;
    }
    case 6483:
    {
        returnValue = F("Alte Dorstener Str.");
        break;
    }
    case 6484:
    {
        returnValue = F("Alte Drei");
        break;
    }
    case 6485:
    {
        returnValue = F("Alte Dreileite");
        break;
    }
    case 6486:
    {
        returnValue = F("Alte Dresden-Teplitzer Poststr.");
        break;
    }
    case 6487:
    {
        returnValue = F("Alte Dresdener Str.");
        break;
    }
    case 6488:
    {
        returnValue = F("Alte Dresdner Str.");
        break;
    }
    case 6489:
    {
        returnValue = F("Alte Dresdner Str. / Flügel HC");
        break;
    }
    case 6490:
    {
        returnValue = F("Alte Driesch");
        break;
    }
    case 6491:
    {
        returnValue = F("Alte Drift");
        break;
    }
    case 6492:
    {
        returnValue = F("Alte Drogener Str.");
        break;
    }
    case 6493:
    {
        returnValue = F("Alte Drostestr.");
        break;
    }
    case 6494:
    {
        returnValue = F("Alte Dudeldorfer Str.");
        break;
    }
    case 6495:
    {
        returnValue = F("Alte Dynamit");
        break;
    }
    case 6496:
    {
        returnValue = F("Alte Dübener Landstr.");
        break;
    }
    case 6497:
    {
        returnValue = F("Alte Dübener Str.");
        break;
    }
    case 6498:
    {
        returnValue = F("Alte Dürener Str.");
        break;
    }
    case 6499:
    {
        returnValue = F("Alte Dürrner Str.");
        break;
    }
    case 6500:
    {
        returnValue = F("Alte Eberbacher Str.");
        break;
    }
    case 6501:
    {
        returnValue = F("Alte Ebmather Str.");
        break;
    }
    case 6502:
    {
        returnValue = F("Alte Ebnater Str.");
        break;
    }
    case 6503:
    {
        returnValue = F("Alte Eckartshäuser Str.");
        break;
    }
    case 6504:
    {
        returnValue = F("Alte Ecke");
        break;
    }
    case 6505:
    {
        returnValue = F("Alte Ederbrücke");
        break;
    }
    case 6506:
    {
        returnValue = F("Alte Egau");
        break;
    }
    case 6507:
    {
        returnValue = F("Alte Eiche");
        break;
    }
    case 6508:
    {
        returnValue = F("Alte Eichen");
        break;
    }
    case 6509:
    {
        returnValue = F("Alte Eichenallee");
        break;
    }
    case 6510:
    {
        returnValue = F("Alte Eichenstr.");
        break;
    }
    case 6511:
    {
        returnValue = F("Alte Eilenburger Str.");
        break;
    }
    case 6512:
    {
        returnValue = F("Alte Einbecker");
        break;
    }
    case 6513:
    {
        returnValue = F("Alte Einbecker Str.");
        break;
    }
    case 6514:
    {
        returnValue = F("Alte Einkornstr.");
        break;
    }
    case 6515:
    {
        returnValue = F("Alte Einnehmerei");
        break;
    }
    case 6516:
    {
        returnValue = F("Alte Eisenacher Str.");
        break;
    }
    case 6517:
    {
        returnValue = F("Alte Eisenbahnbrücke");
        break;
    }
    case 6518:
    {
        returnValue = F("Alte Eisenbahnstr.");
        break;
    }
    case 6519:
    {
        returnValue = F("Alte Eisenbahnstrecke nach Massbach");
        break;
    }
    case 6520:
    {
        returnValue = F("Alte Eisenberger Str.");
        break;
    }
    case 6521:
    {
        returnValue = F("Alte Eisenstr.");
        break;
    }
    case 6522:
    {
        returnValue = F("Alte Eisfelder Str.");
        break;
    }
    case 6523:
    {
        returnValue = F("Alte Eislinger Str.");
        break;
    }
    case 6524:
    {
        returnValue = F("Alte Eitzer Str.");
        break;
    }
    case 6525:
    {
        returnValue = F("Alte Eiweilerstr.");
        break;
    }
    case 6526:
    {
        returnValue = F("Alte Elbingeröder Heerstr.");
        break;
    }
    case 6527:
    {
        returnValue = F("Alte Elbingeröder Str.");
        break;
    }
    case 6528:
    {
        returnValue = F("Alte Ellernstr.");
        break;
    }
    case 6529:
    {
        returnValue = F("Alte Ellersiedlung");
        break;
    }
    case 6530:
    {
        returnValue = F("Alte Elsendorferin");
        break;
    }
    case 6531:
    {
        returnValue = F("Alte Elsterwerdaer Str.");
        break;
    }
    case 6532:
    {
        returnValue = F("Alte Elterleiner Str.");
        break;
    }
    case 6533:
    {
        returnValue = F("Alte Empfershäuser Str.");
        break;
    }
    case 6534:
    {
        returnValue = F("Alte Emscher");
        break;
    }
    case 6535:
    {
        returnValue = F("Alte Emser Str.");
        break;
    }
    case 6536:
    {
        returnValue = F("Alte Emsstr.");
        break;
    }
    case 6537:
    {
        returnValue = F("Alte Engelberger Str.");
        break;
    }
    case 6538:
    {
        returnValue = F("Alte Engter Str.");
        break;
    }
    case 6539:
    {
        returnValue = F("Alte Ennest");
        break;
    }
    case 6540:
    {
        returnValue = F("Alte Enzbrücke");
        break;
    }
    case 6541:
    {
        returnValue = F("Alte Eppelheimer Str.");
        break;
    }
    case 6542:
    {
        returnValue = F("Alte Erbacher Str.");
        break;
    }
    case 6543:
    {
        returnValue = F("Alte Erfbrücke");
        break;
    }
    case 6544:
    {
        returnValue = F("Alte Erlenbacher Str.");
        break;
    }
    case 6545:
    {
        returnValue = F("Alte Erndtebrücker Landstr.");
        break;
    }
    case 6546:
    {
        returnValue = F("Alte Erzbahntrasse");
        break;
    }
    case 6547:
    {
        returnValue = F("Alte Erzweiler Str.");
        break;
    }
    case 6548:
    {
        returnValue = F("Alte Eschauer Str.");
        break;
    }
    case 6549:
    {
        returnValue = F("Alte Eschenbacher Str.");
        break;
    }
    case 6550:
    {
        returnValue = F("Alte Eschstr.");
        break;
    }
    case 6551:
    {
        returnValue = F("Alte Eselsteige");
        break;
    }
    case 6552:
    {
        returnValue = F("Alte Esslinger Str.");
        break;
    }
    case 6553:
    {
        returnValue = F("Alte Ettaler Str.");
        break;
    }
    case 6554:
    {
        returnValue = F("Alte Etzenroter Str.");
        break;
    }
    case 6555:
    {
        returnValue = F("Alte Eythraer Str.");
        break;
    }
    case 6556:
    {
        returnValue = F("Alte Fabrik");
        break;
    }
    case 6557:
    {
        returnValue = F("Alte Fabrikstr.");
        break;
    }
    case 6558:
    {
        returnValue = F("Alte Fahrstr.");
        break;
    }
    case 6559:
    {
        returnValue = F("Alte Fahrt");
        break;
    }
    case 6560:
    {
        returnValue = F("Alte Falkensteiner Str.");
        break;
    }
    case 6561:
    {
        returnValue = F("Alte Feldflur");
        break;
    }
    case 6562:
    {
        returnValue = F("Alte Feldmark");
        break;
    }
    case 6563:
    {
        returnValue = F("Alte Feldmühle");
        break;
    }
    case 6564:
    {
        returnValue = F("Alte Feldscheune");
        break;
    }
    case 6565:
    {
        returnValue = F("Alte Feldstr.");
        break;
    }
    case 6566:
    {
        returnValue = F("Alte Fenne");
        break;
    }
    case 6567:
    {
        returnValue = F("Alte Fernstr.");
        break;
    }
    case 6568:
    {
        returnValue = F("Alte Festungsstr.");
        break;
    }
    case 6569:
    {
        returnValue = F("Alte Festwiese");
        break;
    }
    case 6570:
    {
        returnValue = F("Alte Feuerwache");
        break;
    }
    case 6571:
    {
        returnValue = F("Alte Feuerwehr");
        break;
    }
    case 6572:
    {
        returnValue = F("Alte Feuerwehrgasse");
        break;
    }
    case 6573:
    {
        returnValue = F("Alte Fichtelbergstr.");
        break;
    }
    case 6574:
    {
        returnValue = F("Alte Finien");
        break;
    }
    case 6575:
    {
        returnValue = F("Alte Finsterwalder Str.");
        break;
    }
    case 6576:
    {
        returnValue = F("Alte Finther Str.");
        break;
    }
    case 6577:
    {
        returnValue = F("Alte Fischbacher Chaussee");
        break;
    }
    case 6578:
    {
        returnValue = F("Alte Fischelbacher Str.");
        break;
    }
    case 6579:
    {
        returnValue = F("Alte Fischergasse");
        break;
    }
    case 6580:
    {
        returnValue = F("Alte Fischinger Str.");
        break;
    }
    case 6581:
    {
        returnValue = F("Alte Flatower Str.");
        break;
    }
    case 6582:
    {
        returnValue = F("Alte Flockenstr.");
        break;
    }
    case 6583:
    {
        returnValue = F("Alte Flughafenstr.");
        break;
    }
    case 6584:
    {
        returnValue = F("Alte Flugplatzstr.");
        break;
    }
    case 6585:
    {
        returnValue = F("Alte Flur");
        break;
    }
    case 6586:
    {
        returnValue = F("Alte Flözlinger Str.");
        break;
    }
    case 6587:
    {
        returnValue = F("Alte Forstgasse");
        break;
    }
    case 6588:
    {
        returnValue = F("Alte Forsthausstr.");
        break;
    }
    case 6589:
    {
        returnValue = F("Alte Forstlahmer Str.");
        break;
    }
    case 6590:
    {
        returnValue = F("Alte Forstmühle");
        break;
    }
    case 6591:
    {
        returnValue = F("Alte Forststr.");
        break;
    }
    case 6592:
    {
        returnValue = F("Alte Frachtstr.");
        break;
    }
    case 6593:
    {
        returnValue = F("Alte Frahelser Str.");
        break;
    }
    case 6594:
    {
        returnValue = F("Alte Frankenstr.");
        break;
    }
    case 6595:
    {
        returnValue = F("Alte Frankfurter Heerstr.");
        break;
    }
    case 6596:
    {
        returnValue = F("Alte Frankfurter Str.");
        break;
    }
    case 6597:
    {
        returnValue = F("Alte Frankfurter Str. / Haßfurt");
        break;
    }
    case 6598:
    {
        returnValue = F("Alte Frauenberger Str.");
        break;
    }
    case 6599:
    {
        returnValue = F("Alte Frauweilerstr.");
        break;
    }
    case 6600:
    {
        returnValue = F("Alte Freiberger Str.");
        break;
    }
    case 6601:
    {
        returnValue = F("Alte Freiheit");
        break;
    }
    case 6602:
    {
        returnValue = F("Alte Freiheitstr.");
        break;
    }
    case 6603:
    {
        returnValue = F("Alte Freisker Str.");
        break;
    }
    case 6604:
    {
        returnValue = F("Alte Freystädter Str.");
        break;
    }
    case 6605:
    {
        returnValue = F("Alte Friedenstr.");
        break;
    }
    case 6606:
    {
        returnValue = F("Alte Friedersdorfer Str.");
        break;
    }
    case 6607:
    {
        returnValue = F("Alte Friedhofstr.");
        break;
    }
    case 6608:
    {
        returnValue = F("Alte Friedrichstr.");
        break;
    }
    case 6609:
    {
        returnValue = F("Alte Friesoyther Str.");
        break;
    }
    case 6610:
    {
        returnValue = F("Alte Fuchshainer Str.");
        break;
    }
    case 6611:
    {
        returnValue = F("Alte Fuhrherrenstr.");
        break;
    }
    case 6612:
    {
        returnValue = F("Alte Fuhrstr.");
        break;
    }
    case 6613:
    {
        returnValue = F("Alte Fuldabrücke");
        break;
    }
    case 6614:
    {
        returnValue = F("Alte Fuldaer Str.");
        break;
    }
    case 6615:
    {
        returnValue = F("Alte Furt");
        break;
    }
    case 6616:
    {
        returnValue = F("Alte Furth");
        break;
    }
    case 6617:
    {
        returnValue = F("Alte Fähre");
        break;
    }
    case 6618:
    {
        returnValue = F("Alte Fährstr.");
        break;
    }
    case 6619:
    {
        returnValue = F("Alte Färberei");
        break;
    }
    case 6620:
    {
        returnValue = F("Alte Försterei");
        break;
    }
    case 6621:
    {
        returnValue = F("Alte Försterei Borgsdorf");
        break;
    }
    case 6622:
    {
        returnValue = F("Alte Fürstenwalder Str.");
        break;
    }
    case 6623:
    {
        returnValue = F("Alte Fürther Str.");
        break;
    }
    case 6624:
    {
        returnValue = F("Alte Füssinger Str.");
        break;
    }
    case 6625:
    {
        returnValue = F("Alte Gabel");
        break;
    }
    case 6626:
    {
        returnValue = F("Alte Gabler Str.");
        break;
    }
    case 6627:
    {
        returnValue = F("Alte Gabweg");
        break;
    }
    case 6628:
    {
        returnValue = F("Alte Gaesdoncker Str.");
        break;
    }
    case 6629:
    {
        returnValue = F("Alte Gaggenauer Str.");
        break;
    }
    case 6630:
    {
        returnValue = F("Alte Gahlenzer Str.");
        break;
    }
    case 6631:
    {
        returnValue = F("Alte Garatshauser Str. (bis ca. 1970)");
        break;
    }
    case 6632:
    {
        returnValue = F("Alte Garnison");
        break;
    }
    case 6633:
    {
        returnValue = F("Alte Garten");
        break;
    }
    case 6634:
    {
        returnValue = F("Alte Gartenstarße");
        break;
    }
    case 6635:
    {
        returnValue = F("Alte Gartenstr.");
        break;
    }
    case 6636:
    {
        returnValue = F("Alte Gasse");
        break;
    }
    case 6637:
    {
        returnValue = F("Alte Gasthausstr.");
        break;
    }
    case 6638:
    {
        returnValue = F("Alte Geer");
        break;
    }
    case 6639:
    {
        returnValue = F("Alte Geest");
        break;
    }
    case 6640:
    {
        returnValue = F("Alte Gehegstr.");
        break;
    }
    case 6641:
    {
        returnValue = F("Alte Gehrener Str.");
        break;
    }
    case 6642:
    {
        returnValue = F("Alte Gehstorfer Str.");
        break;
    }
    case 6643:
    {
        returnValue = F("Alte Geithainer Str.");
        break;
    }
    case 6644:
    {
        returnValue = F("Alte Gelderner Str.");
        break;
    }
    case 6645:
    {
        returnValue = F("Alte Geleitstr.");
        break;
    }
    case 6646:
    {
        returnValue = F("Alte Gelnhäuser Str.");
        break;
    }
    case 6647:
    {
        returnValue = F("Alte Geltinger Landstr.");
        break;
    }
    case 6648:
    {
        returnValue = F("Alte Gemeinde");
        break;
    }
    case 6649:
    {
        returnValue = F("Alte Gemündener Str.");
        break;
    }
    case 6650:
    {
        returnValue = F("Alte Gennacher Str.");
        break;
    }
    case 6651:
    {
        returnValue = F("Alte Genossenschaft");
        break;
    }
    case 6652:
    {
        returnValue = F("Alte Geraer Str.");
        break;
    }
    case 6653:
    {
        returnValue = F("Alte Gerauer Str.");
        break;
    }
    case 6654:
    {
        returnValue = F("Alte Gerberei");
        break;
    }
    case 6655:
    {
        returnValue = F("Alte Gerberstr.");
        break;
    }
    case 6656:
    {
        returnValue = F("Alte Gerichtsstr.");
        break;
    }
    case 6657:
    {
        returnValue = F("Alte Gerstetter Str.");
        break;
    }
    case 6658:
    {
        returnValue = F("Alte Geyersche Str.");
        break;
    }
    case 6659:
    {
        returnValue = F("Alte Gießener Str.");
        break;
    }
    case 6660:
    {
        returnValue = F("Alte Gießerei");
        break;
    }
    case 6661:
    {
        returnValue = F("Alte Ginsterstr.");
        break;
    }
    case 6662:
    {
        returnValue = F("Alte Gissigheimer Str.");
        break;
    }
    case 6663:
    {
        returnValue = F("Alte Gladbacher Str.");
        break;
    }
    case 6664:
    {
        returnValue = F("Alte Glasfabrik");
        break;
    }
    case 6665:
    {
        returnValue = F("Alte Glashütte");
        break;
    }
    case 6666:
    {
        returnValue = F("Alte Glashüttenstr.");
        break;
    }
    case 6667:
    {
        returnValue = F("Alte Glasstr.");
        break;
    }
    case 6668:
    {
        returnValue = F("Alte Glatter Str.");
        break;
    }
    case 6669:
    {
        returnValue = F("Alte Glockengießerei");
        break;
    }
    case 6670:
    {
        returnValue = F("Alte Gmünder Str.");
        break;
    }
    case 6671:
    {
        returnValue = F("Alte Goitzschestr.");
        break;
    }
    case 6672:
    {
        returnValue = F("Alte Gottower Str.");
        break;
    }
    case 6673:
    {
        returnValue = F("Alte Gottsfelder Str.");
        break;
    }
    case 6674:
    {
        returnValue = F("Alte Grabenstr.");
        break;
    }
    case 6675:
    {
        returnValue = F("Alte Graft");
        break;
    }
    case 6676:
    {
        returnValue = F("Alte Grasseler Str.");
        break;
    }
    case 6677:
    {
        returnValue = F("Alte Grenze");
        break;
    }
    case 6678:
    {
        returnValue = F("Alte Grenzsteine von Oberschmeien");
        break;
    }
    case 6679:
    {
        returnValue = F("Alte Grenzstr.");
        break;
    }
    case 6680:
    {
        returnValue = F("Alte Gresger Str.");
        break;
    }
    case 6681:
    {
        returnValue = F("Alte Großröhrsdorfer Str.");
        break;
    }
    case 6682:
    {
        returnValue = F("Alte Großsachsenheimer Str.");
        break;
    }
    case 6683:
    {
        returnValue = F("Alte Grube");
        break;
    }
    case 6684:
    {
        returnValue = F("Alte Grubenanschlussbahn");
        break;
    }
    case 6685:
    {
        returnValue = F("Alte Gruber Str.");
        break;
    }
    case 6686:
    {
        returnValue = F("Alte Grumbacher Str.");
        break;
    }
    case 6687:
    {
        returnValue = F("Alte Grunbacherstr.");
        break;
    }
    case 6688:
    {
        returnValue = F("Alte Gräfte");
        break;
    }
    case 6689:
    {
        returnValue = F("Alte Gröberssche Str.");
        break;
    }
    case 6690:
    {
        returnValue = F("Alte Grünauer Str.");
        break;
    }
    case 6691:
    {
        returnValue = F("Alte Grüne Str.");
        break;
    }
    case 6692:
    {
        returnValue = F("Alte Grüneberger Landstr.");
        break;
    }
    case 6693:
    {
        returnValue = F("Alte Grünewalder Str.");
        break;
    }
    case 6694:
    {
        returnValue = F("Alte Grüninger Str.");
        break;
    }
    case 6695:
    {
        returnValue = F("Alte Grüntaler Str.");
        break;
    }
    case 6696:
    {
        returnValue = F("Alte Gurtweiler Str.");
        break;
    }
    case 6697:
    {
        returnValue = F("Alte Guteborner Str.");
        break;
    }
    case 6698:
    {
        returnValue = F("Alte Gutmaninger Str.");
        break;
    }
    case 6699:
    {
        returnValue = F("Alte Gutsstr.");
        break;
    }
    case 6700:
    {
        returnValue = F("Alte Guttenberger Str.");
        break;
    }
    case 6701:
    {
        returnValue = F("Alte Gärten");
        break;
    }
    case 6702:
    {
        returnValue = F("Alte Gärtnerei");
        break;
    }
    case 6703:
    {
        returnValue = F("Alte Gärtringer Str.");
        break;
    }
    case 6704:
    {
        returnValue = F("Alte Gögginger Str.");
        break;
    }
    case 6705:
    {
        returnValue = F("Alte Göhlsdorfer Str.");
        break;
    }
    case 6706:
    {
        returnValue = F("Alte Gönnebeker Str.");
        break;
    }
    case 6707:
    {
        returnValue = F("Alte Görkauer Str. / Huhle");
        break;
    }
    case 6708:
    {
        returnValue = F("Alte Güstener Str.");
        break;
    }
    case 6709:
    {
        returnValue = F("Alte Haager Str.");
        break;
    }
    case 6710:
    {
        returnValue = F("Alte Haase");
        break;
    }
    case 6711:
    {
        returnValue = F("Alte Hafenbahn");
        break;
    }
    case 6712:
    {
        returnValue = F("Alte Hafeninsel");
        break;
    }
    case 6713:
    {
        returnValue = F("Alte Hagenstr.");
        break;
    }
    case 6714:
    {
        returnValue = F("Alte Hainfeld Chaussee");
        break;
    }
    case 6715:
    {
        returnValue = F("Alte Haingasse");
        break;
    }
    case 6716:
    {
        returnValue = F("Alte Haiterbacher Str.");
        break;
    }
    case 6717:
    {
        returnValue = F("Alte Halber Str.");
        break;
    }
    case 6718:
    {
        returnValue = F("Alte Halberstädter Heerstr.");
        break;
    }
    case 6719:
    {
        returnValue = F("Alte Halberstädter Str.");
        break;
    }
    case 6720:
    {
        returnValue = F("Alte Halde");
        break;
    }
    case 6721:
    {
        returnValue = F("Alte Haldensteige");
        break;
    }
    case 6722:
    {
        returnValue = F("Alte Haller Str.");
        break;
    }
    case 6723:
    {
        returnValue = F("Alte Hallesche Str.");
        break;
    }
    case 6724:
    {
        returnValue = F("Alte Hamburger");
        break;
    }
    case 6725:
    {
        returnValue = F("Alte Hamburger Poststr.");
        break;
    }
    case 6726:
    {
        returnValue = F("Alte Hammerschmiede");
        break;
    }
    case 6727:
    {
        returnValue = F("Alte Hammerstr.");
        break;
    }
    case 6728:
    {
        returnValue = F("Alte Hanauer Landstr.");
        break;
    }
    case 6729:
    {
        returnValue = F("Alte Handelsstr.");
        break;
    }
    case 6730:
    {
        returnValue = F("Alte Hanner Steige");
        break;
    }
    case 6731:
    {
        returnValue = F("Alte Hannoversche Str.");
        break;
    }
    case 6732:
    {
        returnValue = F("Alte Hansestr.");
        break;
    }
    case 6733:
    {
        returnValue = F("Alte Happenbacher Str.");
        break;
    }
    case 6734:
    {
        returnValue = F("Alte Harburger Str.");
        break;
    }
    case 6735:
    {
        returnValue = F("Alte Hardegser Str.");
        break;
    }
    case 6736:
    {
        returnValue = F("Alte Hardtstr.");
        break;
    }
    case 6737:
    {
        returnValue = F("Alte Harpolinger Str.");
        break;
    }
    case 6738:
    {
        returnValue = F("Alte Harth");
        break;
    }
    case 6739:
    {
        returnValue = F("Alte Harzburger Str.");
        break;
    }
    case 6740:
    {
        returnValue = F("Alte Harzstr.");
        break;
    }
    case 6741:
    {
        returnValue = F("Alte Hasselbacher Str.");
        break;
    }
    case 6742:
    {
        returnValue = F("Alte Hattinger Str.");
        break;
    }
    case 6743:
    {
        returnValue = F("Alte Haudererstr.");
        break;
    }
    case 6744:
    {
        returnValue = F("Alte Hauptschwendaer Str.");
        break;
    }
    case 6745:
    {
        returnValue = F("Alte Hauptstr.");
        break;
    }
    case 6746:
    {
        returnValue = F("Alte Hausacher Str.");
        break;
    }
    case 6747:
    {
        returnValue = F("Alte Hausberger Torstr.");
        break;
    }
    case 6748:
    {
        returnValue = F("Alte Hausdorfer Str.");
        break;
    }
    case 6749:
    {
        returnValue = F("Alte Hausener Str.");
        break;
    }
    case 6750:
    {
        returnValue = F("Alte Hausplätze");
        break;
    }
    case 6751:
    {
        returnValue = F("Alte Havel");
        break;
    }
    case 6752:
    {
        returnValue = F("Alte Hechinger Str.");
        break;
    }
    case 6753:
    {
        returnValue = F("Alte Heck");
        break;
    }
    case 6754:
    {
        returnValue = F("Alte Hecke");
        break;
    }
    case 6755:
    {
        returnValue = F("Alte Heddesheimer Str.");
        break;
    }
    case 6756:
    {
        returnValue = F("Alte Heer- und Handelsstaße");
        break;
    }
    case 6757:
    {
        returnValue = F("Alte Heer- und Handelsstr.");
        break;
    }
    case 6758:
    {
        returnValue = F("Alte Heeresstr.");
        break;
    }
    case 6759:
    {
        returnValue = F("Alte Heerstr.");
        break;
    }
    case 6760:
    {
        returnValue = F("Alte Hege");
        break;
    }
    case 6761:
    {
        returnValue = F("Alte Hegenloher Str.");
        break;
    }
    case 6762:
    {
        returnValue = F("Alte Hegwaldschneise");
        break;
    }
    case 6763:
    {
        returnValue = F("Alte Heid");
        break;
    }
    case 6764:
    {
        returnValue = F("Alte Heide");
        break;
    }
    case 6765:
    {
        returnValue = F("Alte Heidelberger Str.");
        break;
    }
    case 6766:
    {
        returnValue = F("Alte Heidener Landstr.");
        break;
    }
    case 6767:
    {
        returnValue = F("Alte Heidenheimer Str.");
        break;
    }
    case 6768:
    {
        returnValue = F("Alte Heidersdorfer Str.");
        break;
    }
    case 6769:
    {
        returnValue = F("Alte Heidesheimer Str.");
        break;
    }
    case 6770:
    {
        returnValue = F("Alte Heidestr.");
        break;
    }
    case 6771:
    {
        returnValue = F("Alte Heidewaldstr.");
        break;
    }
    case 6772:
    {
        returnValue = F("Alte Heidkoppel");
        break;
    }
    case 6773:
    {
        returnValue = F("Alte Heilbronner Str.");
        break;
    }
    case 6774:
    {
        returnValue = F("Alte Heiligenstr.");
        break;
    }
    case 6775:
    {
        returnValue = F("Alte Heldrungener Str.");
        break;
    }
    case 6776:
    {
        returnValue = F("Alte Helmsdorfer Str.");
        break;
    }
    case 6777:
    {
        returnValue = F("Alte Helmstadter Str.");
        break;
    }
    case 6778:
    {
        returnValue = F("Alte Hemsbacher Str.");
        break;
    }
    case 6779:
    {
        returnValue = F("Alte Henne");
        break;
    }
    case 6780:
    {
        returnValue = F("Alte Henneberger Str.");
        break;
    }
    case 6781:
    {
        returnValue = F("Alte Herberner Str.");
        break;
    }
    case 6782:
    {
        returnValue = F("Alte Herbkestr.");
        break;
    }
    case 6783:
    {
        returnValue = F("Alte Herdstr.");
        break;
    }
    case 6784:
    {
        returnValue = F("Alte Heringsfischerei");
        break;
    }
    case 6785:
    {
        returnValue = F("Alte Herlikofer Str.");
        break;
    }
    case 6786:
    {
        returnValue = F("Alte Hermsdorfer Str.");
        break;
    }
    case 6787:
    {
        returnValue = F("Alte Herrenberger Str.");
        break;
    }
    case 6788:
    {
        returnValue = F("Alte Herrenhaider Str.");
        break;
    }
    case 6789:
    {
        returnValue = F("Alte Herrenweg");
        break;
    }
    case 6790:
    {
        returnValue = F("Alte Herrnsheimer Str.");
        break;
    }
    case 6791:
    {
        returnValue = F("Alte Hersfelder Str.");
        break;
    }
    case 6792:
    {
        returnValue = F("Alte Herzberger Str.");
        break;
    }
    case 6793:
    {
        returnValue = F("Alte Hessentaler Str.");
        break;
    }
    case 6794:
    {
        returnValue = F("Alte Heuchstetter Str.");
        break;
    }
    case 6795:
    {
        returnValue = F("Alte Heusteige");
        break;
    }
    case 6796:
    {
        returnValue = F("Alte Hiddestorfer Str.");
        break;
    }
    case 6797:
    {
        returnValue = F("Alte Hillscheider Str.");
        break;
    }
    case 6798:
    {
        returnValue = F("Alte Hindfelder Str.");
        break;
    }
    case 6799:
    {
        returnValue = F("Alte Hintergasse");
        break;
    }
    case 6800:
    {
        returnValue = F("Alte Hinterseer Str.");
        break;
    }
    case 6801:
    {
        returnValue = F("Alte Hirschfelder Str.");
        break;
    }
    case 6802:
    {
        returnValue = F("Alte Hirschhorner Steige");
        break;
    }
    case 6803:
    {
        returnValue = F("Alte Hirschhorner Str.");
        break;
    }
    case 6804:
    {
        returnValue = F("Alte Hochstr.");
        break;
    }
    case 6805:
    {
        returnValue = F("Alte Hof");
        break;
    }
    case 6806:
    {
        returnValue = F("Alte Hofer Str.");
        break;
    }
    case 6807:
    {
        returnValue = F("Alte Hofgasse");
        break;
    }
    case 6808:
    {
        returnValue = F("Alte Hofmarkstr.");
        break;
    }
    case 6809:
    {
        returnValue = F("Alte Hofstelle");
        break;
    }
    case 6810:
    {
        returnValue = F("Alte Hofstr.");
        break;
    }
    case 6811:
    {
        returnValue = F("Alte Hohburger Str.");
        break;
    }
    case 6812:
    {
        returnValue = F("Alte Hohburkersdorfer Str.");
        break;
    }
    case 6813:
    {
        returnValue = F("Alte Hohe Str.");
        break;
    }
    case 6814:
    {
        returnValue = F("Alte Hohe Str. / Panoramaweg");
        break;
    }
    case 6815:
    {
        returnValue = F("Alte Hohenburger Str.");
        break;
    }
    case 6816:
    {
        returnValue = F("Alte Hohenzeller Str.");
        break;
    }
    case 6817:
    {
        returnValue = F("Alte Hohl");
        break;
    }
    case 6818:
    {
        returnValue = F("Alte Hohle");
        break;
    }
    case 6819:
    {
        returnValue = F("Alte Hohlstr.");
        break;
    }
    case 6820:
    {
        returnValue = F("Alte Hohnsteiner Str.");
        break;
    }
    case 6821:
    {
        returnValue = F("Alte Holle");
        break;
    }
    case 6822:
    {
        returnValue = F("Alte Hollenstr.");
        break;
    }
    case 6823:
    {
        returnValue = F("Alte Holter Str.");
        break;
    }
    case 6824:
    {
        returnValue = F("Alte Holtumer Str.");
        break;
    }
    case 6825:
    {
        returnValue = F("Alte Holzbrücke");
        break;
    }
    case 6826:
    {
        returnValue = F("Alte Holzgasse");
        break;
    }
    case 6827:
    {
        returnValue = F("Alte Holzhausener Str.");
        break;
    }
    case 6828:
    {
        returnValue = F("Alte Holzhäuser Str.");
        break;
    }
    case 6829:
    {
        returnValue = F("Alte Holzindustrie");
        break;
    }
    case 6830:
    {
        returnValue = F("Alte Holzstr.");
        break;
    }
    case 6831:
    {
        returnValue = F("Alte Honrather Str.");
        break;
    }
    case 6832:
    {
        returnValue = F("Alte Hopfenstr.");
        break;
    }
    case 6833:
    {
        returnValue = F("Alte Hopstener Str.");
        break;
    }
    case 6834:
    {
        returnValue = F("Alte Horber Str.");
        break;
    }
    case 6835:
    {
        returnValue = F("Alte Hormersdorfer Str.");
        break;
    }
    case 6836:
    {
        returnValue = F("Alte Horst");
        break;
    }
    case 6837:
    {
        returnValue = F("Alte Horstfelder Str.");
        break;
    }
    case 6838:
    {
        returnValue = F("Alte Hospitalgasse");
        break;
    }
    case 6839:
    {
        returnValue = F("Alte Huchenfelder Str.");
        break;
    }
    case 6840:
    {
        returnValue = F("Alte Hude");
        break;
    }
    case 6841:
    {
        returnValue = F("Alte Hudeschnade");
        break;
    }
    case 6842:
    {
        returnValue = F("Alte Hummelschneise");
        break;
    }
    case 6843:
    {
        returnValue = F("Alte Hunte");
        break;
    }
    case 6844:
    {
        returnValue = F("Alte Hute");
        break;
    }
    case 6845:
    {
        returnValue = F("Alte Häfnersgasse");
        break;
    }
    case 6846:
    {
        returnValue = F("Alte Häge");
        break;
    }
    case 6847:
    {
        returnValue = F("Alte Härtsfeldbahn");
        break;
    }
    case 6848:
    {
        returnValue = F("Alte Höfe");
        break;
    }
    case 6849:
    {
        returnValue = F("Alte Höfe Str.");
        break;
    }
    case 6850:
    {
        returnValue = F("Alte Höfener Str.");
        break;
    }
    case 6851:
    {
        returnValue = F("Alte Höhe");
        break;
    }
    case 6852:
    {
        returnValue = F("Alte Höhenstr.");
        break;
    }
    case 6853:
    {
        returnValue = F("Alte Höhle");
        break;
    }
    case 6854:
    {
        returnValue = F("Alte Höhlenstr.");
        break;
    }
    case 6855:
    {
        returnValue = F("Alte Hölle");
        break;
    }
    case 6856:
    {
        returnValue = F("Alte Hördterbergstr.");
        break;
    }
    case 6857:
    {
        returnValue = F("Alte Hörst");
        break;
    }
    case 6858:
    {
        returnValue = F("Alte Hülscheider Str.");
        break;
    }
    case 6859:
    {
        returnValue = F("Alte Hütte");
        break;
    }
    case 6860:
    {
        returnValue = F("Alte Hüttenstr.");
        break;
    }
    case 6861:
    {
        returnValue = F("Alte Ibentalstr.");
        break;
    }
    case 6862:
    {
        returnValue = F("Alte Idsteiner Str.");
        break;
    }
    case 6863:
    {
        returnValue = F("Alte Ilmenauer Str.");
        break;
    }
    case 6864:
    {
        returnValue = F("Alte Industriestr.");
        break;
    }
    case 6865:
    {
        returnValue = F("Alte Ingolstädter Str.");
        break;
    }
    case 6866:
    {
        returnValue = F("Alte Innstr.");
        break;
    }
    case 6867:
    {
        returnValue = F("Alte Insel");
        break;
    }
    case 6868:
    {
        returnValue = F("Alte Iphöfer Str.");
        break;
    }
    case 6869:
    {
        returnValue = F("Alte Isen");
        break;
    }
    case 6870:
    {
        returnValue = F("Alte Ittersbacher Str.");
        break;
    }
    case 6871:
    {
        returnValue = F("Alte Ixheimer Str.");
        break;
    }
    case 6872:
    {
        returnValue = F("Alte Jeesewitzer Str.");
        break;
    }
    case 6873:
    {
        returnValue = F("Alte Jeetze");
        break;
    }
    case 6874:
    {
        returnValue = F("Alte Jenaer Str.");
        break;
    }
    case 6875:
    {
        returnValue = F("Alte Jerisauer Str.");
        break;
    }
    case 6876:
    {
        returnValue = F("Alte Jersleber Chaussee");
        break;
    }
    case 6877:
    {
        returnValue = F("Alte Jettingsdorfer Str.");
        break;
    }
    case 6878:
    {
        returnValue = F("Alte Joachimsthaler Str.");
        break;
    }
    case 6879:
    {
        returnValue = F("Alte Johanngeorgenstädter Str.");
        break;
    }
    case 6880:
    {
        returnValue = F("Alte Jägerhäuser Str.");
        break;
    }
    case 6881:
    {
        returnValue = F("Alte Jößnitzer Str.");
        break;
    }
    case 6882:
    {
        returnValue = F("Alte Jühnsdorfer Str.");
        break;
    }
    case 6883:
    {
        returnValue = F("Alte Jülicher Str.");
        break;
    }
    case 6884:
    {
        returnValue = F("Alte K1");
        break;
    }
    case 6885:
    {
        returnValue = F("Alte Kahrstr.");
        break;
    }
    case 6886:
    {
        returnValue = F("Alte Kaiserstr.");
        break;
    }
    case 6887:
    {
        returnValue = F("Alte Kalkstr.");
        break;
    }
    case 6888:
    {
        returnValue = F("Alte Kalkumer Str.");
        break;
    }
    case 6889:
    {
        returnValue = F("Alte Kamenzer Poststr.");
        break;
    }
    case 6890:
    {
        returnValue = F("Alte Kamenzer Str.");
        break;
    }
    case 6891:
    {
        returnValue = F("Alte Kammgarnspinnerei");
        break;
    }
    case 6892:
    {
        returnValue = F("Alte Kamp");
        break;
    }
    case 6893:
    {
        returnValue = F("Alte Kampstr.");
        break;
    }
    case 6894:
    {
        returnValue = F("Alte Kandelstr.");
        break;
    }
    case 6895:
    {
        returnValue = F("Alte Kantine");
        break;
    }
    case 6896:
    {
        returnValue = F("Alte Kapelle");
        break;
    }
    case 6897:
    {
        returnValue = F("Alte Kapellenstr.");
        break;
    }
    case 6898:
    {
        returnValue = F("Alte Karlsruher Str.");
        break;
    }
    case 6899:
    {
        returnValue = F("Alte Kaserne");
        break;
    }
    case 6900:
    {
        returnValue = F("Alte Kasernenstr.");
        break;
    }
    case 6901:
    {
        returnValue = F("Alte Kasernstr.");
        break;
    }
    case 6902:
    {
        returnValue = F("Alte Kasseler Landstr.");
        break;
    }
    case 6903:
    {
        returnValue = F("Alte Kasseler Str.");
        break;
    }
    case 6904:
    {
        returnValue = F("Alte Kaut");
        break;
    }
    case 6905:
    {
        returnValue = F("Alte Kehlbacher Str.");
        break;
    }
    case 6906:
    {
        returnValue = F("Alte Kehr");
        break;
    }
    case 6907:
    {
        returnValue = F("Alte Kellerbergstr.");
        break;
    }
    case 6908:
    {
        returnValue = F("Alte Kellerei");
        break;
    }
    case 6909:
    {
        returnValue = F("Alte Kellerstr.");
        break;
    }
    case 6910:
    {
        returnValue = F("Alte Kelter");
        break;
    }
    case 6911:
    {
        returnValue = F("Alte Keltergasse");
        break;
    }
    case 6912:
    {
        returnValue = F("Alte Kemel-Limburger Str.");
        break;
    }
    case 6913:
    {
        returnValue = F("Alte Kemmathstaach");
        break;
    }
    case 6914:
    {
        returnValue = F("Alte Kemmenauer Str.");
        break;
    }
    case 6915:
    {
        returnValue = F("Alte Kemmerhofstr.");
        break;
    }
    case 6916:
    {
        returnValue = F("Alte Kerschlacher Str.");
        break;
    }
    case 6917:
    {
        returnValue = F("Alte Kieler Landstr.");
        break;
    }
    case 6918:
    {
        returnValue = F("Alte Kieler Str.");
        break;
    }
    case 6919:
    {
        returnValue = F("Alte Kiesbahn");
        break;
    }
    case 6920:
    {
        returnValue = F("Alte Kietzstr.");
        break;
    }
    case 6921:
    {
        returnValue = F("Alte Killerstr.");
        break;
    }
    case 6922:
    {
        returnValue = F("Alte Kirchberger Str.");
        break;
    }
    case 6923:
    {
        returnValue = F("Alte Kirche");
        break;
    }
    case 6924:
    {
        returnValue = F("Alte Kirchenstr.");
        break;
    }
    case 6925:
    {
        returnValue = F("Alte Kirchgasse");
        break;
    }
    case 6926:
    {
        returnValue = F("Alte Kirchgönser Str.");
        break;
    }
    case 6927:
    {
        returnValue = F("Alte Kirchhainer Str.");
        break;
    }
    case 6928:
    {
        returnValue = F("Alte Kirchheimer Str.");
        break;
    }
    case 6929:
    {
        returnValue = F("Alte Kirchhofsgasse");
        break;
    }
    case 6930:
    {
        returnValue = F("Alte Kirchhofstr.");
        break;
    }
    case 6931:
    {
        returnValue = F("Alte Kirchsteige");
        break;
    }
    case 6932:
    {
        returnValue = F("Alte Kirchstr.");
        break;
    }
    case 6933:
    {
        returnValue = F("Alte Kirnaubrücke");
        break;
    }
    case 6934:
    {
        returnValue = F("Alte Kirnecker Steige");
        break;
    }
    case 6935:
    {
        returnValue = F("Alte Kirschallee");
        break;
    }
    case 6936:
    {
        returnValue = F("Alte Kissinger Str.");
        break;
    }
    case 6937:
    {
        returnValue = F("Alte Kleinbahn");
        break;
    }
    case 6938:
    {
        returnValue = F("Alte Kleinbahntrasse");
        break;
    }
    case 6939:
    {
        returnValue = F("Alte Kleinbottwarer Str.");
        break;
    }
    case 6940:
    {
        returnValue = F("Alte Kleinenberger Str.");
        break;
    }
    case 6941:
    {
        returnValue = F("Alte Kleinglattbacher Str.");
        break;
    }
    case 6942:
    {
        returnValue = F("Alte Kleinleipischer Str.");
        break;
    }
    case 6943:
    {
        returnValue = F("Alte Kleinwallstädter Str.");
        break;
    }
    case 6944:
    {
        returnValue = F("Alte Klever Str.");
        break;
    }
    case 6945:
    {
        returnValue = F("Alte Klingenthaler Str.");
        break;
    }
    case 6946:
    {
        returnValue = F("Alte Klockenhäger Landstr.");
        break;
    }
    case 6947:
    {
        returnValue = F("Alte Klosterallee");
        break;
    }
    case 6948:
    {
        returnValue = F("Alte Klosterstr.");
        break;
    }
    case 6949:
    {
        returnValue = F("Alte Kläranlage");
        break;
    }
    case 6950:
    {
        returnValue = F("Alte Klötzerstr.");
        break;
    }
    case 6951:
    {
        returnValue = F("Alte Knehdener Str.");
        break;
    }
    case 6952:
    {
        returnValue = F("Alte Kneitinger Str.");
        break;
    }
    case 6953:
    {
        returnValue = F("Alte Kniebissteige");
        break;
    }
    case 6954:
    {
        returnValue = F("Alte Kniebisstr.");
        break;
    }
    case 6955:
    {
        returnValue = F("Alte Knittlinger Str.");
        break;
    }
    case 6956:
    {
        returnValue = F("Alte Knochenhauerstr.");
        break;
    }
    case 6957:
    {
        returnValue = F("Alte Knocke");
        break;
    }
    case 6958:
    {
        returnValue = F("Alte Kobershainer Str.");
        break;
    }
    case 6959:
    {
        returnValue = F("Alte Koblenzer Str.");
        break;
    }
    case 6960:
    {
        returnValue = F("Alte Koblenzer Str. \"Chaussee");
        break;
    }
    case 6961:
    {
        returnValue = F("Alte Kohlenstr.");
        break;
    }
    case 6962:
    {
        returnValue = F("Alte Kohlenwäsche");
        break;
    }
    case 6963:
    {
        returnValue = F("Alte Kohlhöfer Steige");
        break;
    }
    case 6964:
    {
        returnValue = F("Alte Kolonate");
        break;
    }
    case 6965:
    {
        returnValue = F("Alte Kolonie");
        break;
    }
    case 6966:
    {
        returnValue = F("Alte Kompanie");
        break;
    }
    case 6967:
    {
        returnValue = F("Alte Koppel");
        break;
    }
    case 6968:
    {
        returnValue = F("Alte Korbacher Str.");
        break;
    }
    case 6969:
    {
        returnValue = F("Alte Kornbacher Str.");
        break;
    }
    case 6970:
    {
        returnValue = F("Alte Kornbrennerei");
        break;
    }
    case 6971:
    {
        returnValue = F("Alte Kornkammer");
        break;
    }
    case 6972:
    {
        returnValue = F("Alte Krakauer Str.");
        break;
    }
    case 6973:
    {
        returnValue = F("Alte Kramermarktwiese");
        break;
    }
    case 6974:
    {
        returnValue = F("Alte Krauchenwieser Str.");
        break;
    }
    case 6975:
    {
        returnValue = F("Alte Krefelder Str.");
        break;
    }
    case 6976:
    {
        returnValue = F("Alte Kreipe");
        break;
    }
    case 6977:
    {
        returnValue = F("Alte Kreisbahn");
        break;
    }
    case 6978:
    {
        returnValue = F("Alte Kreisstr.");
        break;
    }
    case 6979:
    {
        returnValue = F("Alte Krugstr.");
        break;
    }
    case 6980:
    {
        returnValue = F("Alte Krukumer Str.");
        break;
    }
    case 6981:
    {
        returnValue = F("Alte Krumme Gasse");
        break;
    }
    case 6982:
    {
        returnValue = F("Alte Kuhgracht");
        break;
    }
    case 6983:
    {
        returnValue = F("Alte Kuhstr.");
        break;
    }
    case 6984:
    {
        returnValue = F("Alte Kupferstr.");
        break;
    }
    case 6985:
    {
        returnValue = F("Alte Kuranlagen");
        break;
    }
    case 6986:
    {
        returnValue = F("Alte Kuseler Str.");
        break;
    }
    case 6987:
    {
        returnValue = F("Alte Kälbersteige");
        break;
    }
    case 6988:
    {
        returnValue = F("Alte Kälbertshäuser Str.");
        break;
    }
    case 6989:
    {
        returnValue = F("Alte Kämpe");
        break;
    }
    case 6990:
    {
        returnValue = F("Alte Kärnerstr.");
        break;
    }
    case 6991:
    {
        returnValue = F("Alte Kätnerei");
        break;
    }
    case 6992:
    {
        returnValue = F("Alte Kölledaer Str.");
        break;
    }
    case 6993:
    {
        returnValue = F("Alte Kölner Str.");
        break;
    }
    case 6994:
    {
        returnValue = F("Alte Kölnische Landstr.");
        break;
    }
    case 6995:
    {
        returnValue = F("Alte Kölnische Str.");
        break;
    }
    case 6996:
    {
        returnValue = F("Alte Königsberger Str.");
        break;
    }
    case 6997:
    {
        returnValue = F("Alte Königsfelder Str.");
        break;
    }
    case 6998:
    {
        returnValue = F("Alte Königsseer Str.");
        break;
    }
    case 6999:
    {
        returnValue = F("Alte Königsstr.");
        break;
    }
    case 7000:
    {
        returnValue = F("Alte Königswalder Str.");
        break;
    }
    case 7001:
    {
        returnValue = F("Alte Könnernsche Str.");
        break;
    }
    case 7002:
    {
        returnValue = F("Alte Kösinger Str.");
        break;
    }
    case 7003:
    {
        returnValue = F("Alte Köstlbacher Str.");
        break;
    }
    case 7004:
    {
        returnValue = F("Alte Köthener Str.");
        break;
    }
    case 7005:
    {
        returnValue = F("Alte Kümlaer Str.");
        break;
    }
    case 7006:
    {
        returnValue = F("Alte Kürassierstr.");
        break;
    }
    case 7007:
    {
        returnValue = F("Alte L 12");
        break;
    }
    case 7008:
    {
        returnValue = F("Alte Lache");
        break;
    }
    case 7009:
    {
        returnValue = F("Alte Ladenstr.");
        break;
    }
    case 7010:
    {
        returnValue = F("Alte Ladestr.");
        break;
    }
    case 7011:
    {
        returnValue = F("Alte Laerfeldstr.");
        break;
    }
    case 7012:
    {
        returnValue = F("Alte Lage");
        break;
    }
    case 7013:
    {
        returnValue = F("Alte Lahnbrücke");
        break;
    }
    case 7014:
    {
        returnValue = F("Alte Lahnstr.");
        break;
    }
    case 7015:
    {
        returnValue = F("Alte Landauer Str.");
        break;
    }
    case 7016:
    {
        returnValue = F("Alte Lande");
        break;
    }
    case 7017:
    {
        returnValue = F("Alte Landebahn");
        break;
    }
    case 7018:
    {
        returnValue = F("Alte Landesstr.");
        break;
    }
    case 7019:
    {
        returnValue = F("Alte Landgerichtsstr.");
        break;
    }
    case 7020:
    {
        returnValue = F("Alte Landsberger Str.");
        break;
    }
    case 7021:
    {
        returnValue = F("Alte Landstr.");
        break;
    }
    case 7022:
    {
        returnValue = F("Alte Landwehr");
        break;
    }
    case 7023:
    {
        returnValue = F("Alte Langdorfer Str.");
        break;
    }
    case 7024:
    {
        returnValue = F("Alte Lange Str.");
        break;
    }
    case 7025:
    {
        returnValue = F("Alte Langenwolmsdorfer Str.");
        break;
    }
    case 7026:
    {
        returnValue = F("Alte Langewahler Chaussee");
        break;
    }
    case 7027:
    {
        returnValue = F("Alte Langewiesener Str.");
        break;
    }
    case 7028:
    {
        returnValue = F("Alte Langgasse");
        break;
    }
    case 7029:
    {
        returnValue = F("Alte Lauchstädter Str.");
        break;
    }
    case 7030:
    {
        returnValue = F("Alte Laudenbacher Str.");
        break;
    }
    case 7031:
    {
        returnValue = F("Alte Lauinger Str.");
        break;
    }
    case 7032:
    {
        returnValue = F("Alte Lausitzer Str.");
        break;
    }
    case 7033:
    {
        returnValue = F("Alte Lay");
        break;
    }
    case 7034:
    {
        returnValue = F("Alte Lebacher Str.");
        break;
    }
    case 7035:
    {
        returnValue = F("Alte Lederfabrik");
        break;
    }
    case 7036:
    {
        returnValue = F("Alte Leerer Str.");
        break;
    }
    case 7037:
    {
        returnValue = F("Alte Lehmgrube");
        break;
    }
    case 7038:
    {
        returnValue = F("Alte Lehniner Str.");
        break;
    }
    case 7039:
    {
        returnValue = F("Alte Leidenhöfer Str.");
        break;
    }
    case 7040:
    {
        returnValue = F("Alte Leimgrube");
        break;
    }
    case 7041:
    {
        returnValue = F("Alte Leinestr.");
        break;
    }
    case 7042:
    {
        returnValue = F("Alte Leipaer Str.");
        break;
    }
    case 7043:
    {
        returnValue = F("Alte Leipziger");
        break;
    }
    case 7044:
    {
        returnValue = F("Alte Leipziger Str.");
        break;
    }
    case 7045:
    {
        returnValue = F("Alte Leite");
        break;
    }
    case 7046:
    {
        returnValue = F("Alte Leithe");
        break;
    }
    case 7047:
    {
        returnValue = F("Alte Leitstr.");
        break;
    }
    case 7048:
    {
        returnValue = F("Alte Lembacher Str.");
        break;
    }
    case 7049:
    {
        returnValue = F("Alte Lemseller Waldstr.");
        break;
    }
    case 7050:
    {
        returnValue = F("Alte Lengenfelder Str.");
        break;
    }
    case 7051:
    {
        returnValue = F("Alte Lenkersdorfer Str.");
        break;
    }
    case 7052:
    {
        returnValue = F("Alte Lenscheider Str.");
        break;
    }
    case 7053:
    {
        returnValue = F("Alte Leonberger Str.");
        break;
    }
    case 7054:
    {
        returnValue = F("Alte Leuner Str.");
        break;
    }
    case 7055:
    {
        returnValue = F("Alte Ley");
        break;
    }
    case 7056:
    {
        returnValue = F("Alte Licher Str.");
        break;
    }
    case 7057:
    {
        returnValue = F("Alte Lichtenberger Str.");
        break;
    }
    case 7058:
    {
        returnValue = F("Alte Lichtenburger Str.");
        break;
    }
    case 7059:
    {
        returnValue = F("Alte Liebenauer Str.");
        break;
    }
    case 7060:
    {
        returnValue = F("Alte Liebensteiner Str.");
        break;
    }
    case 7061:
    {
        returnValue = F("Alte Liebenwalder Str.");
        break;
    }
    case 7062:
    {
        returnValue = F("Alte Liebenzeller Str.");
        break;
    }
    case 7063:
    {
        returnValue = F("Alte Liene");
        break;
    }
    case 7064:
    {
        returnValue = F("Alte Lindacher Str.");
        break;
    }
    case 7065:
    {
        returnValue = F("Alte Linde");
        break;
    }
    case 7066:
    {
        returnValue = F("Alte Lindenalleee");
        break;
    }
    case 7067:
    {
        returnValue = F("Alte Lindenschule");
        break;
    }
    case 7068:
    {
        returnValue = F("Alte Lindenstr.");
        break;
    }
    case 7069:
    {
        returnValue = F("Alte Lindentaler Str.");
        break;
    }
    case 7070:
    {
        returnValue = F("Alte Linie");
        break;
    }
    case 7071:
    {
        returnValue = F("Alte Linner Str.");
        break;
    }
    case 7072:
    {
        returnValue = F("Alte Linzer Str.");
        break;
    }
    case 7073:
    {
        returnValue = F("Alte Lippstädter Str.");
        break;
    }
    case 7074:
    {
        returnValue = F("Alte Litzelstetter Str.");
        break;
    }
    case 7075:
    {
        returnValue = F("Alte Loch");
        break;
    }
    case 7076:
    {
        returnValue = F("Alte Loher Str.");
        break;
    }
    case 7077:
    {
        returnValue = F("Alte Lohmarer Str.");
        break;
    }
    case 7078:
    {
        returnValue = F("Alte Lohmstr.");
        break;
    }
    case 7079:
    {
        returnValue = F("Alte Lomersheimer Str.");
        break;
    }
    case 7080:
    {
        returnValue = F("Alte Lorcher Str.");
        break;
    }
    case 7081:
    {
        returnValue = F("Alte Luckaer Str.");
        break;
    }
    case 7082:
    {
        returnValue = F("Alte Luckauer Str.");
        break;
    }
    case 7083:
    {
        returnValue = F("Alte Luckenwalder Str.");
        break;
    }
    case 7084:
    {
        returnValue = F("Alte Ludwigshöhe");
        break;
    }
    case 7085:
    {
        returnValue = F("Alte Ludwigsstädter Str.");
        break;
    }
    case 7086:
    {
        returnValue = F("Alte Luisenstr.");
        break;
    }
    case 7087:
    {
        returnValue = F("Alte Luneschleuse");
        break;
    }
    case 7088:
    {
        returnValue = F("Alte Lunzenauer Str.");
        break;
    }
    case 7089:
    {
        returnValue = F("Alte Lychener Landstaße");
        break;
    }
    case 7090:
    {
        returnValue = F("Alte Länderstr.");
        break;
    }
    case 7091:
    {
        returnValue = F("Alte Löbauer Str.");
        break;
    }
    case 7092:
    {
        returnValue = F("Alte Löbbenbrücke");
        break;
    }
    case 7093:
    {
        returnValue = F("Alte Löbejüner Str.");
        break;
    }
    case 7094:
    {
        returnValue = F("Alte Löninger Str.");
        break;
    }
    case 7095:
    {
        returnValue = F("Alte Lößnitzer Str.");
        break;
    }
    case 7096:
    {
        returnValue = F("Alte Lübecker Chaussee");
        break;
    }
    case 7097:
    {
        returnValue = F("Alte Lübecker Landstr.");
        break;
    }
    case 7098:
    {
        returnValue = F("Alte Lüneburger Bahn");
        break;
    }
    case 7099:
    {
        returnValue = F("Alte Lüneburger Str.");
        break;
    }
    case 7100:
    {
        returnValue = F("Alte Maar");
        break;
    }
    case 7101:
    {
        returnValue = F("Alte Maate");
        break;
    }
    case 7102:
    {
        returnValue = F("Alte Magazinstr.");
        break;
    }
    case 7103:
    {
        returnValue = F("Alte Magdeburger Str.");
        break;
    }
    case 7104:
    {
        returnValue = F("Alte Mahlower Str.");
        break;
    }
    case 7105:
    {
        returnValue = F("Alte Mainbrücke");
        break;
    }
    case 7106:
    {
        returnValue = F("Alte Mainbullauer Str.");
        break;
    }
    case 7107:
    {
        returnValue = F("Alte Mainstr.");
        break;
    }
    case 7108:
    {
        returnValue = F("Alte Mainzer Landstr.");
        break;
    }
    case 7109:
    {
        returnValue = F("Alte Mainzer Str.");
        break;
    }
    case 7110:
    {
        returnValue = F("Alte Malchower Str.");
        break;
    }
    case 7111:
    {
        returnValue = F("Alte Malenter Landstr.");
        break;
    }
    case 7112:
    {
        returnValue = F("Alte Malzfabrik");
        break;
    }
    case 7113:
    {
        returnValue = F("Alte Manggasse");
        break;
    }
    case 7114:
    {
        returnValue = F("Alte Mannheimer Landstr.");
        break;
    }
    case 7115:
    {
        returnValue = F("Alte Mannheimer Poststr.");
        break;
    }
    case 7116:
    {
        returnValue = F("Alte Mannheimer Str.");
        break;
    }
    case 7117:
    {
        returnValue = F("Alte Marburger Str.");
        break;
    }
    case 7118:
    {
        returnValue = F("Alte Marienberger Str.");
        break;
    }
    case 7119:
    {
        returnValue = F("Alte Marienstr.");
        break;
    }
    case 7120:
    {
        returnValue = F("Alte Marienthaler Str.");
        break;
    }
    case 7121:
    {
        returnValue = F("Alte Mark");
        break;
    }
    case 7122:
    {
        returnValue = F("Alte Markranstädter Str.");
        break;
    }
    case 7123:
    {
        returnValue = F("Alte Markstr.");
        break;
    }
    case 7124:
    {
        returnValue = F("Alte Marksuhler Str.");
        break;
    }
    case 7125:
    {
        returnValue = F("Alte Marktgasse");
        break;
    }
    case 7126:
    {
        returnValue = F("Alte Markthalle");
        break;
    }
    case 7127:
    {
        returnValue = F("Alte Marktoberdorfer Str.");
        break;
    }
    case 7128:
    {
        returnValue = F("Alte Marktsstr.");
        break;
    }
    case 7129:
    {
        returnValue = F("Alte Marktstr.");
        break;
    }
    case 7130:
    {
        returnValue = F("Alte Marktstätte");
        break;
    }
    case 7131:
    {
        returnValue = F("Alte Marsch");
        break;
    }
    case 7132:
    {
        returnValue = F("Alte Marter");
        break;
    }
    case 7133:
    {
        returnValue = F("Alte Mauenheimer Str.");
        break;
    }
    case 7134:
    {
        returnValue = F("Alte Mauer");
        break;
    }
    case 7135:
    {
        returnValue = F("Alte Mauergasse");
        break;
    }
    case 7136:
    {
        returnValue = F("Alte Mauerstr.");
        break;
    }
    case 7137:
    {
        returnValue = F("Alte Mayener Str.");
        break;
    }
    case 7138:
    {
        returnValue = F("Alte Medem");
        break;
    }
    case 7139:
    {
        returnValue = F("Alte Meede");
        break;
    }
    case 7140:
    {
        returnValue = F("Alte Meeschen");
        break;
    }
    case 7141:
    {
        returnValue = F("Alte Meierei");
        break;
    }
    case 7142:
    {
        returnValue = F("Alte Meierstr.");
        break;
    }
    case 7143:
    {
        returnValue = F("Alte Meile");
        break;
    }
    case 7144:
    {
        returnValue = F("Alte Meißner Str.");
        break;
    }
    case 7145:
    {
        returnValue = F("Alte Memminger Str.");
        break;
    }
    case 7146:
    {
        returnValue = F("Alte Menger Str.");
        break;
    }
    case 7147:
    {
        returnValue = F("Alte Mengsberger Str.");
        break;
    }
    case 7148:
    {
        returnValue = F("Alte Mergentheimer Str.");
        break;
    }
    case 7149:
    {
        returnValue = F("Alte Meßstr.");
        break;
    }
    case 7150:
    {
        returnValue = F("Alte Michelsdorfer Str.");
        break;
    }
    case 7151:
    {
        returnValue = F("Alte Miesbacher Str.");
        break;
    }
    case 7152:
    {
        returnValue = F("Alte Mildenseer Str.");
        break;
    }
    case 7153:
    {
        returnValue = F("Alte Militärstr.");
        break;
    }
    case 7154:
    {
        returnValue = F("Alte Militärstrasse");
        break;
    }
    case 7155:
    {
        returnValue = F("Alte Miltenberger Steige");
        break;
    }
    case 7156:
    {
        returnValue = F("Alte Minol-Tankstelle");
        break;
    }
    case 7157:
    {
        returnValue = F("Alte Mitteldorfer Str.");
        break;
    }
    case 7158:
    {
        returnValue = F("Alte Mittelgasse");
        break;
    }
    case 7159:
    {
        returnValue = F("Alte Mittelsaidaer Str.");
        break;
    }
    case 7160:
    {
        returnValue = F("Alte Mittelstr.");
        break;
    }
    case 7161:
    {
        returnValue = F("Alte Mittenwalder Str.");
        break;
    }
    case 7162:
    {
        returnValue = F("Alte Molkerei");
        break;
    }
    case 7163:
    {
        returnValue = F("Alte Molkereistr.");
        break;
    }
    case 7164:
    {
        returnValue = F("Alte Monaiser Str.");
        break;
    }
    case 7165:
    {
        returnValue = F("Alte Mondorfer Str.");
        break;
    }
    case 7166:
    {
        returnValue = F("Alte Monschauer Str.");
        break;
    }
    case 7167:
    {
        returnValue = F("Alte Moorstr.");
        break;
    }
    case 7168:
    {
        returnValue = F("Alte Mortelgrunder Str.");
        break;
    }
    case 7169:
    {
        returnValue = F("Alte Moselbahn");
        break;
    }
    case 7170:
    {
        returnValue = F("Alte Moselstr.");
        break;
    }
    case 7171:
    {
        returnValue = F("Alte Muchenländerstr.");
        break;
    }
    case 7172:
    {
        returnValue = F("Alte Mucher Str.");
        break;
    }
    case 7173:
    {
        returnValue = F("Alte Muldenberger Str.");
        break;
    }
    case 7174:
    {
        returnValue = F("Alte Murger Str.");
        break;
    }
    case 7175:
    {
        returnValue = F("Alte Murnauer Str.");
        break;
    }
    case 7176:
    {
        returnValue = F("Alte Mutter");
        break;
    }
    case 7177:
    {
        returnValue = F("Alte Mägdesprunger Str.");
        break;
    }
    case 7178:
    {
        returnValue = F("Alte Mälzerei");
        break;
    }
    case 7179:
    {
        returnValue = F("Alte Märkisch Buchholzer Str.");
        break;
    }
    case 7180:
    {
        returnValue = F("Alte Mögglinger Str.");
        break;
    }
    case 7181:
    {
        returnValue = F("Alte Möllner Str.");
        break;
    }
    case 7182:
    {
        returnValue = F("Alte Mönaustr.");
        break;
    }
    case 7183:
    {
        returnValue = F("Alte Mönsheimer Str.");
        break;
    }
    case 7184:
    {
        returnValue = F("Alte Möschwitzer Str.");
        break;
    }
    case 7185:
    {
        returnValue = F("Alte Mühlacker Str.");
        break;
    }
    case 7186:
    {
        returnValue = F("Alte Mühle");
        break;
    }
    case 7187:
    {
        returnValue = F("Alte Mühlenstr.");
        break;
    }
    case 7188:
    {
        returnValue = F("Alte Mühlenstätte");
        break;
    }
    case 7189:
    {
        returnValue = F("Alte Mühler Damm");
        break;
    }
    case 7190:
    {
        returnValue = F("Alte Mühlestr.");
        break;
    }
    case 7191:
    {
        returnValue = F("Alte Mühlgasse");
        break;
    }
    case 7192:
    {
        returnValue = F("Alte Mühlgrabenbrücke");
        break;
    }
    case 7193:
    {
        returnValue = F("Alte Mühlhäuser Landstr.");
        break;
    }
    case 7194:
    {
        returnValue = F("Alte Mühlhäuser Str.");
        break;
    }
    case 7195:
    {
        returnValue = F("Alte Mühlsteige");
        break;
    }
    case 7196:
    {
        returnValue = F("Alte Mühlstr.");
        break;
    }
    case 7197:
    {
        returnValue = F("Alte Mühltroffer Str.");
        break;
    }
    case 7198:
    {
        returnValue = F("Alte Mühlweiherstr.");
        break;
    }
    case 7199:
    {
        returnValue = F("Alte Münchner Str.");
        break;
    }
    case 7200:
    {
        returnValue = F("Alte Münsterstr.");
        break;
    }
    case 7201:
    {
        returnValue = F("Alte Müntzer Str.");
        break;
    }
    case 7202:
    {
        returnValue = F("Alte Müntzer-Siedlung");
        break;
    }
    case 7203:
    {
        returnValue = F("Alte Münzesheimer Str.");
        break;
    }
    case 7204:
    {
        returnValue = F("Alte Nachtweide");
        break;
    }
    case 7205:
    {
        returnValue = F("Alte Nagolder Str.");
        break;
    }
    case 7206:
    {
        returnValue = F("Alte Nassauer Str.");
        break;
    }
    case 7207:
    {
        returnValue = F("Alte Nauener Chaussee");
        break;
    }
    case 7208:
    {
        returnValue = F("Alte Naumburger Str.");
        break;
    }
    case 7209:
    {
        returnValue = F("Alte Naundorfer Str.");
        break;
    }
    case 7210:
    {
        returnValue = F("Alte Neckarbrücke");
        break;
    }
    case 7211:
    {
        returnValue = F("Alte Neckarelzer Str.");
        break;
    }
    case 7212:
    {
        returnValue = F("Alte Neckargasse");
        break;
    }
    case 7213:
    {
        returnValue = F("Alte Neckarschleife");
        break;
    }
    case 7214:
    {
        returnValue = F("Alte Neibsheimer Str.");
        break;
    }
    case 7215:
    {
        returnValue = F("Alte Neideck");
        break;
    }
    case 7216:
    {
        returnValue = F("Alte Neresheimer Str.");
        break;
    }
    case 7217:
    {
        returnValue = F("Alte Nerzfarm");
        break;
    }
    case 7218:
    {
        returnValue = F("Alte Neuburger Str.");
        break;
    }
    case 7219:
    {
        returnValue = F("Alte Neudenauer Str.");
        break;
    }
    case 7220:
    {
        returnValue = F("Alte Neuenbürger Str.");
        break;
    }
    case 7221:
    {
        returnValue = F("Alte Neuendorfer Str.");
        break;
    }
    case 7222:
    {
        returnValue = F("Alte Neueroder Str.");
        break;
    }
    case 7223:
    {
        returnValue = F("Alte Neufracher Str.");
        break;
    }
    case 7224:
    {
        returnValue = F("Alte Neuhausener Str.");
        break;
    }
    case 7225:
    {
        returnValue = F("Alte Neuhauser Str.");
        break;
    }
    case 7226:
    {
        returnValue = F("Alte Neunstetter Str.");
        break;
    }
    case 7227:
    {
        returnValue = F("Alte Neusser Str.");
        break;
    }
    case 7228:
    {
        returnValue = F("Alte Neustädter Str.");
        break;
    }
    case 7229:
    {
        returnValue = F("Alte Neustädtleiner Str.");
        break;
    }
    case 7230:
    {
        returnValue = F("Alte Niederkleiner Str.");
        break;
    }
    case 7231:
    {
        returnValue = F("Alte Niederrimbacher Str.");
        break;
    }
    case 7232:
    {
        returnValue = F("Alte Nieheimer Str.");
        break;
    }
    case 7233:
    {
        returnValue = F("Alte Nienhagener Str.");
        break;
    }
    case 7234:
    {
        returnValue = F("Alte Nieskyer Str.");
        break;
    }
    case 7235:
    {
        returnValue = F("Alte Nischwitzer Str.");
        break;
    }
    case 7236:
    {
        returnValue = F("Alte Nixdorfer Str.");
        break;
    }
    case 7237:
    {
        returnValue = F("Alte Norderwieke Ost");
        break;
    }
    case 7238:
    {
        returnValue = F("Alte Norderwieke West");
        break;
    }
    case 7239:
    {
        returnValue = F("Alte Nordhorner Str.");
        break;
    }
    case 7240:
    {
        returnValue = F("Alte Nordstetter Steige");
        break;
    }
    case 7241:
    {
        returnValue = F("Alte Nordstr.");
        break;
    }
    case 7242:
    {
        returnValue = F("Alte Northeimer Str.");
        break;
    }
    case 7243:
    {
        returnValue = F("Alte Notterstr.");
        break;
    }
    case 7244:
    {
        returnValue = F("Alte Nußdorfer Str.");
        break;
    }
    case 7245:
    {
        returnValue = F("Alte Näherstiller Str.");
        break;
    }
    case 7246:
    {
        returnValue = F("Alte Nürnberger Str.");
        break;
    }
    case 7247:
    {
        returnValue = F("Alte Ober-Ramstädter Str.");
        break;
    }
    case 7248:
    {
        returnValue = F("Alte Oberbiberger Str.");
        break;
    }
    case 7249:
    {
        returnValue = F("Alte Obercrinitzer Str.");
        break;
    }
    case 7250:
    {
        returnValue = F("Alte Obereller Str.");
        break;
    }
    case 7251:
    {
        returnValue = F("Alte Oberemser Str.");
        break;
    }
    case 7252:
    {
        returnValue = F("Alte Obererbacher Str.");
        break;
    }
    case 7253:
    {
        returnValue = F("Alte Obergasse");
        break;
    }
    case 7254:
    {
        returnValue = F("Alte Obermarxgrüner Str.");
        break;
    }
    case 7255:
    {
        returnValue = F("Alte Obervolkacher Str.");
        break;
    }
    case 7256:
    {
        returnValue = F("Alte Obstwiese");
        break;
    }
    case 7257:
    {
        returnValue = F("Alte Obstwiese Neumünster");
        break;
    }
    case 7258:
    {
        returnValue = F("Alte Ochsenstr.");
        break;
    }
    case 7259:
    {
        returnValue = F("Alte Oderiner Str.");
        break;
    }
    case 7260:
    {
        returnValue = F("Alte Oederaner Bergstr.");
        break;
    }
    case 7261:
    {
        returnValue = F("Alte Oederaner Str.");
        break;
    }
    case 7262:
    {
        returnValue = F("Alte Oelsnitzer Str.");
        break;
    }
    case 7263:
    {
        returnValue = F("Alte Ohrdrufer Str.");
        break;
    }
    case 7264:
    {
        returnValue = F("Alte Ohre-Brücke");
        break;
    }
    case 7265:
    {
        returnValue = F("Alte Ommerbornstr.");
        break;
    }
    case 7266:
    {
        returnValue = F("Alte Orsleber Str.");
        break;
    }
    case 7267:
    {
        returnValue = F("Alte Ortsstr.");
        break;
    }
    case 7268:
    {
        returnValue = F("Alte Osenberge");
        break;
    }
    case 7269:
    {
        returnValue = F("Alte Osnabrücker Str.");
        break;
    }
    case 7270:
    {
        returnValue = F("Alte Osterzgebirgische Str.");
        break;
    }
    case 7271:
    {
        returnValue = F("Alte Oststr.");
        break;
    }
    case 7272:
    {
        returnValue = F("Alte Otternhägener Str.");
        break;
    }
    case 7273:
    {
        returnValue = F("Alte Owinger Str.");
        break;
    }
    case 7274:
    {
        returnValue = F("Alte Paderborner Landstr.");
        break;
    }
    case 7275:
    {
        returnValue = F("Alte Pallinger Str.");
        break;
    }
    case 7276:
    {
        returnValue = F("Alte Palmbacher Str.");
        break;
    }
    case 7277:
    {
        returnValue = F("Alte Panzerrampe");
        break;
    }
    case 7278:
    {
        returnValue = F("Alte Panzerstr.");
        break;
    }
    case 7279:
    {
        returnValue = F("Alte Papierfabrik");
        break;
    }
    case 7280:
    {
        returnValue = F("Alte Parchimer Landstr.");
        break;
    }
    case 7281:
    {
        returnValue = F("Alte Parkettfabrik");
        break;
    }
    case 7282:
    {
        returnValue = F("Alte Parkstr.");
        break;
    }
    case 7283:
    {
        returnValue = F("Alte Pasinger Str.");
        break;
    }
    case 7284:
    {
        returnValue = F("Alte Passauer Str.");
        break;
    }
    case 7285:
    {
        returnValue = F("Alte Pastoratstr.");
        break;
    }
    case 7286:
    {
        returnValue = F("Alte Pastorei");
        break;
    }
    case 7287:
    {
        returnValue = F("Alte Paulsbreite");
        break;
    }
    case 7288:
    {
        returnValue = F("Alte Paßstr.");
        break;
    }
    case 7289:
    {
        returnValue = F("Alte Pechofenschneise");
        break;
    }
    case 7290:
    {
        returnValue = F("Alte Peenemünder Str.");
        break;
    }
    case 7291:
    {
        returnValue = F("Alte Peniger Str.");
        break;
    }
    case 7292:
    {
        returnValue = F("Alte Penzendorfer Str.");
        break;
    }
    case 7293:
    {
        returnValue = F("Alte Petersdorfer Str.");
        break;
    }
    case 7294:
    {
        returnValue = F("Alte Petershagener Str.");
        break;
    }
    case 7295:
    {
        returnValue = F("Alte Pfarhofstr.");
        break;
    }
    case 7296:
    {
        returnValue = F("Alte Pfarre");
        break;
    }
    case 7297:
    {
        returnValue = F("Alte Pfarrgasse");
        break;
    }
    case 7298:
    {
        returnValue = F("Alte Pfarrhausgasse");
        break;
    }
    case 7299:
    {
        returnValue = F("Alte Pfarrstr.");
        break;
    }
    case 7300:
    {
        returnValue = F("Alte Pfedelbacher Str.");
        break;
    }
    case 7301:
    {
        returnValue = F("Alte Pferdekoppel");
        break;
    }
    case 7302:
    {
        returnValue = F("Alte Pflanzenschule");
        break;
    }
    case 7303:
    {
        returnValue = F("Alte Pforte");
        break;
    }
    case 7304:
    {
        returnValue = F("Alte Pforzheimer Str.");
        break;
    }
    case 7305:
    {
        returnValue = F("Alte Piccardie");
        break;
    }
    case 7306:
    {
        returnValue = F("Alte Pirmasenser Str.");
        break;
    }
    case 7307:
    {
        returnValue = F("Alte Plantage");
        break;
    }
    case 7308:
    {
        returnValue = F("Alte Plattensteige");
        break;
    }
    case 7309:
    {
        returnValue = F("Alte Platter Str.");
        break;
    }
    case 7310:
    {
        returnValue = F("Alte Plattlinger Str.");
        break;
    }
    case 7311:
    {
        returnValue = F("Alte Plauener Str.");
        break;
    }
    case 7312:
    {
        returnValue = F("Alte Plauensche Str.");
        break;
    }
    case 7313:
    {
        returnValue = F("Alte Plessaer Str.");
        break;
    }
    case 7314:
    {
        returnValue = F("Alte Plochinger Steige");
        break;
    }
    case 7315:
    {
        returnValue = F("Alte Plöner Chaussee");
        break;
    }
    case 7316:
    {
        returnValue = F("Alte Plötziner Str.");
        break;
    }
    case 7317:
    {
        returnValue = F("Alte Poppenhäuser Str.");
        break;
    }
    case 7318:
    {
        returnValue = F("Alte Post");
        break;
    }
    case 7319:
    {
        returnValue = F("Alte Post-Stege");
        break;
    }
    case 7320:
    {
        returnValue = F("Alte Postbrücke");
        break;
    }
    case 7321:
    {
        returnValue = F("Alte Postgasse");
        break;
    }
    case 7322:
    {
        returnValue = F("Alte Posthauser Str.");
        break;
    }
    case 7323:
    {
        returnValue = F("Alte Posthofstr.");
        break;
    }
    case 7324:
    {
        returnValue = F("Alte Postr.");
        break;
    }
    case 7325:
    {
        returnValue = F("Alte Poststeige");
        break;
    }
    case 7326:
    {
        returnValue = F("Alte Poststiege");
        break;
    }
    case 7327:
    {
        returnValue = F("Alte Poststr.");
        break;
    }
    case 7328:
    {
        returnValue = F("Alte Potsdamer Landstr.");
        break;
    }
    case 7329:
    {
        returnValue = F("Alte Potsdamer Str.");
        break;
    }
    case 7330:
    {
        returnValue = F("Alte Pressecker Str.");
        break;
    }
    case 7331:
    {
        returnValue = F("Alte Preußlinger Bruck");
        break;
    }
    case 7332:
    {
        returnValue = F("Alte Pritzwalker Str.");
        break;
    }
    case 7333:
    {
        returnValue = F("Alte Promenade");
        break;
    }
    case 7334:
    {
        returnValue = F("Alte Provinzialstr.");
        break;
    }
    case 7335:
    {
        returnValue = F("Alte Prümer Str.");
        break;
    }
    case 7336:
    {
        returnValue = F("Alte Pulvermühle");
        break;
    }
    case 7337:
    {
        returnValue = F("Alte Pumpe");
        break;
    }
    case 7338:
    {
        returnValue = F("Alte Pyer Schule");
        break;
    }
    case 7339:
    {
        returnValue = F("Alte Pöhlaer Str.");
        break;
    }
    case 7340:
    {
        returnValue = F("Alte Quedlinburger Str.");
        break;
    }
    case 7341:
    {
        returnValue = F("Alte Quernheimer Str.");
        break;
    }
    case 7342:
    {
        returnValue = F("Alte Rabenauer Str.");
        break;
    }
    case 7343:
    {
        returnValue = F("Alte Radeburger Str.");
        break;
    }
    case 7344:
    {
        returnValue = F("Alte Radischer Str.");
        break;
    }
    case 7345:
    {
        returnValue = F("Alte Radrennbahn");
        break;
    }
    case 7346:
    {
        returnValue = F("Alte Raesfelder Str.");
        break;
    }
    case 7347:
    {
        returnValue = F("Alte Ramminger Str.");
        break;
    }
    case 7348:
    {
        returnValue = F("Alte Ramtelstr.");
        break;
    }
    case 7349:
    {
        returnValue = F("Alte Randenstr.");
        break;
    }
    case 7350:
    {
        returnValue = F("Alte Rascher Str.");
        break;
    }
    case 7351:
    {
        returnValue = F("Alte Rathausgasse");
        break;
    }
    case 7352:
    {
        returnValue = F("Alte Rathausstr.");
        break;
    }
    case 7353:
    {
        returnValue = F("Alte Rathenower Str.");
        break;
    }
    case 7354:
    {
        returnValue = F("Alte Rather Str.");
        break;
    }
    case 7355:
    {
        returnValue = F("Alte Ratinger Landstr.");
        break;
    }
    case 7356:
    {
        returnValue = F("Alte Ratsgasse");
        break;
    }
    case 7357:
    {
        returnValue = F("Alte Ratzeburger Landstr.");
        break;
    }
    case 7358:
    {
        returnValue = F("Alte Rautenkranzer Str.");
        break;
    }
    case 7359:
    {
        returnValue = F("Alte Reeser Landstr.");
        break;
    }
    case 7360:
    {
        returnValue = F("Alte Reeser Str.");
        break;
    }
    case 7361:
    {
        returnValue = F("Alte Regensburger Str.");
        break;
    }
    case 7362:
    {
        returnValue = F("Alte Regenstr.");
        break;
    }
    case 7363:
    {
        returnValue = F("Alte Rehauer Str.");
        break;
    }
    case 7364:
    {
        returnValue = F("Alte Rehre");
        break;
    }
    case 7365:
    {
        returnValue = F("Alte Reichenbacher Str.");
        break;
    }
    case 7366:
    {
        returnValue = F("Alte Reichenhaller Str.");
        break;
    }
    case 7367:
    {
        returnValue = F("Alte Reichenwalder Str.");
        break;
    }
    case 7368:
    {
        returnValue = F("Alte Reichsstr.");
        break;
    }
    case 7369:
    {
        returnValue = F("Alte Reifensteige");
        break;
    }
    case 7370:
    {
        returnValue = F("Alte Reihe");
        break;
    }
    case 7371:
    {
        returnValue = F("Alte Reinerzauer Str.");
        break;
    }
    case 7372:
    {
        returnValue = F("Alte Reisbachstr.");
        break;
    }
    case 7373:
    {
        returnValue = F("Alte Reitbahn");
        break;
    }
    case 7374:
    {
        returnValue = F("Alte Reithalle");
        break;
    }
    case 7375:
    {
        returnValue = F("Alte Reitschule");
        break;
    }
    case 7376:
    {
        returnValue = F("Alte Rennbahn");
        break;
    }
    case 7377:
    {
        returnValue = F("Alte Renninger Str.");
        break;
    }
    case 7378:
    {
        returnValue = F("Alte Rennkoppel");
        break;
    }
    case 7379:
    {
        returnValue = F("Alte Reuenthaler Str.");
        break;
    }
    case 7380:
    {
        returnValue = F("Alte Reuscher Str.");
        break;
    }
    case 7381:
    {
        returnValue = F("Alte Reutbrücke");
        break;
    }
    case 7382:
    {
        returnValue = F("Alte Reute");
        break;
    }
    case 7383:
    {
        returnValue = F("Alte Reuther Str.");
        break;
    }
    case 7384:
    {
        returnValue = F("Alte Reutstr.");
        break;
    }
    case 7385:
    {
        returnValue = F("Alte Rheder Str.");
        break;
    }
    case 7386:
    {
        returnValue = F("Alte Rheinbabenstr.");
        break;
    }
    case 7387:
    {
        returnValue = F("Alte Rheinbrücke");
        break;
    }
    case 7388:
    {
        returnValue = F("Alte Rheinfelder Str.");
        break;
    }
    case 7389:
    {
        returnValue = F("Alte Rheingauer Str.");
        break;
    }
    case 7390:
    {
        returnValue = F("Alte Rheinhäuser Str.");
        break;
    }
    case 7391:
    {
        returnValue = F("Alte Rheinstr.");
        break;
    }
    case 7392:
    {
        returnValue = F("Alte Richt");
        break;
    }
    case 7393:
    {
        returnValue = F("Alte Richtenberger Str.");
        break;
    }
    case 7394:
    {
        returnValue = F("Alte Ricklinger Str.");
        break;
    }
    case 7395:
    {
        returnValue = F("Alte Riedbergpassstr.");
        break;
    }
    case 7396:
    {
        returnValue = F("Alte Riede");
        break;
    }
    case 7397:
    {
        returnValue = F("Alte Riedenburger Str.");
        break;
    }
    case 7398:
    {
        returnValue = F("Alte Rieder Str.");
        break;
    }
    case 7399:
    {
        returnValue = F("Alte Rieken");
        break;
    }
    case 7400:
    {
        returnValue = F("Alte Rieser Str.");
        break;
    }
    case 7401:
    {
        returnValue = F("Alte Rietschgrundstr.");
        break;
    }
    case 7402:
    {
        returnValue = F("Alte Rimparer Str.");
        break;
    }
    case 7403:
    {
        returnValue = F("Alte Ringstr.");
        break;
    }
    case 7404:
    {
        returnValue = F("Alte Rinne");
        break;
    }
    case 7405:
    {
        returnValue = F("Alte Rittersgrüner Flößbahn");
        break;
    }
    case 7406:
    {
        returnValue = F("Alte Rockstedter Ostenbrücke");
        break;
    }
    case 7407:
    {
        returnValue = F("Alte Rodelbahn");
        break;
    }
    case 7408:
    {
        returnValue = F("Alte Rodenbeeke");
        break;
    }
    case 7409:
    {
        returnValue = F("Alte Rodersdorfer Str.");
        break;
    }
    case 7410:
    {
        returnValue = F("Alte Rodewischer Str.");
        break;
    }
    case 7411:
    {
        returnValue = F("Alte Rodung");
        break;
    }
    case 7412:
    {
        returnValue = F("Alte Rolfsener Str.");
        break;
    }
    case 7413:
    {
        returnValue = F("Alte Rollschuhbahn");
        break;
    }
    case 7414:
    {
        returnValue = F("Alte Rommelshauser Str.");
        break;
    }
    case 7415:
    {
        returnValue = F("Alte Ronsdorfer Str.");
        break;
    }
    case 7416:
    {
        returnValue = F("Alte Rosenstr.");
        break;
    }
    case 7417:
    {
        returnValue = F("Alte Rosenthaler Str.");
        break;
    }
    case 7418:
    {
        returnValue = F("Alte Rostocker Str.");
        break;
    }
    case 7419:
    {
        returnValue = F("Alte Roter Str.");
        break;
    }
    case 7420:
    {
        returnValue = F("Alte Rothenburger Str.");
        break;
    }
    case 7421:
    {
        returnValue = F("Alte Rothenfelder Str.");
        break;
    }
    case 7422:
    {
        returnValue = F("Alte Rother Str.");
        break;
    }
    case 7423:
    {
        returnValue = F("Alte Rott");
        break;
    }
    case 7424:
    {
        returnValue = F("Alte Rottenburger Str.");
        break;
    }
    case 7425:
    {
        returnValue = F("Alte Rottorfer Str.");
        break;
    }
    case 7426:
    {
        returnValue = F("Alte Rottsieper Str.");
        break;
    }
    case 7427:
    {
        returnValue = F("Alte Roßbacher Str.");
        break;
    }
    case 7428:
    {
        returnValue = F("Alte Roßgasse");
        break;
    }
    case 7429:
    {
        returnValue = F("Alte Roßmühlenstr.");
        break;
    }
    case 7430:
    {
        returnValue = F("Alte Roßtrappenstr.");
        break;
    }
    case 7431:
    {
        returnValue = F("Alte Ruhesteinstr.");
        break;
    }
    case 7432:
    {
        returnValue = F("Alte Ruhesteinstr./Terrainkurweg");
        break;
    }
    case 7433:
    {
        returnValue = F("Alte Ruhlach");
        break;
    }
    case 7434:
    {
        returnValue = F("Alte Ruhlaer Str.");
        break;
    }
    case 7435:
    {
        returnValue = F("Alte Ruhlaer Str.-Höhe");
        break;
    }
    case 7436:
    {
        returnValue = F("Alte Ruhr");
        break;
    }
    case 7437:
    {
        returnValue = F("Alte Ruhrwaldstr.");
        break;
    }
    case 7438:
    {
        returnValue = F("Alte Rumburger Str.");
        break;
    }
    case 7439:
    {
        returnValue = F("Alte Runkeler Str.");
        break;
    }
    case 7440:
    {
        returnValue = F("Alte Ränkelesgasse");
        break;
    }
    case 7441:
    {
        returnValue = F("Alte Röllinghäuser Str.");
        break;
    }
    case 7442:
    {
        returnValue = F("Alte Römer Str.");
        break;
    }
    case 7443:
    {
        returnValue = F("Alte Römerrstr.");
        break;
    }
    case 7444:
    {
        returnValue = F("Alte Römerstr.");
        break;
    }
    case 7445:
    {
        returnValue = F("Alte Rübelander Str.");
        break;
    }
    case 7446:
    {
        returnValue = F("Alte Rübeländer Str.");
        break;
    }
    case 7447:
    {
        returnValue = F("Alte Rübenbahn");
        break;
    }
    case 7448:
    {
        returnValue = F("Alte Rückersdorfer Str.");
        break;
    }
    case 7449:
    {
        returnValue = F("Alte Rütte Weg");
        break;
    }
    case 7450:
    {
        returnValue = F("Alte Rützengrüner Str.");
        break;
    }
    case 7451:
    {
        returnValue = F("Alte Saarower Chaussee");
        break;
    }
    case 7452:
    {
        returnValue = F("Alte Saarower Str.");
        break;
    }
    case 7453:
    {
        returnValue = F("Alte Saatzucht");
        break;
    }
    case 7454:
    {
        returnValue = F("Alte Sackgasse");
        break;
    }
    case 7455:
    {
        returnValue = F("Alte Salmbacher Str.");
        break;
    }
    case 7456:
    {
        returnValue = F("Alte Salzdahlumer Str.");
        break;
    }
    case 7457:
    {
        returnValue = F("Alte Salzstr.");
        break;
    }
    case 7458:
    {
        returnValue = F("Alte Salzunger Str.");
        break;
    }
    case 7459:
    {
        returnValue = F("Alte Sandgrube");
        break;
    }
    case 7460:
    {
        returnValue = F("Alte Sandkuhle");
        break;
    }
    case 7461:
    {
        returnValue = F("Alte Sandtrift");
        break;
    }
    case 7462:
    {
        returnValue = F("Alte Sattelfabrik");
        break;
    }
    case 7463:
    {
        returnValue = F("Alte Saydaer Str.");
        break;
    }
    case 7464:
    {
        returnValue = F("Alte Schaftrift");
        break;
    }
    case 7465:
    {
        returnValue = F("Alte Schanze");
        break;
    }
    case 7466:
    {
        returnValue = F("Alte Schauinslandstr.");
        break;
    }
    case 7467:
    {
        returnValue = F("Alte Schefflenzer Steige");
        break;
    }
    case 7468:
    {
        returnValue = F("Alte Scheibenberger Str.");
        break;
    }
    case 7469:
    {
        returnValue = F("Alte Scheibenstr.");
        break;
    }
    case 7470:
    {
        returnValue = F("Alte Scheideckstr.");
        break;
    }
    case 7471:
    {
        returnValue = F("Alte Schellbronner Str.");
        break;
    }
    case 7472:
    {
        returnValue = F("Alte Schenkenbreite");
        break;
    }
    case 7473:
    {
        returnValue = F("Alte Scherbdaer Str.");
        break;
    }
    case 7474:
    {
        returnValue = F("Alte Scherfeder Str.");
        break;
    }
    case 7475:
    {
        returnValue = F("Alte Schernfelder Str.");
        break;
    }
    case 7476:
    {
        returnValue = F("Alte Scheune");
        break;
    }
    case 7477:
    {
        returnValue = F("Alte Schieferstr.");
        break;
    }
    case 7478:
    {
        returnValue = F("Alte Schiener Landstr.");
        break;
    }
    case 7479:
    {
        returnValue = F("Alte Schiessstätte");
        break;
    }
    case 7480:
    {
        returnValue = F("Alte Schießbahn");
        break;
    }
    case 7481:
    {
        returnValue = F("Alte Schießstätt");
        break;
    }
    case 7482:
    {
        returnValue = F("Alte Schiffahrt");
        break;
    }
    case 7483:
    {
        returnValue = F("Alte Schiffbrückenstr.");
        break;
    }
    case 7484:
    {
        returnValue = F("Alte Schifffahrt");
        break;
    }
    case 7485:
    {
        returnValue = F("Alte Schiffstr.");
        break;
    }
    case 7486:
    {
        returnValue = F("Alte Schildower Str.");
        break;
    }
    case 7487:
    {
        returnValue = F("Alte Schillingstadter Str.");
        break;
    }
    case 7488:
    {
        returnValue = F("Alte Schlachte");
        break;
    }
    case 7489:
    {
        returnValue = F("Alte Schleesener Str.");
        break;
    }
    case 7490:
    {
        returnValue = F("Alte Schleid");
        break;
    }
    case 7491:
    {
        returnValue = F("Alte Schlengen");
        break;
    }
    case 7492:
    {
        returnValue = F("Alte Schlettauer Str.");
        break;
    }
    case 7493:
    {
        returnValue = F("Alte Schleuse");
        break;
    }
    case 7494:
    {
        returnValue = F("Alte Schleusinger Str.");
        break;
    }
    case 7495:
    {
        returnValue = F("Alte Schlichter Str.");
        break;
    }
    case 7496:
    {
        returnValue = F("Alte Schlierbacher Str.");
        break;
    }
    case 7497:
    {
        returnValue = F("Alte Schlittenbahn");
        break;
    }
    case 7498:
    {
        returnValue = F("Alte Schlosserei");
        break;
    }
    case 7499:
    {
        returnValue = F("Alte Schloßgasse");
        break;
    }
    case 7500:
    {
        returnValue = F("Alte Schloßgärtnerei");
        break;
    }
    case 7501:
    {
        returnValue = F("Alte Schloßstr.");
        break;
    }
    case 7502:
    {
        returnValue = F("Alte Schlüchterner Str.");
        break;
    }
    case 7503:
    {
        returnValue = F("Alte Schmalfelder Landstr.");
        break;
    }
    case 7504:
    {
        returnValue = F("Alte Schmalkalder Str.");
        break;
    }
    case 7505:
    {
        returnValue = F("Alte Schmelz");
        break;
    }
    case 7506:
    {
        returnValue = F("Alte Schmelze");
        break;
    }
    case 7507:
    {
        returnValue = F("Alte Schmidtgasse");
        break;
    }
    case 7508:
    {
        returnValue = F("Alte Schmiede");
        break;
    }
    case 7509:
    {
        returnValue = F("Alte Schmiedefelder Str.");
        break;
    }
    case 7510:
    {
        returnValue = F("Alte Schmiedegasse");
        break;
    }
    case 7511:
    {
        returnValue = F("Alte Schmiedestr.");
        break;
    }
    case 7512:
    {
        returnValue = F("Alte Schmiedgasse");
        break;
    }
    case 7513:
    {
        returnValue = F("Alte Schnarrtanner Str.");
        break;
    }
    case 7514:
    {
        returnValue = F("Alte Schneeberger Landstr.");
        break;
    }
    case 7515:
    {
        returnValue = F("Alte Schneeberger Str.");
        break;
    }
    case 7516:
    {
        returnValue = F("Alte Schneise");
        break;
    }
    case 7517:
    {
        returnValue = F("Alte Schneiz");
        break;
    }
    case 7518:
    {
        returnValue = F("Alte Schollbrunner Str.");
        break;
    }
    case 7519:
    {
        returnValue = F("Alte Schonacher Str.");
        break;
    }
    case 7520:
    {
        returnValue = F("Alte Schopfheimer Str.");
        break;
    }
    case 7521:
    {
        returnValue = F("Alte Schopflocher Steige");
        break;
    }
    case 7522:
    {
        returnValue = F("Alte Schranke");
        break;
    }
    case 7523:
    {
        returnValue = F("Alte Schreinerei");
        break;
    }
    case 7524:
    {
        returnValue = F("Alte Schule");
        break;
    }
    case 7525:
    {
        returnValue = F("Alte Schulgasse");
        break;
    }
    case 7526:
    {
        returnValue = F("Alte Schulhausgasse");
        break;
    }
    case 7527:
    {
        returnValue = F("Alte Schulstr.");
        break;
    }
    case 7528:
    {
        returnValue = F("Alte Schulweg");
        break;
    }
    case 7529:
    {
        returnValue = F("Alte Schulwiese");
        break;
    }
    case 7530:
    {
        returnValue = F("Alte Schutte");
        break;
    }
    case 7531:
    {
        returnValue = F("Alte Schwak");
        break;
    }
    case 7532:
    {
        returnValue = F("Alte Schwalbacher Str.");
        break;
    }
    case 7533:
    {
        returnValue = F("Alte Schwander Str.");
        break;
    }
    case 7534:
    {
        returnValue = F("Alte Schwandorfer Str.");
        break;
    }
    case 7535:
    {
        returnValue = F("Alte Schwarzenberger Str.");
        break;
    }
    case 7536:
    {
        returnValue = F("Alte Schwegenheimer Str.");
        break;
    }
    case 7537:
    {
        returnValue = F("Alte Schweinberger Str.");
        break;
    }
    case 7538:
    {
        returnValue = F("Alte Schweinsdorfer Steige");
        break;
    }
    case 7539:
    {
        returnValue = F("Alte Schweriner Str.");
        break;
    }
    case 7540:
    {
        returnValue = F("Alte Schwinghammerstr.");
        break;
    }
    case 7541:
    {
        returnValue = F("Alte Schäferei");
        break;
    }
    case 7542:
    {
        returnValue = F("Alte Schöckinger Str.");
        break;
    }
    case 7543:
    {
        returnValue = F("Alte Schömberger Steige");
        break;
    }
    case 7544:
    {
        returnValue = F("Alte Schönberger Str.");
        break;
    }
    case 7545:
    {
        returnValue = F("Alte Schönbrunner Str.");
        break;
    }
    case 7546:
    {
        returnValue = F("Alte Schöndorfer Str.");
        break;
    }
    case 7547:
    {
        returnValue = F("Alte Schönecker Str.");
        break;
    }
    case 7548:
    {
        returnValue = F("Alte Schönefelder Str.");
        break;
    }
    case 7549:
    {
        returnValue = F("Alte Schönheider Str.");
        break;
    }
    case 7550:
    {
        returnValue = F("Alte Schönwalder Str.");
        break;
    }
    case 7551:
    {
        returnValue = F("Alte Schüttorfer Str.");
        break;
    }
    case 7552:
    {
        returnValue = F("Alte Schützenwiese");
        break;
    }
    case 7553:
    {
        returnValue = F("Alte Sechs");
        break;
    }
    case 7554:
    {
        returnValue = F("Alte See");
        break;
    }
    case 7555:
    {
        returnValue = F("Alte Seegasse");
        break;
    }
    case 7556:
    {
        returnValue = F("Alte Seer Str.");
        break;
    }
    case 7557:
    {
        returnValue = F("Alte Seeschlag-Schneise");
        break;
    }
    case 7558:
    {
        returnValue = F("Alte Seestr.");
        break;
    }
    case 7559:
    {
        returnValue = F("Alte Seidenröther Str.");
        break;
    }
    case 7560:
    {
        returnValue = F("Alte Seilerei");
        break;
    }
    case 7561:
    {
        returnValue = F("Alte Seite");
        break;
    }
    case 7562:
    {
        returnValue = F("Alte Selchower Str.");
        break;
    }
    case 7563:
    {
        returnValue = F("Alte Selkaer Str.");
        break;
    }
    case 7564:
    {
        returnValue = F("Alte Selterser Str.");
        break;
    }
    case 7565:
    {
        returnValue = F("Alte Serkenroder Str.");
        break;
    }
    case 7566:
    {
        returnValue = F("Alte Seubersdorfer Str.");
        break;
    }
    case 7567:
    {
        returnValue = F("Alte Sieben");
        break;
    }
    case 7568:
    {
        returnValue = F("Alte Siedlung");
        break;
    }
    case 7569:
    {
        returnValue = F("Alte Siedlungsstr.");
        break;
    }
    case 7570:
    {
        returnValue = F("Alte Siegburger Str.");
        break;
    }
    case 7571:
    {
        returnValue = F("Alte Silberstr.");
        break;
    }
    case 7572:
    {
        returnValue = F("Alte Silberwiese");
        break;
    }
    case 7573:
    {
        returnValue = F("Alte Sinsheimer Str.");
        break;
    }
    case 7574:
    {
        returnValue = F("Alte Sitzenrodaer Str. oder Das doppelte N");
        break;
    }
    case 7575:
    {
        returnValue = F("Alte Sitzenrodaer Str. oder Flügelweg V");
        break;
    }
    case 7576:
    {
        returnValue = F("Alte Skirollerstrecke");
        break;
    }
    case 7577:
    {
        returnValue = F("Alte Sollerner Str.");
        break;
    }
    case 7578:
    {
        returnValue = F("Alte Sorge");
        break;
    }
    case 7579:
    {
        returnValue = F("Alte Spaargasse");
        break;
    }
    case 7580:
    {
        returnValue = F("Alte Spellerstr.");
        break;
    }
    case 7581:
    {
        returnValue = F("Alte Spexarder Str.");
        break;
    }
    case 7582:
    {
        returnValue = F("Alte Speyerer Str.");
        break;
    }
    case 7583:
    {
        returnValue = F("Alte Spielberger Str.");
        break;
    }
    case 7584:
    {
        returnValue = F("Alte Spinnerei");
        break;
    }
    case 7585:
    {
        returnValue = F("Alte Spitalstr.");
        break;
    }
    case 7586:
    {
        returnValue = F("Alte Spitzingstr.");
        break;
    }
    case 7587:
    {
        returnValue = F("Alte Sportplatzstr.");
        break;
    }
    case 7588:
    {
        returnValue = F("Alte Springer Heerstr.");
        break;
    }
    case 7589:
    {
        returnValue = F("Alte Sprungschanzeweg");
        break;
    }
    case 7590:
    {
        returnValue = F("Alte Staatsstr.");
        break;
    }
    case 7591:
    {
        returnValue = F("Alte Stadt");
        break;
    }
    case 7592:
    {
        returnValue = F("Alte Stadtgärtnerei");
        break;
    }
    case 7593:
    {
        returnValue = F("Alte Stadtmauer");
        break;
    }
    case 7594:
    {
        returnValue = F("Alte Stahl");
        break;
    }
    case 7595:
    {
        returnValue = F("Alte Stedtener Str.");
        break;
    }
    case 7596:
    {
        returnValue = F("Alte Steege");
        break;
    }
    case 7597:
    {
        returnValue = F("Alte Stege");
        break;
    }
    case 7598:
    {
        returnValue = F("Alte Steig");
        break;
    }
    case 7599:
    {
        returnValue = F("Alte Steige");
        break;
    }
    case 7600:
    {
        returnValue = F("Alte Steiger");
        break;
    }
    case 7601:
    {
        returnValue = F("Alte Steigeweg");
        break;
    }
    case 7602:
    {
        returnValue = F("Alte Steigstr.");
        break;
    }
    case 7603:
    {
        returnValue = F("Alte Steinauer Str.");
        break;
    }
    case 7604:
    {
        returnValue = F("Alte Steinbrücke / Dänenbrücke");
        break;
    }
    case 7605:
    {
        returnValue = F("Alte Steiner Str.");
        break;
    }
    case 7606:
    {
        returnValue = F("Alte Steinhauser Str.");
        break;
    }
    case 7607:
    {
        returnValue = F("Alte Steinstr.");
        break;
    }
    case 7608:
    {
        returnValue = F("Alte Stiege");
        break;
    }
    case 7609:
    {
        returnValue = F("Alte Stockheimer Str.");
        break;
    }
    case 7610:
    {
        returnValue = F("Alte Stollberger Str.");
        break;
    }
    case 7611:
    {
        returnValue = F("Alte Str.");
        break;
    }
    case 7612:
    {
        returnValue = F("Alte Str. (Römerstr.)");
        break;
    }
    case 7613:
    {
        returnValue = F("Alte Str. Häusern/Höchenschwand");
        break;
    }
    case 7614:
    {
        returnValue = F("Alte Straacher Mühle");
        break;
    }
    case 7615:
    {
        returnValue = F("Alte Strandstr.");
        break;
    }
    case 7616:
    {
        returnValue = F("Alte Straubinger Str.");
        break;
    }
    case 7617:
    {
        returnValue = F("Alte Straß");
        break;
    }
    case 7618:
    {
        returnValue = F("Alte Straßberger Str.");
        break;
    }
    case 7619:
    {
        returnValue = F("Alte Straßburger Str.");
        break;
    }
    case 7620:
    {
        returnValue = F("Alte Streitbergstr.");
        break;
    }
    case 7621:
    {
        returnValue = F("Alte Strickerei");
        break;
    }
    case 7622:
    {
        returnValue = F("Alte Stroth");
        break;
    }
    case 7623:
    {
        returnValue = F("Alte Strothe");
        break;
    }
    case 7624:
    {
        returnValue = F("Alte Strumpffabrik");
        break;
    }
    case 7625:
    {
        returnValue = F("Alte Stube");
        break;
    }
    case 7626:
    {
        returnValue = F("Alte Stuhlsteige");
        break;
    }
    case 7627:
    {
        returnValue = F("Alte Stuttgarter Str.");
        break;
    }
    case 7628:
    {
        returnValue = F("Alte Stutthöfer Schneise");
        break;
    }
    case 7629:
    {
        returnValue = F("Alte Stützengrüner Str.");
        break;
    }
    case 7630:
    {
        returnValue = F("Alte Suhler Str.");
        break;
    }
    case 7631:
    {
        returnValue = F("Alte Sulzbacher Str.");
        break;
    }
    case 7632:
    {
        returnValue = F("Alte Sundstr.");
        break;
    }
    case 7633:
    {
        returnValue = F("Alte Säge");
        break;
    }
    case 7634:
    {
        returnValue = F("Alte Sägemühle");
        break;
    }
    case 7635:
    {
        returnValue = F("Alte Sägerei");
        break;
    }
    case 7636:
    {
        returnValue = F("Alte Söhrebahn");
        break;
    }
    case 7637:
    {
        returnValue = F("Alte Söhrebahntrasse");
        break;
    }
    case 7638:
    {
        returnValue = F("Alte Süchtelner Landstr.");
        break;
    }
    case 7639:
    {
        returnValue = F("Alte Süderwieke");
        break;
    }
    case 7640:
    {
        returnValue = F("Alte Südstr.");
        break;
    }
    case 7641:
    {
        returnValue = F("Alte Talheimer Steige");
        break;
    }
    case 7642:
    {
        returnValue = F("Alte Talstr.");
        break;
    }
    case 7643:
    {
        returnValue = F("Alte Tambacher Str.");
        break;
    }
    case 7644:
    {
        returnValue = F("Alte Tanner Postr.");
        break;
    }
    case 7645:
    {
        returnValue = F("Alte Taubertalstr.");
        break;
    }
    case 7646:
    {
        returnValue = F("Alte Tecklenburger Str.");
        break;
    }
    case 7647:
    {
        returnValue = F("Alte Tegelsche Str.");
        break;
    }
    case 7648:
    {
        returnValue = F("Alte Tegernseer Str.");
        break;
    }
    case 7649:
    {
        returnValue = F("Alte Teichstr.");
        break;
    }
    case 7650:
    {
        returnValue = F("Alte Teichwitzer Str.");
        break;
    }
    case 7651:
    {
        returnValue = F("Alte Tellerhäuser Str.");
        break;
    }
    case 7652:
    {
        returnValue = F("Alte Templiner Str.");
        break;
    }
    case 7653:
    {
        returnValue = F("Alte Tennstedter Str.");
        break;
    }
    case 7654:
    {
        returnValue = F("Alte Tetschener Str.");
        break;
    }
    case 7655:
    {
        returnValue = F("Alte Tettauer Str.");
        break;
    }
    case 7656:
    {
        returnValue = F("Alte Teupitzer Str.");
        break;
    }
    case 7657:
    {
        returnValue = F("Alte Thalenser Str.");
        break;
    }
    case 7658:
    {
        returnValue = F("Alte Thalheimer Str.");
        break;
    }
    case 7659:
    {
        returnValue = F("Alte Theumaer Str.");
        break;
    }
    case 7660:
    {
        returnValue = F("Alte Thomas-Müntzer-Str.");
        break;
    }
    case 7661:
    {
        returnValue = F("Alte Thün");
        break;
    }
    case 7662:
    {
        returnValue = F("Alte Thünahofer Str.");
        break;
    }
    case 7663:
    {
        returnValue = F("Alte Tichlinger Str.");
        break;
    }
    case 7664:
    {
        returnValue = F("Alte Tieckower Str.");
        break;
    }
    case 7665:
    {
        returnValue = F("Alte Todenmanner Str.");
        break;
    }
    case 7666:
    {
        returnValue = F("Alte Tonbachstr.");
        break;
    }
    case 7667:
    {
        returnValue = F("Alte Tonfabrik");
        break;
    }
    case 7668:
    {
        returnValue = F("Alte Tongrube");
        break;
    }
    case 7669:
    {
        returnValue = F("Alte Topf");
        break;
    }
    case 7670:
    {
        returnValue = F("Alte Topfstr.");
        break;
    }
    case 7671:
    {
        returnValue = F("Alte Torfstr.");
        break;
    }
    case 7672:
    {
        returnValue = F("Alte Torgasse");
        break;
    }
    case 7673:
    {
        returnValue = F("Alte Torkelbergstr.");
        break;
    }
    case 7674:
    {
        returnValue = F("Alte Tornower Str.");
        break;
    }
    case 7675:
    {
        returnValue = F("Alte Torstr.");
        break;
    }
    case 7676:
    {
        returnValue = F("Alte Tradt");
        break;
    }
    case 7677:
    {
        returnValue = F("Alte Traubinger Str.");
        break;
    }
    case 7678:
    {
        returnValue = F("Alte Travemünder Landstr.");
        break;
    }
    case 7679:
    {
        returnValue = F("Alte Trebbiner Str.");
        break;
    }
    case 7680:
    {
        returnValue = F("Alte Treibe");
        break;
    }
    case 7681:
    {
        returnValue = F("Alte Treppe");
        break;
    }
    case 7682:
    {
        returnValue = F("Alte Treuchtlinger Str.");
        break;
    }
    case 7683:
    {
        returnValue = F("Alte Treuener Str.");
        break;
    }
    case 7684:
    {
        returnValue = F("Alte Triebeler Str.");
        break;
    }
    case 7685:
    {
        returnValue = F("Alte Trierer Str.");
        break;
    }
    case 7686:
    {
        returnValue = F("Alte Trift");
        break;
    }
    case 7687:
    {
        returnValue = F("Alte Triftstr.");
        break;
    }
    case 7688:
    {
        returnValue = F("Alte Tränke");
        break;
    }
    case 7689:
    {
        returnValue = F("Alte Tulpenstr.");
        break;
    }
    case 7690:
    {
        returnValue = F("Alte Turmstr.");
        break;
    }
    case 7691:
    {
        returnValue = F("Alte Turnhalle");
        break;
    }
    case 7692:
    {
        returnValue = F("Alte Tölzer Str.");
        break;
    }
    case 7693:
    {
        returnValue = F("Alte Töpchiner Landstr.");
        break;
    }
    case 7694:
    {
        returnValue = F("Alte Töpferei");
        break;
    }
    case 7695:
    {
        returnValue = F("Alte Töpferstr.");
        break;
    }
    case 7696:
    {
        returnValue = F("Alte Türkheimer Steige");
        break;
    }
    case 7697:
    {
        returnValue = F("Alte Uckendorfer Str.");
        break;
    }
    case 7698:
    {
        returnValue = F("Alte Uferstr.");
        break;
    }
    case 7699:
    {
        returnValue = F("Alte Uffenheimer Str.");
        break;
    }
    case 7700:
    {
        returnValue = F("Alte Uhldinger Str.");
        break;
    }
    case 7701:
    {
        returnValue = F("Alte Ullersdorfer Str.");
        break;
    }
    case 7702:
    {
        returnValue = F("Alte Ulmer Str.");
        break;
    }
    case 7703:
    {
        returnValue = F("Alte Umlach");
        break;
    }
    case 7704:
    {
        returnValue = F("Alte Unlinger Str.");
        break;
    }
    case 7705:
    {
        returnValue = F("Alte Untergath");
        break;
    }
    case 7706:
    {
        returnValue = F("Alte Untergruppenbacher Str.");
        break;
    }
    case 7707:
    {
        returnValue = F("Alte Untersambacher Str.");
        break;
    }
    case 7708:
    {
        returnValue = F("Alte Uracher Str.");
        break;
    }
    case 7709:
    {
        returnValue = F("Alte Uslarer Str.");
        break;
    }
    case 7710:
    {
        returnValue = F("Alte Vaalser Str.");
        break;
    }
    case 7711:
    {
        returnValue = F("Alte Vaihinger Steige");
        break;
    }
    case 7712:
    {
        returnValue = F("Alte Vaihinger Str.");
        break;
    }
    case 7713:
    {
        returnValue = F("Alte Vallendarer Str.");
        break;
    }
    case 7714:
    {
        returnValue = F("Alte Valve");
        break;
    }
    case 7715:
    {
        returnValue = F("Alte Veerter Str.");
        break;
    }
    case 7716:
    {
        returnValue = F("Alte Veitsberger Str.");
        break;
    }
    case 7717:
    {
        returnValue = F("Alte Verler Str.");
        break;
    }
    case 7718:
    {
        returnValue = F("Alte Versteigerung");
        break;
    }
    case 7719:
    {
        returnValue = F("Alte Veste");
        break;
    }
    case 7720:
    {
        returnValue = F("Alte Viehtrift");
        break;
    }
    case 7721:
    {
        returnValue = F("Alte Viehweide");
        break;
    }
    case 7722:
    {
        returnValue = F("Alte Vier");
        break;
    }
    case 7723:
    {
        returnValue = F("Alte Viernheimer Str.");
        break;
    }
    case 7724:
    {
        returnValue = F("Alte Vockenroter Steige");
        break;
    }
    case 7725:
    {
        returnValue = F("Alte Vogelstange");
        break;
    }
    case 7726:
    {
        returnValue = F("Alte Vogtei");
        break;
    }
    case 7727:
    {
        returnValue = F("Alte Vogteier Str.");
        break;
    }
    case 7728:
    {
        returnValue = F("Alte Vogtstr.");
        break;
    }
    case 7729:
    {
        returnValue = F("Alte Voigtsdorfer Str.");
        break;
    }
    case 7730:
    {
        returnValue = F("Alte Volkersbrunner Str.");
        break;
    }
    case 7731:
    {
        returnValue = F("Alte Vosselstr.");
        break;
    }
    case 7732:
    {
        returnValue = F("Alte Waage");
        break;
    }
    case 7733:
    {
        returnValue = F("Alte Wache");
        break;
    }
    case 7734:
    {
        returnValue = F("Alte Wache Park");
        break;
    }
    case 7735:
    {
        returnValue = F("Alte Waiblinger Str.");
        break;
    }
    case 7736:
    {
        returnValue = F("Alte Waibstadter Str.");
        break;
    }
    case 7737:
    {
        returnValue = F("Alte Waisenstiftung");
        break;
    }
    case 7738:
    {
        returnValue = F("Alte Waldbreite");
        break;
    }
    case 7739:
    {
        returnValue = F("Alte Waldhauser Steige");
        break;
    }
    case 7740:
    {
        returnValue = F("Alte Waldkatzenbacher Str.");
        break;
    }
    case 7741:
    {
        returnValue = F("Alte Waldkircher Str.");
        break;
    }
    case 7742:
    {
        returnValue = F("Alte Waldmünchener Str.");
        break;
    }
    case 7743:
    {
        returnValue = F("Alte Waldrennacher Steige");
        break;
    }
    case 7744:
    {
        returnValue = F("Alte Waldschlößchenstr.");
        break;
    }
    case 7745:
    {
        returnValue = F("Alte Waldschmiede");
        break;
    }
    case 7746:
    {
        returnValue = F("Alte Waldschneise");
        break;
    }
    case 7747:
    {
        returnValue = F("Alte Waldsteige");
        break;
    }
    case 7748:
    {
        returnValue = F("Alte Waldstr.");
        break;
    }
    case 7749:
    {
        returnValue = F("Alte Walhallastr.");
        break;
    }
    case 7750:
    {
        returnValue = F("Alte Wallstr.");
        break;
    }
    case 7751:
    {
        returnValue = F("Alte Walserstr.");
        break;
    }
    case 7752:
    {
        returnValue = F("Alte Walz");
        break;
    }
    case 7753:
    {
        returnValue = F("Alte Wangener Str.");
        break;
    }
    case 7754:
    {
        returnValue = F("Alte Warburger Str.");
        break;
    }
    case 7755:
    {
        returnValue = F("Alte Wardener Str.");
        break;
    }
    case 7756:
    {
        returnValue = F("Alte Warfen");
        break;
    }
    case 7757:
    {
        returnValue = F("Alte Warnemünder Chaussee");
        break;
    }
    case 7758:
    {
        returnValue = F("Alte Warnstedter Str.");
        break;
    }
    case 7759:
    {
        returnValue = F("Alte Warte");
        break;
    }
    case 7760:
    {
        returnValue = F("Alte Wartenbergstr.");
        break;
    }
    case 7761:
    {
        returnValue = F("Alte Wasserburger Str.");
        break;
    }
    case 7762:
    {
        returnValue = F("Alte Wasserstr.");
        break;
    }
    case 7763:
    {
        returnValue = F("Alte Weberei");
        break;
    }
    case 7764:
    {
        returnValue = F("Alte Weberstr.");
        break;
    }
    case 7765:
    {
        returnValue = F("Alte Weezer Str.");
        break;
    }
    case 7766:
    {
        returnValue = F("Alte Weg");
        break;
    }
    case 7767:
    {
        returnValue = F("Alte Wegscheide");
        break;
    }
    case 7768:
    {
        returnValue = F("Alte Wehme");
        break;
    }
    case 7769:
    {
        returnValue = F("Alte Wehrbrücke");
        break;
    }
    case 7770:
    {
        returnValue = F("Alte Wehrer Str.");
        break;
    }
    case 7771:
    {
        returnValue = F("Alte Wehrstr.");
        break;
    }
    case 7772:
    {
        returnValue = F("Alte Weickartshainer Str.");
        break;
    }
    case 7773:
    {
        returnValue = F("Alte Weide");
        break;
    }
    case 7774:
    {
        returnValue = F("Alte Weide-Am Schwanenteich");
        break;
    }
    case 7775:
    {
        returnValue = F("Alte Weide-Finkenweg");
        break;
    }
    case 7776:
    {
        returnValue = F("Alte Weide-Möwenweg");
        break;
    }
    case 7777:
    {
        returnValue = F("Alte Weide-Schwanenweg");
        break;
    }
    case 7778:
    {
        returnValue = F("Alte Weiden");
        break;
    }
    case 7779:
    {
        returnValue = F("Alte Weidenauer Str.");
        break;
    }
    case 7780:
    {
        returnValue = F("Alte Weiherstr.");
        break;
    }
    case 7781:
    {
        returnValue = F("Alte Weiler Str.");
        break;
    }
    case 7782:
    {
        returnValue = F("Alte Weilersteige");
        break;
    }
    case 7783:
    {
        returnValue = F("Alte Weilheimer Str.");
        break;
    }
    case 7784:
    {
        returnValue = F("Alte Weinberge");
        break;
    }
    case 7785:
    {
        returnValue = F("Alte Weinbergstr.");
        break;
    }
    case 7786:
    {
        returnValue = F("Alte Weingartener Str.");
        break;
    }
    case 7787:
    {
        returnValue = F("Alte Weinheimer Str.");
        break;
    }
    case 7788:
    {
        returnValue = F("Alte Weinsteige");
        break;
    }
    case 7789:
    {
        returnValue = F("Alte Weinstr.");
        break;
    }
    case 7790:
    {
        returnValue = F("Alte Weischlitzer Str.");
        break;
    }
    case 7791:
    {
        returnValue = F("Alte Weitzmühlener Str.");
        break;
    }
    case 7792:
    {
        returnValue = F("Alte Weißenberger Str.");
        break;
    }
    case 7793:
    {
        returnValue = F("Alte Weißenfelder Str.");
        break;
    }
    case 7794:
    {
        returnValue = F("Alte Weißenfelser Str.");
        break;
    }
    case 7795:
    {
        returnValue = F("Alte Weißensander Str.");
        break;
    }
    case 7796:
    {
        returnValue = F("Alte Weißiger Str.");
        break;
    }
    case 7797:
    {
        returnValue = F("Alte Wellen");
        break;
    }
    case 7798:
    {
        returnValue = F("Alte Welt");
        break;
    }
    case 7799:
    {
        returnValue = F("Alte Welzheimer Str.");
        break;
    }
    case 7800:
    {
        returnValue = F("Alte Wember Str.");
        break;
    }
    case 7801:
    {
        returnValue = F("Alte Wemmershöfer Str.");
        break;
    }
    case 7802:
    {
        returnValue = F("Alte Wennigloher Landstr.");
        break;
    }
    case 7803:
    {
        returnValue = F("Alte Werft");
        break;
    }
    case 7804:
    {
        returnValue = F("Alte Werftstr.");
        break;
    }
    case 7805:
    {
        returnValue = F("Alte Werftzufahrt");
        break;
    }
    case 7806:
    {
        returnValue = F("Alte Werkstr.");
        break;
    }
    case 7807:
    {
        returnValue = F("Alte Werner Str.");
        break;
    }
    case 7808:
    {
        returnValue = F("Alte Wernigeröder Str.");
        break;
    }
    case 7809:
    {
        returnValue = F("Alte Werrestr.");
        break;
    }
    case 7810:
    {
        returnValue = F("Alte Wertheimer Str.");
        break;
    }
    case 7811:
    {
        returnValue = F("Alte Wertinger Str.");
        break;
    }
    case 7812:
    {
        returnValue = F("Alte Weseler Str.");
        break;
    }
    case 7813:
    {
        returnValue = F("Alte Weserstr.");
        break;
    }
    case 7814:
    {
        returnValue = F("Alte Weststr.");
        break;
    }
    case 7815:
    {
        returnValue = F("Alte Weth");
        break;
    }
    case 7816:
    {
        returnValue = F("Alte Wettener Str.");
        break;
    }
    case 7817:
    {
        returnValue = F("Alte Wetzlarer Str.");
        break;
    }
    case 7818:
    {
        returnValue = F("Alte Wiedenbrücker Str.");
        break;
    }
    case 7819:
    {
        returnValue = F("Alte Wiefelsteder Str.");
        break;
    }
    case 7820:
    {
        returnValue = F("Alte Wieke");
        break;
    }
    case 7821:
    {
        returnValue = F("Alte Wiernsheimer Str.");
        break;
    }
    case 7822:
    {
        returnValue = F("Alte Wiese");
        break;
    }
    case 7823:
    {
        returnValue = F("Alte Wiesen");
        break;
    }
    case 7824:
    {
        returnValue = F("Alte Wiesenburger Landstr.");
        break;
    }
    case 7825:
    {
        returnValue = F("Alte Wiesenstr.");
        break;
    }
    case 7826:
    {
        returnValue = F("Alte Wiesenthaler Str.");
        break;
    }
    case 7827:
    {
        returnValue = F("Alte Wildbader Str.");
        break;
    }
    case 7828:
    {
        returnValue = F("Alte Wildenauer Str.");
        break;
    }
    case 7829:
    {
        returnValue = F("Alte Wildschützer Str.");
        break;
    }
    case 7830:
    {
        returnValue = F("Alte Wildunger Str.");
        break;
    }
    case 7831:
    {
        returnValue = F("Alte Wilferdinger Str.");
        break;
    }
    case 7832:
    {
        returnValue = F("Alte Wilhelmshäuser Str.");
        break;
    }
    case 7833:
    {
        returnValue = F("Alte Wilhelmstr.");
        break;
    }
    case 7834:
    {
        returnValue = F("Alte Willanzheimer Str.");
        break;
    }
    case 7835:
    {
        returnValue = F("Alte Wimpfener Str.");
        break;
    }
    case 7836:
    {
        returnValue = F("Alte Wimsheimer Str.");
        break;
    }
    case 7837:
    {
        returnValue = F("Alte Windheimer Str.");
        break;
    }
    case 7838:
    {
        returnValue = F("Alte Windhorst");
        break;
    }
    case 7839:
    {
        returnValue = F("Alte Windmühle");
        break;
    }
    case 7840:
    {
        returnValue = F("Alte Winkelgasse");
        break;
    }
    case 7841:
    {
        returnValue = F("Alte Winnender Steige");
        break;
    }
    case 7842:
    {
        returnValue = F("Alte Winzler Str.");
        break;
    }
    case 7843:
    {
        returnValue = F("Alte Wipperfürther Str.");
        break;
    }
    case 7844:
    {
        returnValue = F("Alte Wirsberger Str.");
        break;
    }
    case 7845:
    {
        returnValue = F("Alte Wisch");
        break;
    }
    case 7846:
    {
        returnValue = F("Alte Wittenberger Str.");
        break;
    }
    case 7847:
    {
        returnValue = F("Alte Wittener Str.");
        break;
    }
    case 7848:
    {
        returnValue = F("Alte Wittighäuser Str.");
        break;
    }
    case 7849:
    {
        returnValue = F("Alte Wittorfer Str.");
        break;
    }
    case 7850:
    {
        returnValue = F("Alte Wohlhausener Str.");
        break;
    }
    case 7851:
    {
        returnValue = F("Alte Wolfhager Str.");
        break;
    }
    case 7852:
    {
        returnValue = F("Alte Wolfshaldergasse");
        break;
    }
    case 7853:
    {
        returnValue = F("Alte Woogstr.");
        break;
    }
    case 7854:
    {
        returnValue = F("Alte Wormser Str.");
        break;
    }
    case 7855:
    {
        returnValue = F("Alte Wunsiedler Str.");
        break;
    }
    case 7856:
    {
        returnValue = F("Alte Wurth");
        break;
    }
    case 7857:
    {
        returnValue = F("Alte Wurzelbergstr.");
        break;
    }
    case 7858:
    {
        returnValue = F("Alte Wurzener Str.");
        break;
    }
    case 7859:
    {
        returnValue = F("Alte Wölmsdorfer Str.");
        break;
    }
    case 7860:
    {
        returnValue = F("Alte Wörther Str.");
        break;
    }
    case 7861:
    {
        returnValue = F("Alte Würzburger Str.");
        break;
    }
    case 7862:
    {
        returnValue = F("Alte Yacher Str.");
        break;
    }
    case 7863:
    {
        returnValue = F("Alte Zeche");
        break;
    }
    case 7864:
    {
        returnValue = F("Alte Zechenbahn Arenberg Fortsetzung");
        break;
    }
    case 7865:
    {
        returnValue = F("Alte Zeile");
        break;
    }
    case 7866:
    {
        returnValue = F("Alte Zeisholzer Str.");
        break;
    }
    case 7867:
    {
        returnValue = F("Alte Zennstr.");
        break;
    }
    case 7868:
    {
        returnValue = F("Alte Zerbster Str.");
        break;
    }
    case 7869:
    {
        returnValue = F("Alte Ziegelei");
        break;
    }
    case 7870:
    {
        returnValue = F("Alte Ziegeleigasse");
        break;
    }
    case 7871:
    {
        returnValue = F("Alte Ziegeleistr.");
        break;
    }
    case 7872:
    {
        returnValue = F("Alte Ziegelhütte");
        break;
    }
    case 7873:
    {
        returnValue = F("Alte Ziegelstr.");
        break;
    }
    case 7874:
    {
        returnValue = F("Alte Zigelei");
        break;
    }
    case 7875:
    {
        returnValue = F("Alte Zimmerei");
        break;
    }
    case 7876:
    {
        returnValue = F("Alte Zinnstr.");
        break;
    }
    case 7877:
    {
        returnValue = F("Alte Zippelsförder Landstr.");
        break;
    }
    case 7878:
    {
        returnValue = F("Alte Zirkuskoppel");
        break;
    }
    case 7879:
    {
        returnValue = F("Alte Zollhäuser");
        break;
    }
    case 7880:
    {
        returnValue = F("Alte Zollstation");
        break;
    }
    case 7881:
    {
        returnValue = F("Alte Zollstr.");
        break;
    }
    case 7882:
    {
        returnValue = F("Alte Zschopauer");
        break;
    }
    case 7883:
    {
        returnValue = F("Alte Zuckerfabrik");
        break;
    }
    case 7884:
    {
        returnValue = F("Alte Zweifaller Str.");
        break;
    }
    case 7885:
    {
        returnValue = F("Alte Zwetschenstr.");
        break;
    }
    case 7886:
    {
        returnValue = F("Alte Zwingenberger Str.");
        break;
    }
    case 7887:
    {
        returnValue = F("Alte Zwingerstr.");
        break;
    }
    case 7888:
    {
        returnValue = F("Alte Zwirnerei");
        break;
    }
    case 7889:
    {
        returnValue = F("Alte Zwoschwitzer Str.");
        break;
    }
    case 7890:
    {
        returnValue = F("Alte Zwönitzer Str.");
        break;
    }
    case 7891:
    {
        returnValue = F("Alte Züllsdorfer Str.");
        break;
    }
    case 7892:
    {
        returnValue = F("Alte verwachsene Forststr.");
        break;
    }
    case 7893:
    {
        returnValue = F("Alte wiesauer Str.");
        break;
    }
    case 7894:
    {
        returnValue = F("Alte Ötlinger Str.");
        break;
    }
    case 7895:
    {
        returnValue = F("Alte Überfahrt");
        break;
    }
    case 7896:
    {
        returnValue = F("Alte Üllnitzer Str.");
        break;
    }
    case 7897:
    {
        returnValue = F("Alte Ümminger Str.");
        break;
    }
    case 7898:
    {
        returnValue = F("Alte-Bornholts-Damm");
        break;
    }
    case 7899:
    {
        returnValue = F("Alte-Burg-Str.");
        break;
    }
    case 7900:
    {
        returnValue = F("Alte-Dreisbach-Str.");
        break;
    }
    case 7901:
    {
        returnValue = F("Alte-Eich-Weg");
        break;
    }
    case 7902:
    {
        returnValue = F("Alte-Feld");
        break;
    }
    case 7903:
    {
        returnValue = F("Alte-Feld-Str.");
        break;
    }
    case 7904:
    {
        returnValue = F("Alte-Fritz-Str.");
        break;
    }
    case 7905:
    {
        returnValue = F("Alte-Hof-Gasse");
        break;
    }
    case 7906:
    {
        returnValue = F("Alte-Hälden-Weg");
        break;
    }
    case 7907:
    {
        returnValue = F("Alte-Kelter-Str.");
        break;
    }
    case 7908:
    {
        returnValue = F("Alte-Kirchhof-Str.");
        break;
    }
    case 7909:
    {
        returnValue = F("Alte-Kölner-Str.");
        break;
    }
    case 7910:
    {
        returnValue = F("Alte-Lauter-Str.");
        break;
    }
    case 7911:
    {
        returnValue = F("Alte-Lothramühle");
        break;
    }
    case 7912:
    {
        returnValue = F("Alte-Mellum-Weg");
        break;
    }
    case 7913:
    {
        returnValue = F("Alte-Mia-Str.");
        break;
    }
    case 7914:
    {
        returnValue = F("Alte-Mucher-Str.");
        break;
    }
    case 7915:
    {
        returnValue = F("Alte-Mühl-Str.");
        break;
    }
    case 7916:
    {
        returnValue = F("Alte-Mühlen-Str.");
        break;
    }
    case 7917:
    {
        returnValue = F("Alte-Nordhäuser-Str.");
        break;
    }
    case 7918:
    {
        returnValue = F("Alte-Pionierstr.");
        break;
    }
    case 7919:
    {
        returnValue = F("Alte-Post-Passage");
        break;
    }
    case 7920:
    {
        returnValue = F("Alte-Post-Str.");
        break;
    }
    case 7921:
    {
        returnValue = F("Alte-Reute-Weg");
        break;
    }
    case 7922:
    {
        returnValue = F("Alte-Rothe-Str.");
        break;
    }
    case 7923:
    {
        returnValue = F("Alte-Rütte-Weg");
        break;
    }
    case 7924:
    {
        returnValue = F("Alte-Stadt-Weg");
        break;
    }
    case 7925:
    {
        returnValue = F("Alte-Synagogen-Str.");
        break;
    }
    case 7926:
    {
        returnValue = F("Alte-Thomas-Müntzer-Str.");
        break;
    }
    case 7927:
    {
        returnValue = F("Alte-Vierundzwanzig-Höfer-Str.");
        break;
    }
    case 7928:
    {
        returnValue = F("Alte-Wollenweber-Weg");
        break;
    }
    case 7929:
    {
        returnValue = F("Alte-Wolterdinger-Str.");
        break;
    }
    case 7930:
    {
        returnValue = F("Altebach");
        break;
    }
    case 7931:
    {
        returnValue = F("Altebeek");
        break;
    }
    case 7932:
    {
        returnValue = F("Altebeek Siedlung");
        break;
    }
    case 7933:
    {
        returnValue = F("Altebergstr.");
        break;
    }
    case 7934:
    {
        returnValue = F("Altebergsweg");
        break;
    }
    case 7935:
    {
        returnValue = F("Altebergweg");
        break;
    }
    case 7936:
    {
        returnValue = F("Altebrücke");
        break;
    }
    case 7937:
    {
        returnValue = F("Altebrücker Str.");
        break;
    }
    case 7938:
    {
        returnValue = F("Alteburger Str.");
        break;
    }
    case 7939:
    {
        returnValue = F("Alteburgstr.");
        break;
    }
    case 7940:
    {
        returnValue = F("Alteburgweg");
        break;
    }
    case 7941:
    {
        returnValue = F("Alteck");
        break;
    }
    case 7942:
    {
        returnValue = F("Alteckstr.");
        break;
    }
    case 7943:
    {
        returnValue = F("Altedorfstr.");
        break;
    }
    case 7944:
    {
        returnValue = F("Altefeld");
        break;
    }
    case 7945:
    {
        returnValue = F("Altefelder Str.");
        break;
    }
    case 7946:
    {
        returnValue = F("Altefelds Holz");
        break;
    }
    case 7947:
    {
        returnValue = F("Altefeldstr.");
        break;
    }
    case 7948:
    {
        returnValue = F("Altegarten");
        break;
    }
    case 7949:
    {
        returnValue = F("Altegasse");
        break;
    }
    case 7950:
    {
        returnValue = F("Altehageweg");
        break;
    }
    case 7951:
    {
        returnValue = F("Altehautskamp");
        break;
    }
    case 7952:
    {
        returnValue = F("Altehof");
        break;
    }
    case 7953:
    {
        returnValue = F("Altehofweg");
        break;
    }
    case 7954:
    {
        returnValue = F("Alteichenallee");
        break;
    }
    case 7955:
    {
        returnValue = F("Altekirchen");
        break;
    }
    case 7956:
    {
        returnValue = F("Altemarkstr.");
        break;
    }
    case 7957:
    {
        returnValue = F("Altemarktstr.");
        break;
    }
    case 7958:
    {
        returnValue = F("Altemeierweg");
        break;
    }
    case 7959:
    {
        returnValue = F("Altemühle");
        break;
    }
    case 7960:
    {
        returnValue = F("Alten Boern");
        break;
    }
    case 7961:
    {
        returnValue = F("Alten Deich");
        break;
    }
    case 7962:
    {
        returnValue = F("Alten Eesch");
        break;
    }
    case 7963:
    {
        returnValue = F("Alten Eichen");
        break;
    }
    case 7964:
    {
        returnValue = F("Alten Graben");
        break;
    }
    case 7965:
    {
        returnValue = F("Alten Hoff");
        break;
    }
    case 7966:
    {
        returnValue = F("Alten Rähden");
        break;
    }
    case 7967:
    {
        returnValue = F("Alten Walstedde");
        break;
    }
    case 7968:
    {
        returnValue = F("Alten Weden");
        break;
    }
    case 7969:
    {
        returnValue = F("Alten Äcker");
        break;
    }
    case 7970:
    {
        returnValue = F("Alten- und Pflegeheim St. Katharina");
        break;
    }
    case 7971:
    {
        returnValue = F("Alten-Busecker Weg");
        break;
    }
    case 7972:
    {
        returnValue = F("Alten-Busecker-Str.");
        break;
    }
    case 7973:
    {
        returnValue = F("Alten-Büchel-Str.");
        break;
    }
    case 7974:
    {
        returnValue = F("Altenaer Str.");
        break;
    }
    case 7975:
    {
        returnValue = F("Altenaer Weg");
        break;
    }
    case 7976:
    {
        returnValue = F("Altenaffelner Str.");
        break;
    }
    case 7977:
    {
        returnValue = F("Altenahrer Str.");
        break;
    }
    case 7978:
    {
        returnValue = F("Altenastr.");
        break;
    }
    case 7979:
    {
        returnValue = F("Altenau");
        break;
    }
    case 7980:
    {
        returnValue = F("Altenauer Str.");
        break;
    }
    case 7981:
    {
        returnValue = F("Altenauergasse");
        break;
    }
    case 7982:
    {
        returnValue = F("Altenaupark");
        break;
    }
    case 7983:
    {
        returnValue = F("Altenauplatz");
        break;
    }
    case 7984:
    {
        returnValue = F("Altenaustr.");
        break;
    }
    case 7985:
    {
        returnValue = F("Altenauweg");
        break;
    }
    case 7986:
    {
        returnValue = F("Altenbach");
        break;
    }
    case 7987:
    {
        returnValue = F("Altenbacher Str.");
        break;
    }
    case 7988:
    {
        returnValue = F("Altenbacher Weg");
        break;
    }
    case 7989:
    {
        returnValue = F("Altenbachstr.");
        break;
    }
    case 7990:
    {
        returnValue = F("Altenbachweg");
        break;
    }
    case 7991:
    {
        returnValue = F("Altenbaindter Str.");
        break;
    }
    case 7992:
    {
        returnValue = F("Altenbanzer Weg");
        break;
    }
    case 7993:
    {
        returnValue = F("Altenbau");
        break;
    }
    case 7994:
    {
        returnValue = F("Altenbaunaer Str.");
        break;
    }
    case 7995:
    {
        returnValue = F("Altenbaustr.");
        break;
    }
    case 7996:
    {
        returnValue = F("Altenbeichlinger Str.");
        break;
    }
    case 7997:
    {
        returnValue = F("Altenbekener Str.");
        break;
    }
    case 7998:
    {
        returnValue = F("Altenbekener Weg");
        break;
    }
    case 7999:
    {
        returnValue = F("Altenberg");
        break;
    }
    case 8000:
    {
        returnValue = F("Altenberger Gasse");
        break;
    }
    case 8001:
    {
        returnValue = F("Altenberger Str.");
        break;
    }
    case 8002:
    {
        returnValue = F("Altenberger Weg");
        break;
    }
    case 8003:
    {
        returnValue = F("Altenberger-Dom-Str.");
        break;
    }
    case 8004:
    {
        returnValue = F("Altenbergerhofstr.");
        break;
    }
    case 8005:
    {
        returnValue = F("Altenbergring");
        break;
    }
    case 8006:
    {
        returnValue = F("Altenbergsteige");
        break;
    }
    case 8007:
    {
        returnValue = F("Altenbergstr.");
        break;
    }
    case 8008:
    {
        returnValue = F("Altenbergsweg");
        break;
    }
    case 8009:
    {
        returnValue = F("Altenbergweg");
        break;
    }
    case 8010:
    {
        returnValue = F("Altenberndstr.");
        break;
    }
    case 8011:
    {
        returnValue = F("Altenbiesenstr.");
        break;
    }
    case 8012:
    {
        returnValue = F("Altenbochumer Str.");
        break;
    }
    case 8013:
    {
        returnValue = F("Altenborn");
        break;
    }
    case 8014:
    {
        returnValue = F("Altenborngasse");
        break;
    }
    case 8015:
    {
        returnValue = F("Altenbrachtweg");
        break;
    }
    case 8016:
    {
        returnValue = F("Altenbraker Bergstr.");
        break;
    }
    case 8017:
    {
        returnValue = F("Altenbraker Str.");
        break;
    }
    case 8018:
    {
        returnValue = F("Altenbrandenweg");
        break;
    }
    case 8019:
    {
        returnValue = F("Altenbreckerfeld");
        break;
    }
    case 8020:
    {
        returnValue = F("Altenbredde");
        break;
    }
    case 8021:
    {
        returnValue = F("Altenbrede");
        break;
    }
    case 8022:
    {
        returnValue = F("Altenbriloner Str.");
        break;
    }
    case 8023:
    {
        returnValue = F("Altenbroicher Str.");
        break;
    }
    case 8024:
    {
        returnValue = F("Altenbrucher Bahnhof");
        break;
    }
    case 8025:
    {
        returnValue = F("Altenbrucher Bahnhofstr.");
        break;
    }
    case 8026:
    {
        returnValue = F("Altenbrucher Landstr.");
        break;
    }
    case 8027:
    {
        returnValue = F("Altenbrucher Mühlenweg");
        break;
    }
    case 8028:
    {
        returnValue = F("Altenbruchstr.");
        break;
    }
    case 8029:
    {
        returnValue = F("Altenbrunn");
        break;
    }
    case 8030:
    {
        returnValue = F("Altenbrunnenstr.");
        break;
    }
    case 8031:
    {
        returnValue = F("Altenbrunnweg");
        break;
    }
    case 8032:
    {
        returnValue = F("Altenbrückerdamm");
        break;
    }
    case 8033:
    {
        returnValue = F("Altenbrückertorstr.");
        break;
    }
    case 8034:
    {
        returnValue = F("Altenbuch");
        break;
    }
    case 8035:
    {
        returnValue = F("Altenbuchener Str.");
        break;
    }
    case 8036:
    {
        returnValue = F("Altenbucher Weg");
        break;
    }
    case 8037:
    {
        returnValue = F("Altenburg");
        break;
    }
    case 8038:
    {
        returnValue = F("Altenburgblick");
        break;
    }
    case 8039:
    {
        returnValue = F("Altenburger Allee");
        break;
    }
    case 8040:
    {
        returnValue = F("Altenburger Landstr.");
        break;
    }
    case 8041:
    {
        returnValue = F("Altenburger Ring");
        break;
    }
    case 8042:
    {
        returnValue = F("Altenburger Str.");
        break;
    }
    case 8043:
    {
        returnValue = F("Altenburger Weg");
        break;
    }
    case 8044:
    {
        returnValue = F("Altenburgplatz");
        break;
    }
    case 8045:
    {
        returnValue = F("Altenburgring");
        break;
    }
    case 8046:
    {
        returnValue = F("Altenburgstr.");
        break;
    }
    case 8047:
    {
        returnValue = F("Altenburgweg");
        break;
    }
    case 8048:
    {
        returnValue = F("Altenböddeken");
        break;
    }
    case 8049:
    {
        returnValue = F("Altenbücher Weg");
        break;
    }
    case 8050:
    {
        returnValue = F("Altenbücker Damm");
        break;
    }
    case 8051:
    {
        returnValue = F("Altenbücker Str.");
        break;
    }
    case 8052:
    {
        returnValue = F("Altenbühl");
        break;
    }
    case 8053:
    {
        returnValue = F("Altenbürener Mühle");
        break;
    }
    case 8054:
    {
        returnValue = F("Altenbürener Str.");
        break;
    }
    case 8055:
    {
        returnValue = F("Altenbürgstr.");
        break;
    }
    case 8056:
    {
        returnValue = F("Altenceller Feld");
        break;
    }
    case 8057:
    {
        returnValue = F("Altenceller Schneede");
        break;
    }
    case 8058:
    {
        returnValue = F("Altenceller Trift");
        break;
    }
    case 8059:
    {
        returnValue = F("Altenceller Weg");
        break;
    }
    case 8060:
    {
        returnValue = F("Altencellertorstr.");
        break;
    }
    case 8061:
    {
        returnValue = F("Altencreußener Str.");
        break;
    }
    case 8062:
    {
        returnValue = F("Altendahl");
        break;
    }
    case 8063:
    {
        returnValue = F("Altendeich");
        break;
    }
    case 8064:
    {
        returnValue = F("Altendeicher Chaussee");
        break;
    }
    case 8065:
    {
        returnValue = F("Altendeicher Str.");
        break;
    }
    case 8066:
    {
        returnValue = F("Altendeicher Weg");
        break;
    }
    case 8067:
    {
        returnValue = F("Altendeichsweg");
        break;
    }
    case 8068:
    {
        returnValue = F("Altendeichweg");
        break;
    }
    case 8069:
    {
        returnValue = F("Altendettelsau");
        break;
    }
    case 8070:
    {
        returnValue = F("Altendettelsauer Str.");
        break;
    }
    case 8071:
    {
        returnValue = F("Altendorf");
        break;
    }
    case 8072:
    {
        returnValue = F("Altendorfer Diek");
        break;
    }
    case 8073:
    {
        returnValue = F("Altendorfer Kirchgasse");
        break;
    }
    case 8074:
    {
        returnValue = F("Altendorfer Kirchweg");
        break;
    }
    case 8075:
    {
        returnValue = F("Altendorfer Ring");
        break;
    }
    case 8076:
    {
        returnValue = F("Altendorfer Str.");
        break;
    }
    case 8077:
    {
        returnValue = F("Altendorfer Tor");
        break;
    }
    case 8078:
    {
        returnValue = F("Altendorfer Weg");
        break;
    }
    case 8079:
    {
        returnValue = F("Altendyck");
        break;
    }
    case 8080:
    {
        returnValue = F("Altenend");
        break;
    }
    case 8081:
    {
        returnValue = F("Altener Str.");
        break;
    }
    case 8082:
    {
        returnValue = F("Altenescher Ring");
        break;
    }
    case 8083:
    {
        returnValue = F("Altenescher Weg");
        break;
    }
    case 8084:
    {
        returnValue = F("Altenessener Str.");
        break;
    }
    case 8085:
    {
        returnValue = F("Altenfeld");
        break;
    }
    case 8086:
    {
        returnValue = F("Altenfeldener Str.");
        break;
    }
    case 8087:
    {
        returnValue = F("Altenfelder Str.");
        break;
    }
    case 8088:
    {
        returnValue = F("Altenfelder Weg");
        break;
    }
    case 8089:
    {
        returnValue = F("Altenfelderhofstr.");
        break;
    }
    case 8090:
    {
        returnValue = F("Altenfeldsweg");
        break;
    }
    case 8091:
    {
        returnValue = F("Altenfeldweg");
        break;
    }
    case 8092:
    {
        returnValue = F("Altenfilsstr.");
        break;
    }
    case 8093:
    {
        returnValue = F("Altenfluth");
        break;
    }
    case 8094:
    {
        returnValue = F("Altenfluther Weg");
        break;
    }
    case 8095:
    {
        returnValue = F("Altenfurter Str.");
        break;
    }
    case 8096:
    {
        returnValue = F("Altenfurther Str.");
        break;
    }
    case 8097:
    {
        returnValue = F("Altengai");
        break;
    }
    case 8098:
    {
        returnValue = F("Altengaigrabenweg");
        break;
    }
    case 8099:
    {
        returnValue = F("Altengammer Str.");
        break;
    }
    case 8100:
    {
        returnValue = F("Altengarten");
        break;
    }
    case 8101:
    {
        returnValue = F("Altengasse");
        break;
    }
    case 8102:
    {
        returnValue = F("Altengaßweg");
        break;
    }
    case 8103:
    {
        returnValue = F("Altengesees");
        break;
    }
    case 8104:
    {
        returnValue = F("Altenglaner Str.");
        break;
    }
    case 8105:
    {
        returnValue = F("Altengottersche Str.");
        break;
    }
    case 8106:
    {
        returnValue = F("Altengottersches Tor");
        break;
    }
    case 8107:
    {
        returnValue = F("Altengraben");
        break;
    }
    case 8108:
    {
        returnValue = F("Altengrabower Str.");
        break;
    }
    case 8109:
    {
        returnValue = F("Altengrodener Weg");
        break;
    }
    case 8110:
    {
        returnValue = F("Altengronauer Str.");
        break;
    }
    case 8111:
    {
        returnValue = F("Altengärtenweg");
        break;
    }
    case 8112:
    {
        returnValue = F("Altengönna");
        break;
    }
    case 8113:
    {
        returnValue = F("Altenhafen");
        break;
    }
    case 8114:
    {
        returnValue = F("Altenhagen");
        break;
    }
    case 8115:
    {
        returnValue = F("Altenhagener Esch");
        break;
    }
    case 8116:
    {
        returnValue = F("Altenhagener Str.");
        break;
    }
    case 8117:
    {
        returnValue = F("Altenhageweg");
        break;
    }
    case 8118:
    {
        returnValue = F("Altenhain");
        break;
    }
    case 8119:
    {
        returnValue = F("Altenhainer Allee");
        break;
    }
    case 8120:
    {
        returnValue = F("Altenhainer Dorfstr.");
        break;
    }
    case 8121:
    {
        returnValue = F("Altenhainer Str.");
        break;
    }
    case 8122:
    {
        returnValue = F("Altenhainer Weg");
        break;
    }
    case 8123:
    {
        returnValue = F("Altenhalde");
        break;
    }
    case 8124:
    {
        returnValue = F("Altenhamer Str.");
        break;
    }
    case 8125:
    {
        returnValue = F("Altenhammerweg");
        break;
    }
    case 8126:
    {
        returnValue = F("Altenhammstr.");
        break;
    }
    case 8127:
    {
        returnValue = F("Altenhasunger Str.");
        break;
    }
    case 8128:
    {
        returnValue = F("Altenhasunger Weg");
        break;
    }
    case 8129:
    {
        returnValue = F("Altenhau");
        break;
    }
    case 8130:
    {
        returnValue = F("Altenhausener Str.");
        break;
    }
    case 8131:
    {
        returnValue = F("Altenhauser Fußweg");
        break;
    }
    case 8132:
    {
        returnValue = F("Altenhausgasse");
        break;
    }
    case 8133:
    {
        returnValue = F("Altenhaustr.");
        break;
    }
    case 8134:
    {
        returnValue = F("Altenhausweg");
        break;
    }
    case 8135:
    {
        returnValue = F("Altenhauweg");
        break;
    }
    case 8136:
    {
        returnValue = F("Altenhaßlauer Str.");
        break;
    }
    case 8137:
    {
        returnValue = F("Altenhaßlauer Weg");
        break;
    }
    case 8138:
    {
        returnValue = F("Altenheideck");
        break;
    }
    case 8139:
    {
        returnValue = F("Altenheim Faberschloß");
        break;
    }
    case 8140:
    {
        returnValue = F("Altenheim Kirchheim");
        break;
    }
    case 8141:
    {
        returnValue = F("Altenheimer Str.");
        break;
    }
    case 8142:
    {
        returnValue = F("Altenheimer Weg");
        break;
    }
    case 8143:
    {
        returnValue = F("Altenheimpark");
        break;
    }
    case 8144:
    {
        returnValue = F("Altenheimstr.");
        break;
    }
    case 8145:
    {
        returnValue = F("Altenherfen");
        break;
    }
    case 8146:
    {
        returnValue = F("Altenhilgen");
        break;
    }
    case 8147:
    {
        returnValue = F("Altenhimmelstr.");
        break;
    }
    case 8148:
    {
        returnValue = F("Altenhof");
        break;
    }
    case 8149:
    {
        returnValue = F("Altenhof/Oedenthal");
        break;
    }
    case 8150:
    {
        returnValue = F("Altenhofen B");
        break;
    }
    case 8151:
    {
        returnValue = F("Altenhofen C");
        break;
    }
    case 8152:
    {
        returnValue = F("Altenhofen D");
        break;
    }
    case 8153:
    {
        returnValue = F("Altenhofen F");
        break;
    }
    case 8154:
    {
        returnValue = F("Altenhofer Dorfstr.");
        break;
    }
    case 8155:
    {
        returnValue = F("Altenhofer Str.");
        break;
    }
    case 8156:
    {
        returnValue = F("Altenhofer Waldstr.");
        break;
    }
    case 8157:
    {
        returnValue = F("Altenhofer Weg");
        break;
    }
    case 8158:
    {
        returnValue = F("Altenhoferstr.");
        break;
    }
    case 8159:
    {
        returnValue = F("Altenhoffs Feld");
        break;
    }
    case 8160:
    {
        returnValue = F("Altenhofstr.");
        break;
    }
    case 8161:
    {
        returnValue = F("Altenhofweg");
        break;
    }
    case 8162:
    {
        returnValue = F("Altenholte");
        break;
    }
    case 8163:
    {
        returnValue = F("Altenholzer Str.");
        break;
    }
    case 8164:
    {
        returnValue = F("Altenhorst");
        break;
    }
    case 8165:
    {
        returnValue = F("Altenhorster Str.");
        break;
    }
    case 8166:
    {
        returnValue = F("Altenhude");
        break;
    }
    case 8167:
    {
        returnValue = F("Altenhäger Kirchweg");
        break;
    }
    case 8168:
    {
        returnValue = F("Altenhäger Str.");
        break;
    }
    case 8169:
    {
        returnValue = F("Altenhäger Weg");
        break;
    }
    case 8170:
    {
        returnValue = F("Altenhäusen");
        break;
    }
    case 8171:
    {
        returnValue = F("Altenhäuser Str.");
        break;
    }
    case 8172:
    {
        returnValue = F("Altenhäuser Weg");
        break;
    }
    case 8173:
    {
        returnValue = F("Altenhöfen");
        break;
    }
    case 8174:
    {
        returnValue = F("Altenhöfener Str.");
        break;
    }
    case 8175:
    {
        returnValue = F("Altenhöhe");
        break;
    }
    case 8176:
    {
        returnValue = F("Altenhülscheid");
        break;
    }
    case 8177:
    {
        returnValue = F("Altenilpe");
        break;
    }
    case 8178:
    {
        returnValue = F("Altenilper Str.");
        break;
    }
    case 8179:
    {
        returnValue = F("Altenjahn");
        break;
    }
    case 8180:
    {
        returnValue = F("Altenjahner Weg");
        break;
    }
    case 8181:
    {
        returnValue = F("Altenkamp");
        break;
    }
    case 8182:
    {
        returnValue = F("Altenkattbek");
        break;
    }
    case 8183:
    {
        returnValue = F("Altenkesseler Str.");
        break;
    }
    case 8184:
    {
        returnValue = F("Altenkirch-Weg");
        break;
    }
    case 8185:
    {
        returnValue = F("Altenkirchen");
        break;
    }
    case 8186:
    {
        returnValue = F("Altenkirchener Chaussee");
        break;
    }
    case 8187:
    {
        returnValue = F("Altenkirchener Str.");
        break;
    }
    case 8188:
    {
        returnValue = F("Altenkirchener Weg");
        break;
    }
    case 8189:
    {
        returnValue = F("Altenkircher Str.");
        break;
    }
    case 8190:
    {
        returnValue = F("Altenkircher Weg");
        break;
    }
    case 8191:
    {
        returnValue = F("Altenkleusheimer Str.");
        break;
    }
    case 8192:
    {
        returnValue = F("Altenklosterstr.");
        break;
    }
    case 8193:
    {
        returnValue = F("Altenkoog");
        break;
    }
    case 8194:
    {
        returnValue = F("Altenkotten");
        break;
    }
    case 8195:
    {
        returnValue = F("Altenkunstadter Str.");
        break;
    }
    case 8196:
    {
        returnValue = F("Altenkünsberg");
        break;
    }
    case 8197:
    {
        returnValue = F("Altenlinde");
        break;
    }
    case 8198:
    {
        returnValue = F("Altenloher Weg");
        break;
    }
    case 8199:
    {
        returnValue = F("Altenlüdenscheid");
        break;
    }
    case 8200:
    {
        returnValue = F("Altenmahlberg");
        break;
    }
    case 8201:
    {
        returnValue = F("Altenmaiserstr.");
        break;
    }
    case 8202:
    {
        returnValue = F("Altenmark");
        break;
    }
    case 8203:
    {
        returnValue = F("Altenmarkt");
        break;
    }
    case 8204:
    {
        returnValue = F("Altenmarkter Str.");
        break;
    }
    case 8205:
    {
        returnValue = F("Altenmarkweg");
        break;
    }
    case 8206:
    {
        returnValue = F("Altenmeller Ring");
        break;
    }
    case 8207:
    {
        returnValue = F("Altenmeller Str.");
        break;
    }
    case 8208:
    {
        returnValue = F("Altenmethler");
        break;
    }
    case 8209:
    {
        returnValue = F("Altenmittlauer Str.");
        break;
    }
    case 8210:
    {
        returnValue = F("Altenmittlauer Weg");
        break;
    }
    case 8211:
    {
        returnValue = F("Altenmoor");
        break;
    }
    case 8212:
    {
        returnValue = F("Altenmühle");
        break;
    }
    case 8213:
    {
        returnValue = F("Altenmühlen");
        break;
    }
    case 8214:
    {
        returnValue = F("Altenmünsterer Str.");
        break;
    }
    case 8215:
    {
        returnValue = F("Altennümbrechter Str.");
        break;
    }
    case 8216:
    {
        returnValue = F("Alteno");
        break;
    }
    case 8217:
    {
        returnValue = F("Altenother Weg");
        break;
    }
    case 8218:
    {
        returnValue = F("Altenoyther Ringstr.");
        break;
    }
    case 8219:
    {
        returnValue = F("Altenoyther Str.");
        break;
    }
    case 8220:
    {
        returnValue = F("Altenpark");
        break;
    }
    case 8221:
    {
        returnValue = F("Altenparkstein");
        break;
    }
    case 8222:
    {
        returnValue = F("Altenplathower Str.");
        break;
    }
    case 8223:
    {
        returnValue = F("Altenrade");
        break;
    }
    case 8224:
    {
        returnValue = F("Altenrader Weg");
        break;
    }
    case 8225:
    {
        returnValue = F("Altenrain");
        break;
    }
    case 8226:
    {
        returnValue = F("Altenrather Feld");
        break;
    }
    case 8227:
    {
        returnValue = F("Altenrather Str.");
        break;
    }
    case 8228:
    {
        returnValue = F("Altenrather Weg");
        break;
    }
    case 8229:
    {
        returnValue = F("Altenreuth");
        break;
    }
    case 8230:
    {
        returnValue = F("Altenreuther Weg");
        break;
    }
    case 8231:
    {
        returnValue = F("Altenrheiner Str.");
        break;
    }
    case 8232:
    {
        returnValue = F("Altenrheiner Weg");
        break;
    }
    case 8233:
    {
        returnValue = F("Altenrieder Str.");
        break;
    }
    case 8234:
    {
        returnValue = F("Altenrieter Str.");
        break;
    }
    case 8235:
    {
        returnValue = F("Altenrieterweg");
        break;
    }
    case 8236:
    {
        returnValue = F("Altenritter Str.");
        break;
    }
    case 8237:
    {
        returnValue = F("Altenrodaer Str.");
        break;
    }
    case 8238:
    {
        returnValue = F("Altenrodaer Weg");
        break;
    }
    case 8239:
    {
        returnValue = F("Altenroder Str.");
        break;
    }
    case 8240:
    {
        returnValue = F("Altenrondstr.");
        break;
    }
    case 8241:
    {
        returnValue = F("Altenroth");
        break;
    }
    case 8242:
    {
        returnValue = F("Altenröder Weg");
        break;
    }
    case 8243:
    {
        returnValue = F("Altenrüthener Str.");
        break;
    }
    case 8244:
    {
        returnValue = F("Altensalzer Str.");
        break;
    }
    case 8245:
    {
        returnValue = F("Altensalzkoth");
        break;
    }
    case 8246:
    {
        returnValue = F("Altensberger Weg");
        break;
    }
    case 8247:
    {
        returnValue = F("Altenschlager Weg");
        break;
    }
    case 8248:
    {
        returnValue = F("Altenschleuse");
        break;
    }
    case 8249:
    {
        returnValue = F("Altenschleusenbrücke");
        break;
    }
    case 8250:
    {
        returnValue = F("Altenschlirfer Str.");
        break;
    }
    case 8251:
    {
        returnValue = F("Altenschwand");
        break;
    }
    case 8252:
    {
        returnValue = F("Altenschwandner Str.");
        break;
    }
    case 8253:
    {
        returnValue = F("Altenschönbacher Str.");
        break;
    }
    case 8254:
    {
        returnValue = F("Altenseelbacher Weg");
        break;
    }
    case 8255:
    {
        returnValue = F("Altenseestr.");
        break;
    }
    case 8256:
    {
        returnValue = F("Altenseeweg");
        break;
    }
    case 8257:
    {
        returnValue = F("Altensenner Weg");
        break;
    }
    case 8258:
    {
        returnValue = F("Altensennerweg");
        break;
    }
    case 8259:
    {
        returnValue = F("Altensieler Str.");
        break;
    }
    case 8260:
    {
        returnValue = F("Altensien");
        break;
    }
    case 8261:
    {
        returnValue = F("Altensittenbacher Str.");
        break;
    }
    case 8262:
    {
        returnValue = F("Altensothrieth");
        break;
    }
    case 8263:
    {
        returnValue = F("Altensothriether Str.");
        break;
    }
    case 8264:
    {
        returnValue = F("Altensothriethweg");
        break;
    }
    case 8265:
    {
        returnValue = F("Altenstadt");
        break;
    }
    case 8266:
    {
        returnValue = F("Altenstadter Str.");
        break;
    }
    case 8267:
    {
        returnValue = F("Altenstadtstr.");
        break;
    }
    case 8268:
    {
        returnValue = F("Altenstaigstr.");
        break;
    }
    case 8269:
    {
        returnValue = F("Altenstattstr.");
        break;
    }
    case 8270:
    {
        returnValue = F("Altensteig");
        break;
    }
    case 8271:
    {
        returnValue = F("Altensteiger Str.");
        break;
    }
    case 8272:
    {
        returnValue = F("Altenstein");
        break;
    }
    case 8273:
    {
        returnValue = F("Altensteiner Str.");
        break;
    }
    case 8274:
    {
        returnValue = F("Altensteiner Weg");
        break;
    }
    case 8275:
    {
        returnValue = F("Altensteiner-Kreuz-Weg");
        break;
    }
    case 8276:
    {
        returnValue = F("Altensteinweg");
        break;
    }
    case 8277:
    {
        returnValue = F("Altenstr.");
        break;
    }
    case 8278:
    {
        returnValue = F("Altensturmberg");
        break;
    }
    case 8279:
    {
        returnValue = F("Altenstädter Str.");
        break;
    }
    case 8280:
    {
        returnValue = F("Altenstädter Weg");
        break;
    }
    case 8281:
    {
        returnValue = F("Altentalstr.");
        break;
    }
    case 8282:
    {
        returnValue = F("Altenteich");
        break;
    }
    case 8283:
    {
        returnValue = F("Altenteichstr.");
        break;
    }
    case 8284:
    {
        returnValue = F("Altenteiler");
        break;
    }
    case 8285:
    {
        returnValue = F("Altenthal");
        break;
    }
    case 8286:
    {
        returnValue = F("Altenthanner Str.");
        break;
    }
    case 8287:
    {
        returnValue = F("Altenthanner Weg");
        break;
    }
    case 8288:
    {
        returnValue = F("Altentrebgastplatz");
        break;
    }
    case 8289:
    {
        returnValue = F("Altentreptower Str.");
        break;
    }
    case 8290:
    {
        returnValue = F("Altentreswitz");
        break;
    }
    case 8291:
    {
        returnValue = F("Altentränke");
        break;
    }
    case 8292:
    {
        returnValue = F("Altentrüdingen");
        break;
    }
    case 8293:
    {
        returnValue = F("Altentrüdinger Str.");
        break;
    }
    case 8294:
    {
        returnValue = F("Altenvalberter Str.");
        break;
    }
    case 8295:
    {
        returnValue = F("Altenvogtshäusleweg");
        break;
    }
    case 8296:
    {
        returnValue = F("Altenwahlingen");
        break;
    }
    case 8297:
    {
        returnValue = F("Altenwalder Chaussee");
        break;
    }
    case 8298:
    {
        returnValue = F("Altenwalder Heideweg");
        break;
    }
    case 8299:
    {
        returnValue = F("Altenwalder Str.");
        break;
    }
    case 8300:
    {
        returnValue = F("Altenwaldstr.");
        break;
    }
    case 8301:
    {
        returnValue = F("Altenwedddinger Str.");
        break;
    }
    case 8302:
    {
        returnValue = F("Altenweddinger Str.");
        break;
    }
    case 8303:
    {
        returnValue = F("Altenweddinger Weg");
        break;
    }
    case 8304:
    {
        returnValue = F("Altenweg");
        break;
    }
    case 8305:
    {
        returnValue = F("Altenwehr");
        break;
    }
    case 8306:
    {
        returnValue = F("Altenweiher");
        break;
    }
    case 8307:
    {
        returnValue = F("Altenweiherstr.");
        break;
    }
    case 8308:
    {
        returnValue = F("Altenwingert");
        break;
    }
    case 8309:
    {
        returnValue = F("Altenwingertweg");
        break;
    }
    case 8310:
    {
        returnValue = F("Altenwoogstr.");
        break;
    }
    case 8311:
    {
        returnValue = F("Altenwunge");
        break;
    }
    case 8312:
    {
        returnValue = F("Altenäcker");
        break;
    }
    case 8313:
    {
        returnValue = F("Altenöd");
        break;
    }
    case 8314:
    {
        returnValue = F("Altepeldemühle");
        break;
    }
    case 8315:
    {
        returnValue = F("Alter Achterkamp");
        break;
    }
    case 8316:
    {
        returnValue = F("Alter Ackerweg");
        break;
    }
    case 8317:
    {
        returnValue = F("Alter Alsfelder Weg");
        break;
    }
    case 8318:
    {
        returnValue = F("Alter Altarklippenweg");
        break;
    }
    case 8319:
    {
        returnValue = F("Alter Altenaer Weg");
        break;
    }
    case 8320:
    {
        returnValue = F("Alter Amtshof");
        break;
    }
    case 8321:
    {
        returnValue = F("Alter Amtsweg");
        break;
    }
    case 8322:
    {
        returnValue = F("Alter Andernacher Weg");
        break;
    }
    case 8323:
    {
        returnValue = F("Alter Angel");
        break;
    }
    case 8324:
    {
        returnValue = F("Alter Anger");
        break;
    }
    case 8325:
    {
        returnValue = F("Alter Anhalt");
        break;
    }
    case 8326:
    {
        returnValue = F("Alter Ansbacher Berg");
        break;
    }
    case 8327:
    {
        returnValue = F("Alter Anspacher Weg");
        break;
    }
    case 8328:
    {
        returnValue = F("Alter Apeler Weg");
        break;
    }
    case 8329:
    {
        returnValue = F("Alter Arnsberger Weg");
        break;
    }
    case 8330:
    {
        returnValue = F("Alter Aschenhüttenweg");
        break;
    }
    case 8331:
    {
        returnValue = F("Alter Aspel");
        break;
    }
    case 8332:
    {
        returnValue = F("Alter Assamstadter Weg");
        break;
    }
    case 8333:
    {
        returnValue = F("Alter Auchtert");
        break;
    }
    case 8334:
    {
        returnValue = F("Alter Auerbacher Weg");
        break;
    }
    case 8335:
    {
        returnValue = F("Alter Auheimer Weg");
        break;
    }
    case 8336:
    {
        returnValue = F("Alter Auweg");
        break;
    }
    case 8337:
    {
        returnValue = F("Alter Bach");
        break;
    }
    case 8338:
    {
        returnValue = F("Alter Bachweg");
        break;
    }
    case 8339:
    {
        returnValue = F("Alter Backofen");
        break;
    }
    case 8340:
    {
        returnValue = F("Alter Bad Stebener Weg");
        break;
    }
    case 8341:
    {
        returnValue = F("Alter Badeweg");
        break;
    }
    case 8342:
    {
        returnValue = F("Alter Badwaldweg");
        break;
    }
    case 8343:
    {
        returnValue = F("Alter Badweg");
        break;
    }
    case 8344:
    {
        returnValue = F("Alter Bahndamm");
        break;
    }
    case 8345:
    {
        returnValue = F("Alter Bahndamm (M3)");
        break;
    }
    case 8346:
    {
        returnValue = F("Alter Bahndamm Buchenhain");
        break;
    }
    case 8347:
    {
        returnValue = F("Alter Bahndamm Hardenbeck");
        break;
    }
    case 8348:
    {
        returnValue = F("Alter Bahndamm Torffabrik");
        break;
    }
    case 8349:
    {
        returnValue = F("Alter Bahnhof");
        break;
    }
    case 8350:
    {
        returnValue = F("Alter Bahnhof Blitzenrod");
        break;
    }
    case 8351:
    {
        returnValue = F("Alter Bahnhof von Hardt");
        break;
    }
    case 8352:
    {
        returnValue = F("Alter Bahnhofplatz");
        break;
    }
    case 8353:
    {
        returnValue = F("Alter Bahnhofsweg");
        break;
    }
    case 8354:
    {
        returnValue = F("Alter Bahnhofweg");
        break;
    }
    case 8355:
    {
        returnValue = F("Alter Bahnweg");
        break;
    }
    case 8356:
    {
        returnValue = F("Alter Baitzer Weg");
        break;
    }
    case 8357:
    {
        returnValue = F("Alter Bammentaler Weg");
        break;
    }
    case 8358:
    {
        returnValue = F("Alter Bannweg");
        break;
    }
    case 8359:
    {
        returnValue = F("Alter Banter Weg");
        break;
    }
    case 8360:
    {
        returnValue = F("Alter Barker Weg");
        break;
    }
    case 8361:
    {
        returnValue = F("Alter Basteiweg");
        break;
    }
    case 8362:
    {
        returnValue = F("Alter Bauernweg");
        break;
    }
    case 8363:
    {
        returnValue = F("Alter Bauhof");
        break;
    }
    case 8364:
    {
        returnValue = F("Alter Baumschulenweg");
        break;
    }
    case 8365:
    {
        returnValue = F("Alter Beetzendorfer Park");
        break;
    }
    case 8366:
    {
        returnValue = F("Alter Beller Weg");
        break;
    }
    case 8367:
    {
        returnValue = F("Alter Bentheimer Weg");
        break;
    }
    case 8368:
    {
        returnValue = F("Alter Berg");
        break;
    }
    case 8369:
    {
        returnValue = F("Alter Berg Weg");
        break;
    }
    case 8370:
    {
        returnValue = F("Alter Berger Pfad");
        break;
    }
    case 8371:
    {
        returnValue = F("Alter Berger Weg");
        break;
    }
    case 8372:
    {
        returnValue = F("Alter Bergkamp");
        break;
    }
    case 8373:
    {
        returnValue = F("Alter Bergweg");
        break;
    }
    case 8374:
    {
        returnValue = F("Alter Bernauer Heerweg");
        break;
    }
    case 8375:
    {
        returnValue = F("Alter Bernsteinweg");
        break;
    }
    case 8376:
    {
        returnValue = F("Alter Biehlaer Heideweg");
        break;
    }
    case 8377:
    {
        returnValue = F("Alter Bierweg");
        break;
    }
    case 8378:
    {
        returnValue = F("Alter Biesdorfer Weg");
        break;
    }
    case 8379:
    {
        returnValue = F("Alter Birkenweg");
        break;
    }
    case 8380:
    {
        returnValue = F("Alter Blasiwalder Weg");
        break;
    }
    case 8381:
    {
        returnValue = F("Alter Blasiwaldweg");
        break;
    }
    case 8382:
    {
        returnValue = F("Alter Blasiwälder Weg");
        break;
    }
    case 8383:
    {
        returnValue = F("Alter Blieskasteler Weg");
        break;
    }
    case 8384:
    {
        returnValue = F("Alter Blobach");
        break;
    }
    case 8385:
    {
        returnValue = F("Alter Blöcken");
        break;
    }
    case 8386:
    {
        returnValue = F("Alter Bockwitzer Weg");
        break;
    }
    case 8387:
    {
        returnValue = F("Alter Bofsheimer Weg");
        break;
    }
    case 8388:
    {
        returnValue = F("Alter Bogen");
        break;
    }
    case 8389:
    {
        returnValue = F("Alter Bohlweg");
        break;
    }
    case 8390:
    {
        returnValue = F("Alter Bohrturm");
        break;
    }
    case 8391:
    {
        returnValue = F("Alter Boisterfelder Weg");
        break;
    }
    case 8392:
    {
        returnValue = F("Alter Born");
        break;
    }
    case 8393:
    {
        returnValue = F("Alter Bornberg");
        break;
    }
    case 8394:
    {
        returnValue = F("Alter Borsteler Weg");
        break;
    }
    case 8395:
    {
        returnValue = F("Alter Borweg");
        break;
    }
    case 8396:
    {
        returnValue = F("Alter Botanischer Garten");
        break;
    }
    case 8397:
    {
        returnValue = F("Alter Bottenbergweg");
        break;
    }
    case 8398:
    {
        returnValue = F("Alter Braaker Mühlenweg");
        break;
    }
    case 8399:
    {
        returnValue = F("Alter Braaker Weg");
        break;
    }
    case 8400:
    {
        returnValue = F("Alter Brackenheimer Weg");
        break;
    }
    case 8401:
    {
        returnValue = F("Alter Brand");
        break;
    }
    case 8402:
    {
        returnValue = F("Alter Brandenburger Weg");
        break;
    }
    case 8403:
    {
        returnValue = F("Alter Brandholzweg");
        break;
    }
    case 8404:
    {
        returnValue = F("Alter Brandplattenweg");
        break;
    }
    case 8405:
    {
        returnValue = F("Alter Brauerweg");
        break;
    }
    case 8406:
    {
        returnValue = F("Alter Brauweg");
        break;
    }
    case 8407:
    {
        returnValue = F("Alter Bredenborner Weg");
        break;
    }
    case 8408:
    {
        returnValue = F("Alter Breiter Weg");
        break;
    }
    case 8409:
    {
        returnValue = F("Alter Bremer Weg");
        break;
    }
    case 8410:
    {
        returnValue = F("Alter Brendweg");
        break;
    }
    case 8411:
    {
        returnValue = F("Alter Brettener Weg");
        break;
    }
    case 8412:
    {
        returnValue = F("Alter Breuberger Weg");
        break;
    }
    case 8413:
    {
        returnValue = F("Alter Brink");
        break;
    }
    case 8414:
    {
        returnValue = F("Alter Brombacher Weg");
        break;
    }
    case 8415:
    {
        returnValue = F("Alter Bronnhaupter Weg");
        break;
    }
    case 8416:
    {
        returnValue = F("Alter Bruch");
        break;
    }
    case 8417:
    {
        returnValue = F("Alter Bruchtorfer Weg");
        break;
    }
    case 8418:
    {
        returnValue = F("Alter Bruchweg");
        break;
    }
    case 8419:
    {
        returnValue = F("Alter Bruderweg");
        break;
    }
    case 8420:
    {
        returnValue = F("Alter Brunnenberg");
        break;
    }
    case 8421:
    {
        returnValue = F("Alter Brunnenweg");
        break;
    }
    case 8422:
    {
        returnValue = F("Alter Brunsel");
        break;
    }
    case 8423:
    {
        returnValue = F("Alter Brückenweg");
        break;
    }
    case 8424:
    {
        returnValue = F("Alter Brückleweg");
        break;
    }
    case 8425:
    {
        returnValue = F("Alter Brückweg");
        break;
    }
    case 8426:
    {
        returnValue = F("Alter Buchenweg");
        break;
    }
    case 8427:
    {
        returnValue = F("Alter Buchwaldweg");
        break;
    }
    case 8428:
    {
        returnValue = F("Alter Buger Weg");
        break;
    }
    case 8429:
    {
        returnValue = F("Alter Buger Weg (A/A2/A3)");
        break;
    }
    case 8430:
    {
        returnValue = F("Alter Buntwolf");
        break;
    }
    case 8431:
    {
        returnValue = F("Alter Burenweg");
        break;
    }
    case 8432:
    {
        returnValue = F("Alter Burgstädtler Weg");
        break;
    }
    case 8433:
    {
        returnValue = F("Alter Burgwall");
        break;
    }
    case 8434:
    {
        returnValue = F("Alter Burgweg");
        break;
    }
    case 8435:
    {
        returnValue = F("Alter Bäckereiweg");
        break;
    }
    case 8436:
    {
        returnValue = F("Alter Bäumelweg");
        break;
    }
    case 8437:
    {
        returnValue = F("Alter Böstlinger Weg");
        break;
    }
    case 8438:
    {
        returnValue = F("Alter Bühlweg");
        break;
    }
    case 8439:
    {
        returnValue = F("Alter Bürgelerweg");
        break;
    }
    case 8440:
    {
        returnValue = F("Alter Bürglerweg");
        break;
    }
    case 8441:
    {
        returnValue = F("Alter Celler Weg");
        break;
    }
    case 8442:
    {
        returnValue = F("Alter Coburger Weg");
        break;
    }
    case 8443:
    {
        returnValue = F("Alter Colmnitzer Weg");
        break;
    }
    case 8444:
    {
        returnValue = F("Alter Cottbuser Weg");
        break;
    }
    case 8445:
    {
        returnValue = F("Alter Cramersweg");
        break;
    }
    case 8446:
    {
        returnValue = F("Alter Dachsweg");
        break;
    }
    case 8447:
    {
        returnValue = F("Alter Dahlenburger Weg");
        break;
    }
    case 8448:
    {
        returnValue = F("Alter Dahser Weg");
        break;
    }
    case 8449:
    {
        returnValue = F("Alter Damenpfad");
        break;
    }
    case 8450:
    {
        returnValue = F("Alter Damm");
        break;
    }
    case 8451:
    {
        returnValue = F("Alter Dammersfeldweg");
        break;
    }
    case 8452:
    {
        returnValue = F("Alter Dankoltsweiler Weg");
        break;
    }
    case 8453:
    {
        returnValue = F("Alter Dargower Weg");
        break;
    }
    case 8454:
    {
        returnValue = F("Alter Darmstädter Weg");
        break;
    }
    case 8455:
    {
        returnValue = F("Alter Deich");
        break;
    }
    case 8456:
    {
        returnValue = F("Alter Deichsweg");
        break;
    }
    case 8457:
    {
        returnValue = F("Alter Deichweg");
        break;
    }
    case 8458:
    {
        returnValue = F("Alter Deutscher Ring");
        break;
    }
    case 8459:
    {
        returnValue = F("Alter Diebsweg");
        break;
    }
    case 8460:
    {
        returnValue = F("Alter Dieburger Weg");
        break;
    }
    case 8461:
    {
        returnValue = F("Alter Diedorfer Stieg");
        break;
    }
    case 8462:
    {
        returnValue = F("Alter Diek");
        break;
    }
    case 8463:
    {
        returnValue = F("Alter Dietfurtweg");
        break;
    }
    case 8464:
    {
        returnValue = F("Alter Dillweg");
        break;
    }
    case 8465:
    {
        returnValue = F("Alter Donsbrügger Weg");
        break;
    }
    case 8466:
    {
        returnValue = F("Alter Dorfgrabenweg");
        break;
    }
    case 8467:
    {
        returnValue = F("Alter Dorfplatz");
        break;
    }
    case 8468:
    {
        returnValue = F("Alter Dorfrand");
        break;
    }
    case 8469:
    {
        returnValue = F("Alter Dorfring");
        break;
    }
    case 8470:
    {
        returnValue = F("Alter Dorfteich");
        break;
    }
    case 8471:
    {
        returnValue = F("Alter Dorfweg");
        break;
    }
    case 8472:
    {
        returnValue = F("Alter Dornrainweg");
        break;
    }
    case 8473:
    {
        returnValue = F("Alter Dortmunder Weg");
        break;
    }
    case 8474:
    {
        returnValue = F("Alter Drebkauer Weg");
        break;
    }
    case 8475:
    {
        returnValue = F("Alter Drechslerweg");
        break;
    }
    case 8476:
    {
        returnValue = F("Alter Dreschplatz");
        break;
    }
    case 8477:
    {
        returnValue = F("Alter Dresdner Weg");
        break;
    }
    case 8478:
    {
        returnValue = F("Alter Dubbenweg");
        break;
    }
    case 8479:
    {
        returnValue = F("Alter Duhner Weg");
        break;
    }
    case 8480:
    {
        returnValue = F("Alter Durlacher Weg");
        break;
    }
    case 8481:
    {
        returnValue = F("Alter Dyck");
        break;
    }
    case 8482:
    {
        returnValue = F("Alter Dyk");
        break;
    }
    case 8483:
    {
        returnValue = F("Alter Dömitzer Weg");
        break;
    }
    case 8484:
    {
        returnValue = F("Alter Dörper Weg");
        break;
    }
    case 8485:
    {
        returnValue = F("Alter Dübteweg");
        break;
    }
    case 8486:
    {
        returnValue = F("Alter Dülmener Landweg");
        break;
    }
    case 8487:
    {
        returnValue = F("Alter Dürener Weg");
        break;
    }
    case 8488:
    {
        returnValue = F("Alter Dürkheimer Weg");
        break;
    }
    case 8489:
    {
        returnValue = F("Alter Dürrebergweg");
        break;
    }
    case 8490:
    {
        returnValue = F("Alter Ebenhäuser Weg");
        break;
    }
    case 8491:
    {
        returnValue = F("Alter Eberbacher Weg");
        break;
    }
    case 8492:
    {
        returnValue = F("Alter Ebmather Weg");
        break;
    }
    case 8493:
    {
        returnValue = F("Alter Ebsdorfer Weg");
        break;
    }
    case 8494:
    {
        returnValue = F("Alter Eckgrabenweg");
        break;
    }
    case 8495:
    {
        returnValue = F("Alter Eheweg");
        break;
    }
    case 8496:
    {
        returnValue = F("Alter Ehraer Weg");
        break;
    }
    case 8497:
    {
        returnValue = F("Alter Eichwald");
        break;
    }
    case 8498:
    {
        returnValue = F("Alter Eisenbahndamm");
        break;
    }
    case 8499:
    {
        returnValue = F("Alter Eistreff");
        break;
    }
    case 8500:
    {
        returnValue = F("Alter Eisweg");
        break;
    }
    case 8501:
    {
        returnValue = F("Alter Elbdeich");
        break;
    }
    case 8502:
    {
        returnValue = F("Alter Eldearm");
        break;
    }
    case 8503:
    {
        returnValue = F("Alter Elfser Weg");
        break;
    }
    case 8504:
    {
        returnValue = F("Alter Ellerbeker Weg");
        break;
    }
    case 8505:
    {
        returnValue = F("Alter Elsterweg");
        break;
    }
    case 8506:
    {
        returnValue = F("Alter Emsteker Weg");
        break;
    }
    case 8507:
    {
        returnValue = F("Alter Eppinger Weg");
        break;
    }
    case 8508:
    {
        returnValue = F("Alter Erbes-Büdesheimer Weg");
        break;
    }
    case 8509:
    {
        returnValue = F("Alter Ermslebener Weg");
        break;
    }
    case 8510:
    {
        returnValue = F("Alter Erzengelweg");
        break;
    }
    case 8511:
    {
        returnValue = F("Alter Esch");
        break;
    }
    case 8512:
    {
        returnValue = F("Alter Eschelbacher Weg");
        break;
    }
    case 8513:
    {
        returnValue = F("Alter Eschenweg");
        break;
    }
    case 8514:
    {
        returnValue = F("Alter Ettlenschießer Weg");
        break;
    }
    case 8515:
    {
        returnValue = F("Alter Fabrikweg");
        break;
    }
    case 8516:
    {
        returnValue = F("Alter Fahrweg");
        break;
    }
    case 8517:
    {
        returnValue = F("Alter Faulenhoop");
        break;
    }
    case 8518:
    {
        returnValue = F("Alter Feldweg");
        break;
    }
    case 8519:
    {
        returnValue = F("Alter Felsenkeller");
        break;
    }
    case 8520:
    {
        returnValue = F("Alter Festhallenplatz");
        break;
    }
    case 8521:
    {
        returnValue = F("Alter Festplatz");
        break;
    }
    case 8522:
    {
        returnValue = F("Alter Festplatz / Park");
        break;
    }
    case 8523:
    {
        returnValue = F("Alter Feuerwehrplatz");
        break;
    }
    case 8524:
    {
        returnValue = F("Alter Finkenbacher Weg");
        break;
    }
    case 8525:
    {
        returnValue = F("Alter Finkenkrug");
        break;
    }
    case 8526:
    {
        returnValue = F("Alter Fischbacher Weg");
        break;
    }
    case 8527:
    {
        returnValue = F("Alter Fischerspfad");
        break;
    }
    case 8528:
    {
        returnValue = F("Alter Fischerweg");
        break;
    }
    case 8529:
    {
        returnValue = F("Alter Flachter Weg");
        break;
    }
    case 8530:
    {
        returnValue = F("Alter Fladder");
        break;
    }
    case 8531:
    {
        returnValue = F("Alter Fliederberg");
        break;
    }
    case 8532:
    {
        returnValue = F("Alter Flugplatz");
        break;
    }
    case 8533:
    {
        returnValue = F("Alter Flurweg");
        break;
    }
    case 8534:
    {
        returnValue = F("Alter Flößerweg");
        break;
    }
    case 8535:
    {
        returnValue = F("Alter Flügelweg");
        break;
    }
    case 8536:
    {
        returnValue = F("Alter Forlenstiegweg");
        break;
    }
    case 8537:
    {
        returnValue = F("Alter Forsthof");
        break;
    }
    case 8538:
    {
        returnValue = F("Alter Forstweg");
        break;
    }
    case 8539:
    {
        returnValue = F("Alter Frachtweg");
        break;
    }
    case 8540:
    {
        returnValue = F("Alter Frankenberger Weg");
        break;
    }
    case 8541:
    {
        returnValue = F("Alter Frankenthaler Weg");
        break;
    }
    case 8542:
    {
        returnValue = F("Alter Frankfurter Weg");
        break;
    }
    case 8543:
    {
        returnValue = F("Alter Franziskanerplatz");
        break;
    }
    case 8544:
    {
        returnValue = F("Alter Franzosenweg");
        break;
    }
    case 8545:
    {
        returnValue = F("Alter Freizeit- und Grillpark");
        break;
    }
    case 8546:
    {
        returnValue = F("Alter Frickenhäuser Weg");
        break;
    }
    case 8547:
    {
        returnValue = F("Alter Friedhof");
        break;
    }
    case 8548:
    {
        returnValue = F("Alter Friedhof (Knochenpark)");
        break;
    }
    case 8549:
    {
        returnValue = F("Alter Friedhof 1538");
        break;
    }
    case 8550:
    {
        returnValue = F("Alter Friedhof Aachen-Brand");
        break;
    }
    case 8551:
    {
        returnValue = F("Alter Friedhof Adelshofen");
        break;
    }
    case 8552:
    {
        returnValue = F("Alter Friedhof Alt-Saarbrücken");
        break;
    }
    case 8553:
    {
        returnValue = F("Alter Friedhof Burgholzhausen");
        break;
    }
    case 8554:
    {
        returnValue = F("Alter Friedhof Dichtelbach");
        break;
    }
    case 8555:
    {
        returnValue = F("Alter Friedhof Großauheim");
        break;
    }
    case 8556:
    {
        returnValue = F("Alter Friedhof Kellen");
        break;
    }
    case 8557:
    {
        returnValue = F("Alter Friedhof Nordhausen");
        break;
    }
    case 8558:
    {
        returnValue = F("Alter Friedhof Rodheim");
        break;
    }
    case 8559:
    {
        returnValue = F("Alter Friedhof Schlangen");
        break;
    }
    case 8560:
    {
        returnValue = F("Alter Friedhof Unteraichen");
        break;
    }
    case 8561:
    {
        returnValue = F("Alter Friedhof von Osterweddingen");
        break;
    }
    case 8562:
    {
        returnValue = F("Alter Friedhofsweg");
        break;
    }
    case 8563:
    {
        returnValue = F("Alter Friedhofweg");
        break;
    }
    case 8564:
    {
        returnValue = F("Alter Friedrich");
        break;
    }
    case 8565:
    {
        returnValue = F("Alter Fritz Weg");
        break;
    }
    case 8566:
    {
        returnValue = F("Alter Fuhrweg");
        break;
    }
    case 8567:
    {
        returnValue = F("Alter Fußweg Poppenhausen-Käßlitz");
        break;
    }
    case 8568:
    {
        returnValue = F("Alter Fußweg nach Käßlitz");
        break;
    }
    case 8569:
    {
        returnValue = F("Alter Fährberg");
        break;
    }
    case 8570:
    {
        returnValue = F("Alter Fährweg");
        break;
    }
    case 8571:
    {
        returnValue = F("Alter Fällbachweg");
        break;
    }
    case 8572:
    {
        returnValue = F("Alter Fünfbrunnenweg");
        break;
    }
    case 8573:
    {
        returnValue = F("Alter Fürstenweg");
        break;
    }
    case 8574:
    {
        returnValue = F("Alter Gaben");
        break;
    }
    case 8575:
    {
        returnValue = F("Alter Galgen");
        break;
    }
    case 8576:
    {
        returnValue = F("Alter Gang");
        break;
    }
    case 8577:
    {
        returnValue = F("Alter Garten");
        break;
    }
    case 8578:
    {
        returnValue = F("Alter Gartenweg");
        break;
    }
    case 8579:
    {
        returnValue = F("Alter Gassenweg");
        break;
    }
    case 8580:
    {
        returnValue = F("Alter Gebstedter Weg");
        break;
    }
    case 8581:
    {
        returnValue = F("Alter Gedelitzer Weg");
        break;
    }
    case 8582:
    {
        returnValue = F("Alter Gelbensander Weg");
        break;
    }
    case 8583:
    {
        returnValue = F("Alter Gelnhauser Weg");
        break;
    }
    case 8584:
    {
        returnValue = F("Alter Gemeindeplatz");
        break;
    }
    case 8585:
    {
        returnValue = F("Alter Gemeindeweg");
        break;
    }
    case 8586:
    {
        returnValue = F("Alter Gespetweg");
        break;
    }
    case 8587:
    {
        returnValue = F("Alter Gleisweg");
        break;
    }
    case 8588:
    {
        returnValue = F("Alter Glockenweg");
        break;
    }
    case 8589:
    {
        returnValue = F("Alter Gomaringer Weg");
        break;
    }
    case 8590:
    {
        returnValue = F("Alter Gothaer Weg");
        break;
    }
    case 8591:
    {
        returnValue = F("Alter Gottesacker");
        break;
    }
    case 8592:
    {
        returnValue = F("Alter Graacher Weg");
        break;
    }
    case 8593:
    {
        returnValue = F("Alter Graben");
        break;
    }
    case 8594:
    {
        returnValue = F("Alter Gravenbrucher Weg");
        break;
    }
    case 8595:
    {
        returnValue = F("Alter Grenzflügel");
        break;
    }
    case 8596:
    {
        returnValue = F("Alter Grenzweg");
        break;
    }
    case 8597:
    {
        returnValue = F("Alter Griesheimer Weg");
        break;
    }
    case 8598:
    {
        returnValue = F("Alter Grottenweg");
        break;
    }
    case 8599:
    {
        returnValue = F("Alter Groweg");
        break;
    }
    case 8600:
    {
        returnValue = F("Alter Großkopfweg");
        break;
    }
    case 8601:
    {
        returnValue = F("Alter Grüner Weg");
        break;
    }
    case 8602:
    {
        returnValue = F("Alter Grünhüttenweg");
        break;
    }
    case 8603:
    {
        returnValue = F("Alter Grüntaler Weg");
        break;
    }
    case 8604:
    {
        returnValue = F("Alter Gubener Weg");
        break;
    }
    case 8605:
    {
        returnValue = F("Alter Gutshof");
        break;
    }
    case 8606:
    {
        returnValue = F("Alter Gutspark");
        break;
    }
    case 8607:
    {
        returnValue = F("Alter Gutsweg");
        break;
    }
    case 8608:
    {
        returnValue = F("Alter Göbricher Weg");
        break;
    }
    case 8609:
    {
        returnValue = F("Alter Gönnersdorfer Weg");
        break;
    }
    case 8610:
    {
        returnValue = F("Alter Götenhof");
        break;
    }
    case 8611:
    {
        returnValue = F("Alter Hafen");
        break;
    }
    case 8612:
    {
        returnValue = F("Alter Hafen Donaupromenade");
        break;
    }
    case 8613:
    {
        returnValue = F("Alter Hafen Nord");
        break;
    }
    case 8614:
    {
        returnValue = F("Alter Hafen Süd");
        break;
    }
    case 8615:
    {
        returnValue = F("Alter Hag");
        break;
    }
    case 8616:
    {
        returnValue = F("Alter Hagen");
        break;
    }
    case 8617:
    {
        returnValue = F("Alter Hahnweg");
        break;
    }
    case 8618:
    {
        returnValue = F("Alter Hain");
        break;
    }
    case 8619:
    {
        returnValue = F("Alter Haingraben");
        break;
    }
    case 8620:
    {
        returnValue = F("Alter Hainweg");
        break;
    }
    case 8621:
    {
        returnValue = F("Alter Haller");
        break;
    }
    case 8622:
    {
        returnValue = F("Alter Hammelberg");
        break;
    }
    case 8623:
    {
        returnValue = F("Alter Hammerweg");
        break;
    }
    case 8624:
    {
        returnValue = F("Alter Hammweg");
        break;
    }
    case 8625:
    {
        returnValue = F("Alter Handelsweg");
        break;
    }
    case 8626:
    {
        returnValue = F("Alter Handlaber Kirchenweg");
        break;
    }
    case 8627:
    {
        returnValue = F("Alter Hangarten");
        break;
    }
    case 8628:
    {
        returnValue = F("Alter Harpolinger Weg");
        break;
    }
    case 8629:
    {
        returnValue = F("Alter Harrenstädter Weg");
        break;
    }
    case 8630:
    {
        returnValue = F("Alter Harreshäuser Weg");
        break;
    }
    case 8631:
    {
        returnValue = F("Alter Harzbecker Weg");
        break;
    }
    case 8632:
    {
        returnValue = F("Alter Harzweg");
        break;
    }
    case 8633:
    {
        returnValue = F("Alter Haslacher Weg");
        break;
    }
    case 8634:
    {
        returnValue = F("Alter Hasselbacher Weg");
        break;
    }
    case 8635:
    {
        returnValue = F("Alter Hau");
        break;
    }
    case 8636:
    {
        returnValue = F("Alter Hau Weg");
        break;
    }
    case 8637:
    {
        returnValue = F("Alter Hauptweg");
        break;
    }
    case 8638:
    {
        returnValue = F("Alter Hausweg");
        break;
    }
    case 8639:
    {
        returnValue = F("Alter Hauweg");
        break;
    }
    case 8640:
    {
        returnValue = F("Alter Heeresweg");
        break;
    }
    case 8641:
    {
        returnValue = F("Alter Heerler Weg");
        break;
    }
    case 8642:
    {
        returnValue = F("Alter Heerweg");
        break;
    }
    case 8643:
    {
        returnValue = F("Alter Heidberg");
        break;
    }
    case 8644:
    {
        returnValue = F("Alter Heidelberger Weg");
        break;
    }
    case 8645:
    {
        returnValue = F("Alter Heidenlochweg");
        break;
    }
    case 8646:
    {
        returnValue = F("Alter Heideweg");
        break;
    }
    case 8647:
    {
        returnValue = F("Alter Heinersdorfer Weg");
        break;
    }
    case 8648:
    {
        returnValue = F("Alter Heisbergweg");
        break;
    }
    case 8649:
    {
        returnValue = F("Alter Hellmühler Weg");
        break;
    }
    case 8650:
    {
        returnValue = F("Alter Hellweg");
        break;
    }
    case 8651:
    {
        returnValue = F("Alter Helmerscher Weg");
        break;
    }
    case 8652:
    {
        returnValue = F("Alter Herbramer Weg");
        break;
    }
    case 8653:
    {
        returnValue = F("Alter Herrnsheimer Weg");
        break;
    }
    case 8654:
    {
        returnValue = F("Alter Hervester Weg");
        break;
    }
    case 8655:
    {
        returnValue = F("Alter Hesterkamp");
        break;
    }
    case 8656:
    {
        returnValue = F("Alter Hettstadter Weg");
        break;
    }
    case 8657:
    {
        returnValue = F("Alter Heubrink");
        break;
    }
    case 8658:
    {
        returnValue = F("Alter Heuchlinger Weg");
        break;
    }
    case 8659:
    {
        returnValue = F("Alter Heufelderweg");
        break;
    }
    case 8660:
    {
        returnValue = F("Alter Heufeldweg");
        break;
    }
    case 8661:
    {
        returnValue = F("Alter Heusenstammer Weg");
        break;
    }
    case 8662:
    {
        returnValue = F("Alter Heuweg");
        break;
    }
    case 8663:
    {
        returnValue = F("Alter Hilsbacher Weg");
        break;
    }
    case 8664:
    {
        returnValue = F("Alter Hinsbecker Weg");
        break;
    }
    case 8665:
    {
        returnValue = F("Alter Hirschhorner Weg");
        break;
    }
    case 8666:
    {
        returnValue = F("Alter Hirtenweg");
        break;
    }
    case 8667:
    {
        returnValue = F("Alter Hochweg");
        break;
    }
    case 8668:
    {
        returnValue = F("Alter Hof");
        break;
    }
    case 8669:
    {
        returnValue = F("Alter Hofweg");
        break;
    }
    case 8670:
    {
        returnValue = F("Alter Hohlweg");
        break;
    }
    case 8671:
    {
        returnValue = F("Alter Holderweg");
        break;
    }
    case 8672:
    {
        returnValue = F("Alter Holmberg");
        break;
    }
    case 8673:
    {
        returnValue = F("Alter Holzbrücker Weg");
        break;
    }
    case 8674:
    {
        returnValue = F("Alter Holzhafen");
        break;
    }
    case 8675:
    {
        returnValue = F("Alter Holzhauser Kirchweg");
        break;
    }
    case 8676:
    {
        returnValue = F("Alter Holzhof");
        break;
    }
    case 8677:
    {
        returnValue = F("Alter Holzplatz");
        break;
    }
    case 8678:
    {
        returnValue = F("Alter Holzweg");
        break;
    }
    case 8679:
    {
        returnValue = F("Alter Hoop");
        break;
    }
    case 8680:
    {
        returnValue = F("Alter Hornscher Weg");
        break;
    }
    case 8681:
    {
        returnValue = F("Alter Horst");
        break;
    }
    case 8682:
    {
        returnValue = F("Alter Huf");
        break;
    }
    case 8683:
    {
        returnValue = F("Alter Hufenweg");
        break;
    }
    case 8684:
    {
        returnValue = F("Alter Hundemweg");
        break;
    }
    case 8685:
    {
        returnValue = F("Alter Husumer Weg");
        break;
    }
    case 8686:
    {
        returnValue = F("Alter Hämmerer Weg");
        break;
    }
    case 8687:
    {
        returnValue = F("Alter Höchster Weg");
        break;
    }
    case 8688:
    {
        returnValue = F("Alter Höfleweg");
        break;
    }
    case 8689:
    {
        returnValue = F("Alter Höhweg");
        break;
    }
    case 8690:
    {
        returnValue = F("Alter Höllengrundweg");
        break;
    }
    case 8691:
    {
        returnValue = F("Alter Höllweg");
        break;
    }
    case 8692:
    {
        returnValue = F("Alter Hörnelweg");
        break;
    }
    case 8693:
    {
        returnValue = F("Alter Hörnlebergweg");
        break;
    }
    case 8694:
    {
        returnValue = F("Alter Hünhügel");
        break;
    }
    case 8695:
    {
        returnValue = F("Alter I-Weg");
        break;
    }
    case 8696:
    {
        returnValue = F("Alter Ihner Weg");
        break;
    }
    case 8697:
    {
        returnValue = F("Alter Immerseibener Weg");
        break;
    }
    case 8698:
    {
        returnValue = F("Alter Innweg");
        break;
    }
    case 8699:
    {
        returnValue = F("Alter Iptinger Weg");
        break;
    }
    case 8700:
    {
        returnValue = F("Alter Jagdhüttenweg");
        break;
    }
    case 8701:
    {
        returnValue = F("Alter Jagdweg");
        break;
    }
    case 8702:
    {
        returnValue = F("Alter Jamnoer Weg");
        break;
    }
    case 8703:
    {
        returnValue = F("Alter Johanngeorgenstädter Weg");
        break;
    }
    case 8704:
    {
        returnValue = F("Alter Josefsgraben");
        break;
    }
    case 8705:
    {
        returnValue = F("Alter Jägerhäuser Weg");
        break;
    }
    case 8706:
    {
        returnValue = F("Alter Jägerweg");
        break;
    }
    case 8707:
    {
        returnValue = F("Alter Jüdischer Friedhof Dülken");
        break;
    }
    case 8708:
    {
        returnValue = F("Alter Kahler Weg");
        break;
    }
    case 8709:
    {
        returnValue = F("Alter Kahrweg");
        break;
    }
    case 8710:
    {
        returnValue = F("Alter Kaiweg");
        break;
    }
    case 8711:
    {
        returnValue = F("Alter Kaltenkirchener Weg");
        break;
    }
    case 8712:
    {
        returnValue = F("Alter Kammweg");
        break;
    }
    case 8713:
    {
        returnValue = F("Alter Kamp");
        break;
    }
    case 8714:
    {
        returnValue = F("Alter Kamp Weg");
        break;
    }
    case 8715:
    {
        returnValue = F("Alter Kampweg");
        break;
    }
    case 8716:
    {
        returnValue = F("Alter Kanal");
        break;
    }
    case 8717:
    {
        returnValue = F("Alter Kandelweg");
        break;
    }
    case 8718:
    {
        returnValue = F("Alter Kapellenweg");
        break;
    }
    case 8719:
    {
        returnValue = F("Alter Karcherweg");
        break;
    }
    case 8720:
    {
        returnValue = F("Alter Kastanienweg");
        break;
    }
    case 8721:
    {
        returnValue = F("Alter Katzbachweg");
        break;
    }
    case 8722:
    {
        returnValue = F("Alter Kehlenweg");
        break;
    }
    case 8723:
    {
        returnValue = F("Alter Keller");
        break;
    }
    case 8724:
    {
        returnValue = F("Alter Kellerskopfweg");
        break;
    }
    case 8725:
    {
        returnValue = F("Alter Kesselberg");
        break;
    }
    case 8726:
    {
        returnValue = F("Alter Kesselstädter Weg");
        break;
    }
    case 8727:
    {
        returnValue = F("Alter Kiefernweg");
        break;
    }
    case 8728:
    {
        returnValue = F("Alter Kieler Weg");
        break;
    }
    case 8729:
    {
        returnValue = F("Alter Kiesberg");
        break;
    }
    case 8730:
    {
        returnValue = F("Alter Kiesturm");
        break;
    }
    case 8731:
    {
        returnValue = F("Alter Kiesweg");
        break;
    }
    case 8732:
    {
        returnValue = F("Alter Kietz");
        break;
    }
    case 8733:
    {
        returnValue = F("Alter Kindergarten");
        break;
    }
    case 8734:
    {
        returnValue = F("Alter Kindergartenweg");
        break;
    }
    case 8735:
    {
        returnValue = F("Alter Kirchenpfad");
        break;
    }
    case 8736:
    {
        returnValue = F("Alter Kirchensteig");
        break;
    }
    case 8737:
    {
        returnValue = F("Alter Kirchenstieg");
        break;
    }
    case 8738:
    {
        returnValue = F("Alter Kirchenweg");
        break;
    }
    case 8739:
    {
        returnValue = F("Alter Kirchenweg 1540-1737 (Schleid-Gerstengrund)");
        break;
    }
    case 8740:
    {
        returnValue = F("Alter Kirchenweg/ Guck- und Putschelweg");
        break;
    }
    case 8741:
    {
        returnValue = F("Alter Kirchhainer Weg");
        break;
    }
    case 8742:
    {
        returnValue = F("Alter Kirchhof");
        break;
    }
    case 8743:
    {
        returnValue = F("Alter Kirchpad");
        break;
    }
    case 8744:
    {
        returnValue = F("Alter Kirchpfad");
        break;
    }
    case 8745:
    {
        returnValue = F("Alter Kirchplatz");
        break;
    }
    case 8746:
    {
        returnValue = F("Alter Kirchsteig");
        break;
    }
    case 8747:
    {
        returnValue = F("Alter Kirchweg");
        break;
    }
    case 8748:
    {
        returnValue = F("Alter Kirchweg zum Candelaber");
        break;
    }
    case 8749:
    {
        returnValue = F("Alter Kirner Weg");
        break;
    }
    case 8750:
    {
        returnValue = F("Alter Kirschenklingenweg");
        break;
    }
    case 8751:
    {
        returnValue = F("Alter Kirschgarten");
        break;
    }
    case 8752:
    {
        returnValue = F("Alter Kirschweg");
        break;
    }
    case 8753:
    {
        returnValue = F("Alter Klauser Kirchweg");
        break;
    }
    case 8754:
    {
        returnValue = F("Alter Klein-Santersleber Weg");
        break;
    }
    case 8755:
    {
        returnValue = F("Alter Kleinbahn Weg");
        break;
    }
    case 8756:
    {
        returnValue = F("Alter Kleinbahnweg");
        break;
    }
    case 8757:
    {
        returnValue = F("Alter Klosterwaldweg");
        break;
    }
    case 8758:
    {
        returnValue = F("Alter Klosterweg");
        break;
    }
    case 8759:
    {
        returnValue = F("Alter Knick");
        break;
    }
    case 8760:
    {
        returnValue = F("Alter Knipprather Weg");
        break;
    }
    case 8761:
    {
        returnValue = F("Alter Knock");
        break;
    }
    case 8762:
    {
        returnValue = F("Alter Kohlenförder Weg");
        break;
    }
    case 8763:
    {
        returnValue = F("Alter Kohlenweg");
        break;
    }
    case 8764:
    {
        returnValue = F("Alter Kohlgrubenweg");
        break;
    }
    case 8765:
    {
        returnValue = F("Alter Kohlgrundweg");
        break;
    }
    case 8766:
    {
        returnValue = F("Alter Kohlhöferweg");
        break;
    }
    case 8767:
    {
        returnValue = F("Alter Kohlwaldweg");
        break;
    }
    case 8768:
    {
        returnValue = F("Alter Kohlweg");
        break;
    }
    case 8769:
    {
        returnValue = F("Alter Kolbinger Kirchweg");
        break;
    }
    case 8770:
    {
        returnValue = F("Alter Komotauer Weg");
        break;
    }
    case 8771:
    {
        returnValue = F("Alter Konsumgraben");
        break;
    }
    case 8772:
    {
        returnValue = F("Alter Kornmarkt");
        break;
    }
    case 8773:
    {
        returnValue = F("Alter Krankenhausweg");
        break;
    }
    case 8774:
    {
        returnValue = F("Alter Kratzertweg");
        break;
    }
    case 8775:
    {
        returnValue = F("Alter Kratzhammerweg");
        break;
    }
    case 8776:
    {
        returnValue = F("Alter Kraupaer Weg");
        break;
    }
    case 8777:
    {
        returnValue = F("Alter Krautgarten");
        break;
    }
    case 8778:
    {
        returnValue = F("Alter Krchweg");
        break;
    }
    case 8779:
    {
        returnValue = F("Alter Krempeler Weg");
        break;
    }
    case 8780:
    {
        returnValue = F("Alter Kreuter Weg");
        break;
    }
    case 8781:
    {
        returnValue = F("Alter Kreuzweg");
        break;
    }
    case 8782:
    {
        returnValue = F("Alter Krofdorfer Weg");
        break;
    }
    case 8783:
    {
        returnValue = F("Alter Krug");
        break;
    }
    case 8784:
    {
        returnValue = F("Alter Krummer Weg");
        break;
    }
    case 8785:
    {
        returnValue = F("Alter Kupfermühlenweg");
        break;
    }
    case 8786:
    {
        returnValue = F("Alter Kuppelweg");
        break;
    }
    case 8787:
    {
        returnValue = F("Alter Kuppinger Weg");
        break;
    }
    case 8788:
    {
        returnValue = F("Alter Kurgarten");
        break;
    }
    case 8789:
    {
        returnValue = F("Alter Kurpark");
        break;
    }
    case 8790:
    {
        returnValue = F("Alter Kutschenweg");
        break;
    }
    case 8791:
    {
        returnValue = F("Alter Kämmererweg");
        break;
    }
    case 8792:
    {
        returnValue = F("Alter Königsberg");
        break;
    }
    case 8793:
    {
        returnValue = F("Alter Königsteiner Weg");
        break;
    }
    case 8794:
    {
        returnValue = F("Alter Königsweg");
        break;
    }
    case 8795:
    {
        returnValue = F("Alter Kühlturm");
        break;
    }
    case 8796:
    {
        returnValue = F("Alter Lammertsfehner Weg");
        break;
    }
    case 8797:
    {
        returnValue = F("Alter Landweg");
        break;
    }
    case 8798:
    {
        returnValue = F("Alter Landweg nach Eichstädt");
        break;
    }
    case 8799:
    {
        returnValue = F("Alter Langenalber Weg");
        break;
    }
    case 8800:
    {
        returnValue = F("Alter Langendorfer Weg");
        break;
    }
    case 8801:
    {
        returnValue = F("Alter Langer Weg");
        break;
    }
    case 8802:
    {
        returnValue = F("Alter Langgönser Weg");
        break;
    }
    case 8803:
    {
        returnValue = F("Alter Langmattenweg");
        break;
    }
    case 8804:
    {
        returnValue = F("Alter Lauescher Weg");
        break;
    }
    case 8805:
    {
        returnValue = F("Alter Lauffener Weg");
        break;
    }
    case 8806:
    {
        returnValue = F("Alter Lausaer Weg");
        break;
    }
    case 8807:
    {
        returnValue = F("Alter Lausaer Weg oder Doppeltes-A");
        break;
    }
    case 8808:
    {
        returnValue = F("Alter Lehmder Weg");
        break;
    }
    case 8809:
    {
        returnValue = F("Alter Lehmdermoorweg");
        break;
    }
    case 8810:
    {
        returnValue = F("Alter Lehmweg");
        break;
    }
    case 8811:
    {
        returnValue = F("Alter Leichenweg");
        break;
    }
    case 8812:
    {
        returnValue = F("Alter Leinpfad");
        break;
    }
    case 8813:
    {
        returnValue = F("Alter Lemgoer Weg");
        break;
    }
    case 8814:
    {
        returnValue = F("Alter Lenneper Weg");
        break;
    }
    case 8815:
    {
        returnValue = F("Alter Leuweg");
        break;
    }
    case 8816:
    {
        returnValue = F("Alter Leveringhauser Weg");
        break;
    }
    case 8817:
    {
        returnValue = F("Alter Licher Weg");
        break;
    }
    case 8818:
    {
        returnValue = F("Alter Lindauer Waldweg");
        break;
    }
    case 8819:
    {
        returnValue = F("Alter Lindberger Weg");
        break;
    }
    case 8820:
    {
        returnValue = F("Alter Lindenweg");
        break;
    }
    case 8821:
    {
        returnValue = F("Alter Lingener Damm");
        break;
    }
    case 8822:
    {
        returnValue = F("Alter Linienweg");
        break;
    }
    case 8823:
    {
        returnValue = F("Alter Linsenteichweg");
        break;
    }
    case 8824:
    {
        returnValue = F("Alter Littweg");
        break;
    }
    case 8825:
    {
        returnValue = F("Alter Loch Weg");
        break;
    }
    case 8826:
    {
        returnValue = F("Alter Lochenweg");
        break;
    }
    case 8827:
    {
        returnValue = F("Alter Lochschweingeweg");
        break;
    }
    case 8828:
    {
        returnValue = F("Alter Lopauer Weg");
        break;
    }
    case 8829:
    {
        returnValue = F("Alter Lorscher Weg");
        break;
    }
    case 8830:
    {
        returnValue = F("Alter Löhndorfer Weg");
        break;
    }
    case 8831:
    {
        returnValue = F("Alter Löschteich");
        break;
    }
    case 8832:
    {
        returnValue = F("Alter Löwener Kirchweg");
        break;
    }
    case 8833:
    {
        returnValue = F("Alter Lübecker Landweg");
        break;
    }
    case 8834:
    {
        returnValue = F("Alter Lüneburger Stadtweg");
        break;
    }
    case 8835:
    {
        returnValue = F("Alter Main");
        break;
    }
    case 8836:
    {
        returnValue = F("Alter Mainzer Weg");
        break;
    }
    case 8837:
    {
        returnValue = F("Alter Manderner Weg");
        break;
    }
    case 8838:
    {
        returnValue = F("Alter Mannheimer Weg");
        break;
    }
    case 8839:
    {
        returnValue = F("Alter Markt");
        break;
    }
    case 8840:
    {
        returnValue = F("Alter Marktplatz");
        break;
    }
    case 8841:
    {
        returnValue = F("Alter Marktsteig");
        break;
    }
    case 8842:
    {
        returnValue = F("Alter Marktweg");
        break;
    }
    case 8843:
    {
        returnValue = F("Alter Maschweg");
        break;
    }
    case 8844:
    {
        returnValue = F("Alter Matzenberg");
        break;
    }
    case 8845:
    {
        returnValue = F("Alter Mauerweg");
        break;
    }
    case 8846:
    {
        returnValue = F("Alter Maurersweg");
        break;
    }
    case 8847:
    {
        returnValue = F("Alter Medeloner Weg");
        break;
    }
    case 8848:
    {
        returnValue = F("Alter Meedenweg");
        break;
    }
    case 8849:
    {
        returnValue = F("Alter Meierskopfweg");
        break;
    }
    case 8850:
    {
        returnValue = F("Alter Meißner Weg");
        break;
    }
    case 8851:
    {
        returnValue = F("Alter Merchinger Weg");
        break;
    }
    case 8852:
    {
        returnValue = F("Alter Merschweg");
        break;
    }
    case 8853:
    {
        returnValue = F("Alter Messelhäuser Weg");
        break;
    }
    case 8854:
    {
        returnValue = F("Alter Mettingerweg");
        break;
    }
    case 8855:
    {
        returnValue = F("Alter Michaelisfriedhof");
        break;
    }
    case 8856:
    {
        returnValue = F("Alter Michelsreuther Weg");
        break;
    }
    case 8857:
    {
        returnValue = F("Alter Milchpfad");
        break;
    }
    case 8858:
    {
        returnValue = F("Alter Milchweg");
        break;
    }
    case 8859:
    {
        returnValue = F("Alter Mildenauer Weg");
        break;
    }
    case 8860:
    {
        returnValue = F("Alter Mindener Weg");
        break;
    }
    case 8861:
    {
        returnValue = F("Alter Mittelweg");
        break;
    }
    case 8862:
    {
        returnValue = F("Alter Molkereiweg");
        break;
    }
    case 8863:
    {
        returnValue = F("Alter Moorstrich");
        break;
    }
    case 8864:
    {
        returnValue = F("Alter Moorweg");
        break;
    }
    case 8865:
    {
        returnValue = F("Alter Mörfelder Weg");
        break;
    }
    case 8866:
    {
        returnValue = F("Alter Mühlbacher Weg");
        break;
    }
    case 8867:
    {
        returnValue = F("Alter Mühlberg");
        break;
    }
    case 8868:
    {
        returnValue = F("Alter Mühlenweg");
        break;
    }
    case 8869:
    {
        returnValue = F("Alter Mühlenweg 161");
        break;
    }
    case 8870:
    {
        returnValue = F("Alter Mühleweg");
        break;
    }
    case 8871:
    {
        returnValue = F("Alter Mühlgraben");
        break;
    }
    case 8872:
    {
        returnValue = F("Alter Mühlweg");
        break;
    }
    case 8873:
    {
        returnValue = F("Alter Müllersacker");
        break;
    }
    case 8874:
    {
        returnValue = F("Alter Münchner Weg");
        break;
    }
    case 8875:
    {
        returnValue = F("Alter Münsterweg");
        break;
    }
    case 8876:
    {
        returnValue = F("Alter NVA Weg");
        break;
    }
    case 8877:
    {
        returnValue = F("Alter Naumburger Weg");
        break;
    }
    case 8878:
    {
        returnValue = F("Alter Neckargeracher Weg");
        break;
    }
    case 8879:
    {
        returnValue = F("Alter Neubrunnenschlagweg");
        break;
    }
    case 8880:
    {
        returnValue = F("Alter Neuenkirchener Weg");
        break;
    }
    case 8881:
    {
        returnValue = F("Alter Neuhofer Weg");
        break;
    }
    case 8882:
    {
        returnValue = F("Alter Neunkirchener Weg");
        break;
    }
    case 8883:
    {
        returnValue = F("Alter Neustadter Pfad");
        break;
    }
    case 8884:
    {
        returnValue = F("Alter Neustadter Weg");
        break;
    }
    case 8885:
    {
        returnValue = F("Alter Neustädter Weg");
        break;
    }
    case 8886:
    {
        returnValue = F("Alter Neutzscher Hof");
        break;
    }
    case 8887:
    {
        returnValue = F("Alter Niedermühlenweg");
        break;
    }
    case 8888:
    {
        returnValue = F("Alter Nienbrügger Weg");
        break;
    }
    case 8889:
    {
        returnValue = F("Alter Nieskyer Weg");
        break;
    }
    case 8890:
    {
        returnValue = F("Alter Nordhäuser Weg");
        break;
    }
    case 8891:
    {
        returnValue = F("Alter Nordstetter Weg");
        break;
    }
    case 8892:
    {
        returnValue = F("Alter Nosbacher Weg");
        break;
    }
    case 8893:
    {
        returnValue = F("Alter Oberhauser Weg");
        break;
    }
    case 8894:
    {
        returnValue = F("Alter Oberkotzauer Weg");
        break;
    }
    case 8895:
    {
        returnValue = F("Alter Oberröder Weg");
        break;
    }
    case 8896:
    {
        returnValue = F("Alter Obstgarten");
        break;
    }
    case 8897:
    {
        returnValue = F("Alter Obsthof");
        break;
    }
    case 8898:
    {
        returnValue = F("Alter Ochsensaaler Weg");
        break;
    }
    case 8899:
    {
        returnValue = F("Alter Oelsener Weg");
        break;
    }
    case 8900:
    {
        returnValue = F("Alter Offenthaler Weg");
        break;
    }
    case 8901:
    {
        returnValue = F("Alter Orler Weg");
        break;
    }
    case 8902:
    {
        returnValue = F("Alter Ortsweg");
        break;
    }
    case 8903:
    {
        returnValue = F("Alter Ostdamm");
        break;
    }
    case 8904:
    {
        returnValue = F("Alter Ostelsheimer Weg");
        break;
    }
    case 8905:
    {
        returnValue = F("Alter Osterfeuerplatz");
        break;
    }
    case 8906:
    {
        returnValue = F("Alter Ostring");
        break;
    }
    case 8907:
    {
        returnValue = F("Alter Ostwall");
        break;
    }
    case 8908:
    {
        returnValue = F("Alter Oßweiler Weg");
        break;
    }
    case 8909:
    {
        returnValue = F("Alter Pariserweg");
        break;
    }
    case 8910:
    {
        returnValue = F("Alter Park");
        break;
    }
    case 8911:
    {
        returnValue = F("Alter Pausitzer Weg");
        break;
    }
    case 8912:
    {
        returnValue = F("Alter Peulinger Weg");
        break;
    }
    case 8913:
    {
        returnValue = F("Alter Pfad");
        break;
    }
    case 8914:
    {
        returnValue = F("Alter Pfarrgarten");
        break;
    }
    case 8915:
    {
        returnValue = F("Alter Pfarrhof");
        break;
    }
    case 8916:
    {
        returnValue = F("Alter Pfarrhofweg");
        break;
    }
    case 8917:
    {
        returnValue = F("Alter Pfarrweg");
        break;
    }
    case 8918:
    {
        returnValue = F("Alter Pfeddersheimer Friedhof");
        break;
    }
    case 8919:
    {
        returnValue = F("Alter Pferdemarkt");
        break;
    }
    case 8920:
    {
        returnValue = F("Alter Pflanzschulweg");
        break;
    }
    case 8921:
    {
        returnValue = F("Alter Pflaumenweg");
        break;
    }
    case 8922:
    {
        returnValue = F("Alter Pflugshaldenweg");
        break;
    }
    case 8923:
    {
        returnValue = F("Alter Philosophenweg");
        break;
    }
    case 8924:
    {
        returnValue = F("Alter Pilgerpfad");
        break;
    }
    case 8925:
    {
        returnValue = F("Alter Pinkusraumweg");
        break;
    }
    case 8926:
    {
        returnValue = F("Alter Pippelweg");
        break;
    }
    case 8927:
    {
        returnValue = F("Alter Pirkenseer Weg");
        break;
    }
    case 8928:
    {
        returnValue = F("Alter Plan");
        break;
    }
    case 8929:
    {
        returnValue = F("Alter Platz");
        break;
    }
    case 8930:
    {
        returnValue = F("Alter Plutoweg");
        break;
    }
    case 8931:
    {
        returnValue = F("Alter Pohl");
        break;
    }
    case 8932:
    {
        returnValue = F("Alter Ponholzmühlweg");
        break;
    }
    case 8933:
    {
        returnValue = F("Alter Postberg");
        break;
    }
    case 8934:
    {
        returnValue = F("Alter Postdamm");
        break;
    }
    case 8935:
    {
        returnValue = F("Alter Postel");
        break;
    }
    case 8936:
    {
        returnValue = F("Alter Posthof");
        break;
    }
    case 8937:
    {
        returnValue = F("Alter Postkutschenweg");
        break;
    }
    case 8938:
    {
        returnValue = F("Alter Postpfad");
        break;
    }
    case 8939:
    {
        returnValue = F("Alter Postplatz");
        break;
    }
    case 8940:
    {
        returnValue = F("Alter Postweg");
        break;
    }
    case 8941:
    {
        returnValue = F("Alter Postweg Ost");
        break;
    }
    case 8942:
    {
        returnValue = F("Alter Postweg West");
        break;
    }
    case 8943:
    {
        returnValue = F("Alter Poxdorfer Weg");
        break;
    }
    case 8944:
    {
        returnValue = F("Alter Prinzendamm");
        break;
    }
    case 8945:
    {
        returnValue = F("Alter Prozessionsweg");
        break;
    }
    case 8946:
    {
        returnValue = F("Alter Pyer Kirchweg");
        break;
    }
    case 8947:
    {
        returnValue = F("Alter Pyrmonter Weg");
        break;
    }
    case 8948:
    {
        returnValue = F("Alter Rain");
        break;
    }
    case 8949:
    {
        returnValue = F("Alter Rainweg");
        break;
    }
    case 8950:
    {
        returnValue = F("Alter Rank");
        break;
    }
    case 8951:
    {
        returnValue = F("Alter Rathausplatz");
        break;
    }
    case 8952:
    {
        returnValue = F("Alter Rathausweg");
        break;
    }
    case 8953:
    {
        returnValue = F("Alter Rathjehof");
        break;
    }
    case 8954:
    {
        returnValue = F("Alter Rauher Stich");
        break;
    }
    case 8955:
    {
        returnValue = F("Alter Raupennestweg");
        break;
    }
    case 8956:
    {
        returnValue = F("Alter Rautheimer Weg");
        break;
    }
    case 8957:
    {
        returnValue = F("Alter Recklinghäuser Weg");
        break;
    }
    case 8958:
    {
        returnValue = F("Alter Redeckweg");
        break;
    }
    case 8959:
    {
        returnValue = F("Alter Rehmer Weg");
        break;
    }
    case 8960:
    {
        returnValue = F("Alter Rehrbrink");
        break;
    }
    case 8961:
    {
        returnValue = F("Alter Rehrhofer Weg");
        break;
    }
    case 8962:
    {
        returnValue = F("Alter Reilinger Weg / Sandhäuser Pfädle");
        break;
    }
    case 8963:
    {
        returnValue = F("Alter Reistweg");
        break;
    }
    case 8964:
    {
        returnValue = F("Alter Reithof");
        break;
    }
    case 8965:
    {
        returnValue = F("Alter Reitplatz");
        break;
    }
    case 8966:
    {
        returnValue = F("Alter Rennsteig");
        break;
    }
    case 8967:
    {
        returnValue = F("Alter Rennstieg");
        break;
    }
    case 8968:
    {
        returnValue = F("Alter Rennweg");
        break;
    }
    case 8969:
    {
        returnValue = F("Alter Rheder Weg");
        break;
    }
    case 8970:
    {
        returnValue = F("Alter Rheinweg");
        break;
    }
    case 8971:
    {
        returnValue = F("Alter Richener Weg");
        break;
    }
    case 8972:
    {
        returnValue = F("Alter Richterweg");
        break;
    }
    case 8973:
    {
        returnValue = F("Alter Ring");
        break;
    }
    case 8974:
    {
        returnValue = F("Alter Ringelweg");
        break;
    }
    case 8975:
    {
        returnValue = F("Alter Ringwall");
        break;
    }
    case 8976:
    {
        returnValue = F("Alter Rintelner Postweg");
        break;
    }
    case 8977:
    {
        returnValue = F("Alter Rintelner Weg");
        break;
    }
    case 8978:
    {
        returnValue = F("Alter Rintenlner");
        break;
    }
    case 8979:
    {
        returnValue = F("Alter Ritterweg");
        break;
    }
    case 8980:
    {
        returnValue = F("Alter Ritzebütteler Weg");
        break;
    }
    case 8981:
    {
        returnValue = F("Alter Rollbergweg");
        break;
    }
    case 8982:
    {
        returnValue = F("Alter Rosenthaler Weg");
        break;
    }
    case 8983:
    {
        returnValue = F("Alter Rottweg");
        break;
    }
    case 8984:
    {
        returnValue = F("Alter Rotweg");
        break;
    }
    case 8985:
    {
        returnValue = F("Alter Roßbergweg");
        break;
    }
    case 8986:
    {
        returnValue = F("Alter Rundweg 4");
        break;
    }
    case 8987:
    {
        returnValue = F("Alter Rundweg Nr.1 Müsch");
        break;
    }
    case 8988:
    {
        returnValue = F("Alter Ruppmannsdorfer Kirchenweg");
        break;
    }
    case 8989:
    {
        returnValue = F("Alter Römerweg");
        break;
    }
    case 8990:
    {
        returnValue = F("Alter Römhilder Weg");
        break;
    }
    case 8991:
    {
        returnValue = F("Alter Röpker Kirchweg");
        break;
    }
    case 8992:
    {
        returnValue = F("Alter Rückeweg");
        break;
    }
    case 8993:
    {
        returnValue = F("Alter Rückinger Weg");
        break;
    }
    case 8994:
    {
        returnValue = F("Alter Rütteweg");
        break;
    }
    case 8995:
    {
        returnValue = F("Alter Saatschulweg");
        break;
    }
    case 8996:
    {
        returnValue = F("Alter Sachsenweg");
        break;
    }
    case 8997:
    {
        returnValue = F("Alter Salhaldenweg");
        break;
    }
    case 8998:
    {
        returnValue = F("Alter Salinenweg");
        break;
    }
    case 8999:
    {
        returnValue = F("Alter Salmbacher Kirchweg");
        break;
    }
    case 9000:
    {
        returnValue = F("Alter Salzstieg");
        break;
    }
    case 9001:
    {
        returnValue = F("Alter Salzweg");
        break;
    }
    case 9002:
    {
        returnValue = F("Alter Sambser Kirchweg");
        break;
    }
    case 9003:
    {
        returnValue = F("Alter Sand");
        break;
    }
    case 9004:
    {
        returnValue = F("Alter Sandackerweg");
        break;
    }
    case 9005:
    {
        returnValue = F("Alter Sandberg");
        break;
    }
    case 9006:
    {
        returnValue = F("Alter Sandkauter Weg");
        break;
    }
    case 9007:
    {
        returnValue = F("Alter Sandweg");
        break;
    }
    case 9008:
    {
        returnValue = F("Alter Saumweg");
        break;
    }
    case 9009:
    {
        returnValue = F("Alter Schacht");
        break;
    }
    case 9010:
    {
        returnValue = F("Alter Schachtelweg");
        break;
    }
    case 9011:
    {
        returnValue = F("Alter Schachtweg");
        break;
    }
    case 9012:
    {
        returnValue = F("Alter Schadower Weg");
        break;
    }
    case 9013:
    {
        returnValue = F("Alter Schaftrieb");
        break;
    }
    case 9014:
    {
        returnValue = F("Alter Schanzenweg");
        break;
    }
    case 9015:
    {
        returnValue = F("Alter Scharreler Damm");
        break;
    }
    case 9016:
    {
        returnValue = F("Alter Scheunenweg");
        break;
    }
    case 9017:
    {
        returnValue = F("Alter Schienenweg");
        break;
    }
    case 9018:
    {
        returnValue = F("Alter Schiessplatzweg");
        break;
    }
    case 9019:
    {
        returnValue = F("Alter Schießplatz");
        break;
    }
    case 9020:
    {
        returnValue = F("Alter Schießstand");
        break;
    }
    case 9021:
    {
        returnValue = F("Alter Schießstandweg");
        break;
    }
    case 9022:
    {
        returnValue = F("Alter Schlachthofweg");
        break;
    }
    case 9023:
    {
        returnValue = F("Alter Schlehbergweg");
        break;
    }
    case 9024:
    {
        returnValue = F("Alter Schleusenweg");
        break;
    }
    case 9025:
    {
        returnValue = F("Alter Schlittenweg");
        break;
    }
    case 9026:
    {
        returnValue = F("Alter Schlosspark");
        break;
    }
    case 9027:
    {
        returnValue = F("Alter Schlossweg");
        break;
    }
    case 9028:
    {
        returnValue = F("Alter Schloßberg");
        break;
    }
    case 9029:
    {
        returnValue = F("Alter Schloßweg");
        break;
    }
    case 9030:
    {
        returnValue = F("Alter Schmidtburger Weg");
        break;
    }
    case 9031:
    {
        returnValue = F("Alter Schmiedberg");
        break;
    }
    case 9032:
    {
        returnValue = F("Alter Schmiedeplatz");
        break;
    }
    case 9033:
    {
        returnValue = F("Alter Schmiedeweg");
        break;
    }
    case 9034:
    {
        returnValue = F("Alter Schmoler Weg");
        break;
    }
    case 9035:
    {
        returnValue = F("Alter Schmückerweg");
        break;
    }
    case 9036:
    {
        returnValue = F("Alter Schulbrink");
        break;
    }
    case 9037:
    {
        returnValue = F("Alter Schulgarten");
        break;
    }
    case 9038:
    {
        returnValue = F("Alter Schulhof");
        break;
    }
    case 9039:
    {
        returnValue = F("Alter Schulplatz");
        break;
    }
    case 9040:
    {
        returnValue = F("Alter Schulsteig");
        break;
    }
    case 9041:
    {
        returnValue = F("Alter Schulweg");
        break;
    }
    case 9042:
    {
        returnValue = F("Alter Schulweg nach Campow");
        break;
    }
    case 9043:
    {
        returnValue = F("Alter Schwanbergweg");
        break;
    }
    case 9044:
    {
        returnValue = F("Alter Schwanefelder Weg");
        break;
    }
    case 9045:
    {
        returnValue = F("Alter Schwannenweg");
        break;
    }
    case 9046:
    {
        returnValue = F("Alter Schwansenweg");
        break;
    }
    case 9047:
    {
        returnValue = F("Alter Schwefer Weg");
        break;
    }
    case 9048:
    {
        returnValue = F("Alter Schweinfurter Weg");
        break;
    }
    case 9049:
    {
        returnValue = F("Alter Schwerdtweg");
        break;
    }
    case 9050:
    {
        returnValue = F("Alter Schäferweg");
        break;
    }
    case 9051:
    {
        returnValue = F("Alter Schälzigweg");
        break;
    }
    case 9052:
    {
        returnValue = F("Alter Schöllenbacher Weg");
        break;
    }
    case 9053:
    {
        returnValue = F("Alter Schönbachweg");
        break;
    }
    case 9054:
    {
        returnValue = F("Alter Schönbeker Weg");
        break;
    }
    case 9055:
    {
        returnValue = F("Alter Schönberger Weg");
        break;
    }
    case 9056:
    {
        returnValue = F("Alter Schönbronner Weg");
        break;
    }
    case 9057:
    {
        returnValue = F("Alter Schönbrunner Weg");
        break;
    }
    case 9058:
    {
        returnValue = F("Alter Schüttsberg");
        break;
    }
    case 9059:
    {
        returnValue = F("Alter Schützenplatz");
        break;
    }
    case 9060:
    {
        returnValue = F("Alter Schützenstand");
        break;
    }
    case 9061:
    {
        returnValue = F("Alter Schützenweg");
        break;
    }
    case 9062:
    {
        returnValue = F("Alter See");
        break;
    }
    case 9063:
    {
        returnValue = F("Alter Seeburger Weg");
        break;
    }
    case 9064:
    {
        returnValue = F("Alter Seedamm");
        break;
    }
    case 9065:
    {
        returnValue = F("Alter Seestieg");
        break;
    }
    case 9066:
    {
        returnValue = F("Alter Seeweg");
        break;
    }
    case 9067:
    {
        returnValue = F("Alter Seilfurter Friedhof");
        break;
    }
    case 9068:
    {
        returnValue = F("Alter Seinbruchweg");
        break;
    }
    case 9069:
    {
        returnValue = F("Alter Sennereiweg");
        break;
    }
    case 9070:
    {
        returnValue = F("Alter Siebenbach");
        break;
    }
    case 9071:
    {
        returnValue = F("Alter Siechenwaldweg");
        break;
    }
    case 9072:
    {
        returnValue = F("Alter Siedlerweg");
        break;
    }
    case 9073:
    {
        returnValue = F("Alter Siedlungsweg");
        break;
    }
    case 9074:
    {
        returnValue = F("Alter Sielweg");
        break;
    }
    case 9075:
    {
        returnValue = F("Alter Silbertransportweg");
        break;
    }
    case 9076:
    {
        returnValue = F("Alter Sinsheimer Weg");
        break;
    }
    case 9077:
    {
        returnValue = F("Alter Sirksfelder Weg");
        break;
    }
    case 9078:
    {
        returnValue = F("Alter Soestweg");
        break;
    }
    case 9079:
    {
        returnValue = F("Alter Spandauer Weg");
        break;
    }
    case 9080:
    {
        returnValue = F("Alter Sparren");
        break;
    }
    case 9081:
    {
        returnValue = F("Alter Spechtritzer Hohlweg");
        break;
    }
    case 9082:
    {
        returnValue = F("Alter Speyerer Weg");
        break;
    }
    case 9083:
    {
        returnValue = F("Alter Spitalweg");
        break;
    }
    case 9084:
    {
        returnValue = F("Alter Spitzensteinweg");
        break;
    }
    case 9085:
    {
        returnValue = F("Alter Spoosweg");
        break;
    }
    case 9086:
    {
        returnValue = F("Alter Sportplatz");
        break;
    }
    case 9087:
    {
        returnValue = F("Alter Sportplatz Lake");
        break;
    }
    case 9088:
    {
        returnValue = F("Alter Sportplatzweg");
        break;
    }
    case 9089:
    {
        returnValue = F("Alter Sprakensehler Weg");
        break;
    }
    case 9090:
    {
        returnValue = F("Alter Stadtberg");
        break;
    }
    case 9091:
    {
        returnValue = F("Alter Stadtfriedhof");
        break;
    }
    case 9092:
    {
        returnValue = F("Alter Stadtgarten");
        break;
    }
    case 9093:
    {
        returnValue = F("Alter Stadtgraben");
        break;
    }
    case 9094:
    {
        returnValue = F("Alter Stadtpark");
        break;
    }
    case 9095:
    {
        returnValue = F("Alter Stadtweg");
        break;
    }
    case 9096:
    {
        returnValue = F("Alter Staffelweg");
        break;
    }
    case 9097:
    {
        returnValue = F("Alter Stangengrüner Weg");
        break;
    }
    case 9098:
    {
        returnValue = F("Alter Stationenweg");
        break;
    }
    case 9099:
    {
        returnValue = F("Alter Steeg");
        break;
    }
    case 9100:
    {
        returnValue = F("Alter Steenbeker Weg");
        break;
    }
    case 9101:
    {
        returnValue = F("Alter Steig");
        break;
    }
    case 9102:
    {
        returnValue = F("Alter Steigplatz");
        break;
    }
    case 9103:
    {
        returnValue = F("Alter Stein");
        break;
    }
    case 9104:
    {
        returnValue = F("Alter Steinachweg");
        break;
    }
    case 9105:
    {
        returnValue = F("Alter Steinbacher Weg");
        break;
    }
    case 9106:
    {
        returnValue = F("Alter Steinbruch");
        break;
    }
    case 9107:
    {
        returnValue = F("Alter Steinbruchschlagweg");
        break;
    }
    case 9108:
    {
        returnValue = F("Alter Steinbruchweg");
        break;
    }
    case 9109:
    {
        returnValue = F("Alter Steinenweg");
        break;
    }
    case 9110:
    {
        returnValue = F("Alter Steinhauerweg");
        break;
    }
    case 9111:
    {
        returnValue = F("Alter Steinweg");
        break;
    }
    case 9112:
    {
        returnValue = F("Alter Stelleweg");
        break;
    }
    case 9113:
    {
        returnValue = F("Alter Stellweg");
        break;
    }
    case 9114:
    {
        returnValue = F("Alter Stettener Weg");
        break;
    }
    case 9115:
    {
        returnValue = F("Alter Stolker Weg");
        break;
    }
    case 9116:
    {
        returnValue = F("Alter Storzenhaldenweg");
        break;
    }
    case 9117:
    {
        returnValue = F("Alter Str.nberg");
        break;
    }
    case 9118:
    {
        returnValue = F("Alter Strand");
        break;
    }
    case 9119:
    {
        returnValue = F("Alter Strandweg");
        break;
    }
    case 9120:
    {
        returnValue = F("Alter Strom");
        break;
    }
    case 9121:
    {
        returnValue = F("Alter Stupfericher Weg");
        break;
    }
    case 9122:
    {
        returnValue = F("Alter Stöffiner Weg");
        break;
    }
    case 9123:
    {
        returnValue = F("Alter Stühleweg");
        break;
    }
    case 9124:
    {
        returnValue = F("Alter Sundweg");
        break;
    }
    case 9125:
    {
        returnValue = F("Alter Synagogenplatz");
        break;
    }
    case 9126:
    {
        returnValue = F("Alter Sägeplatz");
        break;
    }
    case 9127:
    {
        returnValue = F("Alter Sägereiplatz");
        break;
    }
    case 9128:
    {
        returnValue = F("Alter Sögeler Weg");
        break;
    }
    case 9129:
    {
        returnValue = F("Alter Söhn");
        break;
    }
    case 9130:
    {
        returnValue = F("Alter Südring");
        break;
    }
    case 9131:
    {
        returnValue = F("Alter Taler Weg");
        break;
    }
    case 9132:
    {
        returnValue = F("Alter Talhauser Weg");
        break;
    }
    case 9133:
    {
        returnValue = F("Alter Talweg");
        break;
    }
    case 9134:
    {
        returnValue = F("Alter Tannenweg");
        break;
    }
    case 9135:
    {
        returnValue = F("Alter Tanner Weg");
        break;
    }
    case 9136:
    {
        returnValue = F("Alter Teich");
        break;
    }
    case 9137:
    {
        returnValue = F("Alter Teichsweg");
        break;
    }
    case 9138:
    {
        returnValue = F("Alter Teichweg");
        break;
    }
    case 9139:
    {
        returnValue = F("Alter Thun");
        break;
    }
    case 9140:
    {
        returnValue = F("Alter Tierpark");
        break;
    }
    case 9141:
    {
        returnValue = F("Alter Tivoli");
        break;
    }
    case 9142:
    {
        returnValue = F("Alter Tonbachweg");
        break;
    }
    case 9143:
    {
        returnValue = F("Alter Tonweg");
        break;
    }
    case 9144:
    {
        returnValue = F("Alter Topf");
        break;
    }
    case 9145:
    {
        returnValue = F("Alter Torfmoorweg");
        break;
    }
    case 9146:
    {
        returnValue = F("Alter Torfplatz");
        break;
    }
    case 9147:
    {
        returnValue = F("Alter Torfweg");
        break;
    }
    case 9148:
    {
        returnValue = F("Alter Tornow");
        break;
    }
    case 9149:
    {
        returnValue = F("Alter Trailfinger Weg");
        break;
    }
    case 9150:
    {
        returnValue = F("Alter Traßweg");
        break;
    }
    case 9151:
    {
        returnValue = F("Alter Treidelpfad");
        break;
    }
    case 9152:
    {
        returnValue = F("Alter Triebel");
        break;
    }
    case 9153:
    {
        returnValue = F("Alter Triebweg");
        break;
    }
    case 9154:
    {
        returnValue = F("Alter Triftweg");
        break;
    }
    case 9155:
    {
        returnValue = F("Alter Turm Grünfläche");
        break;
    }
    case 9156:
    {
        returnValue = F("Alter Turmweg");
        break;
    }
    case 9157:
    {
        returnValue = F("Alter Turnplatz");
        break;
    }
    case 9158:
    {
        returnValue = F("Alter Töpferweg");
        break;
    }
    case 9159:
    {
        returnValue = F("Alter Unnauer Weg");
        break;
    }
    case 9160:
    {
        returnValue = F("Alter Unterer Hakenweg");
        break;
    }
    case 9161:
    {
        returnValue = F("Alter Untertaxetweg");
        break;
    }
    case 9162:
    {
        returnValue = F("Alter Unteröwisheimer Weg");
        break;
    }
    case 9163:
    {
        returnValue = F("Alter Usinger Weg");
        break;
    }
    case 9164:
    {
        returnValue = F("Alter Venloer Weg");
        break;
    }
    case 9165:
    {
        returnValue = F("Alter Viedamm");
        break;
    }
    case 9166:
    {
        returnValue = F("Alter Viedeich");
        break;
    }
    case 9167:
    {
        returnValue = F("Alter Viehberg");
        break;
    }
    case 9168:
    {
        returnValue = F("Alter Viehweg");
        break;
    }
    case 9169:
    {
        returnValue = F("Alter Villinger Weg");
        break;
    }
    case 9170:
    {
        returnValue = F("Alter Völkersbacherweg");
        break;
    }
    case 9171:
    {
        returnValue = F("Alter Waidweg");
        break;
    }
    case 9172:
    {
        returnValue = F("Alter Wald");
        break;
    }
    case 9173:
    {
        returnValue = F("Alter Waldsportplatz Nauborn");
        break;
    }
    case 9174:
    {
        returnValue = F("Alter Wall");
        break;
    }
    case 9175:
    {
        returnValue = F("Alter Wanderweg");
        break;
    }
    case 9176:
    {
        returnValue = F("Alter Wang West");
        break;
    }
    case 9177:
    {
        returnValue = F("Alter Wansdorfer Weg");
        break;
    }
    case 9178:
    {
        returnValue = F("Alter Warendorfer Weg");
        break;
    }
    case 9179:
    {
        returnValue = F("Alter Warf");
        break;
    }
    case 9180:
    {
        returnValue = F("Alter Warmensteinacher Weg");
        break;
    }
    case 9181:
    {
        returnValue = F("Alter Wartweg");
        break;
    }
    case 9182:
    {
        returnValue = F("Alter Wassergang");
        break;
    }
    case 9183:
    {
        returnValue = F("Alter Wasserlauf");
        break;
    }
    case 9184:
    {
        returnValue = F("Alter Wasserturm");
        break;
    }
    case 9185:
    {
        returnValue = F("Alter Weg");
        break;
    }
    case 9186:
    {
        returnValue = F("Alter Wehener Weg");
        break;
    }
    case 9187:
    {
        returnValue = F("Alter Wehrgraben");
        break;
    }
    case 9188:
    {
        returnValue = F("Alter Weideweg");
        break;
    }
    case 9189:
    {
        returnValue = F("Alter Weidnerbach");
        break;
    }
    case 9190:
    {
        returnValue = F("Alter Weiher");
        break;
    }
    case 9191:
    {
        returnValue = F("Alter Weiherweg");
        break;
    }
    case 9192:
    {
        returnValue = F("Alter Weilheimer Weg");
        break;
    }
    case 9193:
    {
        returnValue = F("Alter Weinberg");
        break;
    }
    case 9194:
    {
        returnValue = F("Alter Weinheimer Weg");
        break;
    }
    case 9195:
    {
        returnValue = F("Alter Weinweg");
        break;
    }
    case 9196:
    {
        returnValue = F("Alter Wellbachweg");
        break;
    }
    case 9197:
    {
        returnValue = F("Alter Welzheimer Weg");
        break;
    }
    case 9198:
    {
        returnValue = F("Alter Werlter Weg");
        break;
    }
    case 9199:
    {
        returnValue = F("Alter Werner Hellweg");
        break;
    }
    case 9200:
    {
        returnValue = F("Alter Werpeloher Kirchweg");
        break;
    }
    case 9201:
    {
        returnValue = F("Alter Weseler Weg");
        break;
    }
    case 9202:
    {
        returnValue = F("Alter Westhofer Weg");
        break;
    }
    case 9203:
    {
        returnValue = F("Alter Westring");
        break;
    }
    case 9204:
    {
        returnValue = F("Alter Westweg");
        break;
    }
    case 9205:
    {
        returnValue = F("Alter Wetzlarer Weg");
        break;
    }
    case 9206:
    {
        returnValue = F("Alter Wiedaer Hüttenweg");
        break;
    }
    case 9207:
    {
        returnValue = F("Alter Wiednitzer Weg");
        break;
    }
    case 9208:
    {
        returnValue = F("Alter Wiesenweg");
        break;
    }
    case 9209:
    {
        returnValue = F("Alter Wildbacher Weg");
        break;
    }
    case 9210:
    {
        returnValue = F("Alter Wildberger Weg");
        break;
    }
    case 9211:
    {
        returnValue = F("Alter Wilddobelweg");
        break;
    }
    case 9212:
    {
        returnValue = F("Alter Windeweg");
        break;
    }
    case 9213:
    {
        returnValue = F("Alter Wingert");
        break;
    }
    case 9214:
    {
        returnValue = F("Alter Wingertsweg");
        break;
    }
    case 9215:
    {
        returnValue = F("Alter Winkel");
        break;
    }
    case 9216:
    {
        returnValue = F("Alter Winkel Weg");
        break;
    }
    case 9217:
    {
        returnValue = F("Alter Winsener Weg");
        break;
    }
    case 9218:
    {
        returnValue = F("Alter Winterbacher Weg");
        break;
    }
    case 9219:
    {
        returnValue = F("Alter Winzerkeller");
        break;
    }
    case 9220:
    {
        returnValue = F("Alter Wirtschaftsweg");
        break;
    }
    case 9221:
    {
        returnValue = F("Alter Wittenberger Weg");
        break;
    }
    case 9222:
    {
        returnValue = F("Alter Wixhäuser Weg");
        break;
    }
    case 9223:
    {
        returnValue = F("Alter Wölper Weg");
        break;
    }
    case 9224:
    {
        returnValue = F("Alter Wölzower Weg");
        break;
    }
    case 9225:
    {
        returnValue = F("Alter Wüddenweg");
        break;
    }
    case 9226:
    {
        returnValue = F("Alter Wüstengrabenweg");
        break;
    }
    case 9227:
    {
        returnValue = F("Alter Zaunhäuser Weg");
        break;
    }
    case 9228:
    {
        returnValue = F("Alter Zeller Weg");
        break;
    }
    case 9229:
    {
        returnValue = F("Alter Ziegeleiweg");
        break;
    }
    case 9230:
    {
        returnValue = F("Alter Ziegelhof");
        break;
    }
    case 9231:
    {
        returnValue = F("Alter Zienerweg");
        break;
    }
    case 9232:
    {
        returnValue = F("Alter Zimmerner Weg");
        break;
    }
    case 9233:
    {
        returnValue = F("Alter Zimmerplatz");
        break;
    }
    case 9234:
    {
        returnValue = F("Alter Zirkusplatz");
        break;
    }
    case 9235:
    {
        returnValue = F("Alter Zoll");
        break;
    }
    case 9236:
    {
        returnValue = F("Alter Zschopauer Weg");
        break;
    }
    case 9237:
    {
        returnValue = F("Alter Zuschlag");
        break;
    }
    case 9238:
    {
        returnValue = F("Alter Zuschlagweg");
        break;
    }
    case 9239:
    {
        returnValue = F("Alter Zwieselweg");
        break;
    }
    case 9240:
    {
        returnValue = F("Alter neuer Wall");
        break;
    }
    case 9241:
    {
        returnValue = F("Alter neuer Weg");
        break;
    }
    case 9242:
    {
        returnValue = F("Alter wiederhergestellter Fuhrweg");
        break;
    }
    case 9243:
    {
        returnValue = F("Alter-Abhängungsweg");
        break;
    }
    case 9244:
    {
        returnValue = F("Alter-Hau-Sträßchen");
        break;
    }
    case 9245:
    {
        returnValue = F("Alter-Kamp-Weg");
        break;
    }
    case 9246:
    {
        returnValue = F("Alter-Kirchenweg");
        break;
    }
    case 9247:
    {
        returnValue = F("Alter-Postweg");
        break;
    }
    case 9248:
    {
        returnValue = F("Alter-Rhein-Weg");
        break;
    }
    case 9249:
    {
        returnValue = F("Alter-Sparkassen-Steig");
        break;
    }
    case 9250:
    {
        returnValue = F("Alter-Steinbruch-Weg");
        break;
    }
    case 9251:
    {
        returnValue = F("Alterathsfeld");
        break;
    }
    case 9252:
    {
        returnValue = F("Alteraugenstr.");
        break;
    }
    case 9253:
    {
        returnValue = F("Alterbachstr.");
        break;
    }
    case 9254:
    {
        returnValue = F("Alterberg");
        break;
    }
    case 9255:
    {
        returnValue = F("Alterbergstr.");
        break;
    }
    case 9256:
    {
        returnValue = F("Alterer Herrlesbergweg");
        break;
    }
    case 9257:
    {
        returnValue = F("Alterhauweg");
        break;
    }
    case 9258:
    {
        returnValue = F("Alterkoogchaussee");
        break;
    }
    case 9259:
    {
        returnValue = F("Alterkülzer Str.");
        break;
    }
    case 9260:
    {
        returnValue = F("Alterlanger Str.");
        break;
    }
    case 9261:
    {
        returnValue = F("Altermannweg");
        break;
    }
    case 9262:
    {
        returnValue = F("Altermarkt");
        break;
    }
    case 9263:
    {
        returnValue = F("Alternstr.");
        break;
    }
    case 9264:
    {
        returnValue = F("Alternweg");
        break;
    }
    case 9265:
    {
        returnValue = F("Altersbach");
        break;
    }
    case 9266:
    {
        returnValue = F("Altersbacher Hauptstr.");
        break;
    }
    case 9267:
    {
        returnValue = F("Altersbacher Landstr.");
        break;
    }
    case 9268:
    {
        returnValue = F("Altersbacher Str.");
        break;
    }
    case 9269:
    {
        returnValue = F("Altersbacher Weg");
        break;
    }
    case 9270:
    {
        returnValue = F("Altersberg");
        break;
    }
    case 9271:
    {
        returnValue = F("Altersberger Str.");
        break;
    }
    case 9272:
    {
        returnValue = F("Altersberger Weg");
        break;
    }
    case 9273:
    {
        returnValue = F("Altersberggasse");
        break;
    }
    case 9274:
    {
        returnValue = F("Altersbergstr.");
        break;
    }
    case 9275:
    {
        returnValue = F("Alterschlagweg");
        break;
    }
    case 9276:
    {
        returnValue = F("Altershausener Ring");
        break;
    }
    case 9277:
    {
        returnValue = F("Altershäuser Str.");
        break;
    }
    case 9278:
    {
        returnValue = F("Alterstedter Hauptstr.");
        break;
    }
    case 9279:
    {
        returnValue = F("Alterstedter Str.");
        break;
    }
    case 9280:
    {
        returnValue = F("Altertal");
        break;
    }
    case 9281:
    {
        returnValue = F("Altertheimer Str.");
        break;
    }
    case 9282:
    {
        returnValue = F("Altertheimer Weg");
        break;
    }
    case 9283:
    {
        returnValue = F("Altertum-Weg");
        break;
    }
    case 9284:
    {
        returnValue = F("Alteruhweg");
        break;
    }
    case 9285:
    {
        returnValue = F("Alterweg");
        break;
    }
    case 9286:
    {
        returnValue = F("Alteröder Weg");
        break;
    }
    case 9287:
    {
        returnValue = F("Altes A");
        break;
    }
    case 9288:
    {
        returnValue = F("Altes Amt");
        break;
    }
    case 9289:
    {
        returnValue = F("Altes Amtsgericht");
        break;
    }
    case 9290:
    {
        returnValue = F("Altes Bahnwerk");
        break;
    }
    case 9291:
    {
        returnValue = F("Altes Bannwaldsträßle");
        break;
    }
    case 9292:
    {
        returnValue = F("Altes Bergfeld");
        break;
    }
    case 9293:
    {
        returnValue = F("Altes Bollwerk");
        break;
    }
    case 9294:
    {
        returnValue = F("Altes Bruch");
        break;
    }
    case 9295:
    {
        returnValue = F("Altes Buckhörner Moor");
        break;
    }
    case 9296:
    {
        returnValue = F("Altes Burbacher Sträßle");
        break;
    }
    case 9297:
    {
        returnValue = F("Altes Depot");
        break;
    }
    case 9298:
    {
        returnValue = F("Altes Dorf");
        break;
    }
    case 9299:
    {
        returnValue = F("Altes Ende");
        break;
    }
    case 9300:
    {
        returnValue = F("Altes Eutinger Sträßle");
        break;
    }
    case 9301:
    {
        returnValue = F("Altes Feld");
        break;
    }
    case 9302:
    {
        returnValue = F("Altes Feld-Süd");
        break;
    }
    case 9303:
    {
        returnValue = F("Altes Fischerufer");
        break;
    }
    case 9304:
    {
        returnValue = F("Altes Forstamt");
        break;
    }
    case 9305:
    {
        returnValue = F("Altes Forsthaus");
        break;
    }
    case 9306:
    {
        returnValue = F("Altes Forsthaus-Beiershagen");
        break;
    }
    case 9307:
    {
        returnValue = F("Altes Freibad");
        break;
    }
    case 9308:
    {
        returnValue = F("Altes Freibad Horsten");
        break;
    }
    case 9309:
    {
        returnValue = F("Altes G");
        break;
    }
    case 9310:
    {
        returnValue = F("Altes Gaswerk");
        break;
    }
    case 9311:
    {
        returnValue = F("Altes Gehege");
        break;
    }
    case 9312:
    {
        returnValue = F("Altes Gericht");
        break;
    }
    case 9313:
    {
        returnValue = F("Altes Gestell");
        break;
    }
    case 9314:
    {
        returnValue = F("Altes Gut");
        break;
    }
    case 9315:
    {
        returnValue = F("Altes Haager Sträßel");
        break;
    }
    case 9316:
    {
        returnValue = F("Altes Heidland");
        break;
    }
    case 9317:
    {
        returnValue = F("Altes Hohes Feld");
        break;
    }
    case 9318:
    {
        returnValue = F("Altes Holz");
        break;
    }
    case 9319:
    {
        returnValue = F("Altes Jagdschloß");
        break;
    }
    case 9320:
    {
        returnValue = F("Altes Kalkwerk");
        break;
    }
    case 9321:
    {
        returnValue = F("Altes Kautzengäßchen");
        break;
    }
    case 9322:
    {
        returnValue = F("Altes Kirchgässle");
        break;
    }
    case 9323:
    {
        returnValue = F("Altes Krankenhaus");
        break;
    }
    case 9324:
    {
        returnValue = F("Altes Kurhaus");
        break;
    }
    case 9325:
    {
        returnValue = F("Altes Land");
        break;
    }
    case 9326:
    {
        returnValue = F("Altes Mühlenfeld");
        break;
    }
    case 9327:
    {
        returnValue = F("Altes Oestervenn");
        break;
    }
    case 9328:
    {
        returnValue = F("Altes Pastorat");
        break;
    }
    case 9329:
    {
        returnValue = F("Altes Rad");
        break;
    }
    case 9330:
    {
        returnValue = F("Altes Ried");
        break;
    }
    case 9331:
    {
        returnValue = F("Altes Rittergut");
        break;
    }
    case 9332:
    {
        returnValue = F("Altes Schloss");
        break;
    }
    case 9333:
    {
        returnValue = F("Altes Schloß");
        break;
    }
    case 9334:
    {
        returnValue = F("Altes Schulgäßle");
        break;
    }
    case 9335:
    {
        returnValue = F("Altes Seelenfeld");
        break;
    }
    case 9336:
    {
        returnValue = F("Altes Sonnenbad");
        break;
    }
    case 9337:
    {
        returnValue = F("Altes Spargelfeld");
        break;
    }
    case 9338:
    {
        returnValue = F("Altes Sperrwerk");
        break;
    }
    case 9339:
    {
        returnValue = F("Altes Stadion");
        break;
    }
    case 9340:
    {
        returnValue = F("Altes Stadttor");
        break;
    }
    case 9341:
    {
        returnValue = F("Altes Steinbruchsträsschen");
        break;
    }
    case 9342:
    {
        returnValue = F("Altes Steinbruchsträßchen");
        break;
    }
    case 9343:
    {
        returnValue = F("Altes Sträßchen");
        break;
    }
    case 9344:
    {
        returnValue = F("Altes Sträßle");
        break;
    }
    case 9345:
    {
        returnValue = F("Altes Sägewerk");
        break;
    }
    case 9346:
    {
        returnValue = F("Altes Tonwerk");
        break;
    }
    case 9347:
    {
        returnValue = F("Altes Tor");
        break;
    }
    case 9348:
    {
        returnValue = F("Altes Torfmoor");
        break;
    }
    case 9349:
    {
        returnValue = F("Altes Torfredder");
        break;
    }
    case 9350:
    {
        returnValue = F("Altes Viadukt");
        break;
    }
    case 9351:
    {
        returnValue = F("Altes Vorwerk");
        break;
    }
    case 9352:
    {
        returnValue = F("Altes W");
        break;
    }
    case 9353:
    {
        returnValue = F("Altes Walzwerk");
        break;
    }
    case 9354:
    {
        returnValue = F("Altes Wasserwerk");
        break;
    }
    case 9355:
    {
        returnValue = F("Altes Werk");
        break;
    }
    case 9356:
    {
        returnValue = F("Altes Zeughausgäßchen");
        break;
    }
    case 9357:
    {
        returnValue = F("Altes Zollhaus");
        break;
    }
    case 9358:
    {
        returnValue = F("Altes Ölfeld");
        break;
    }
    case 9359:
    {
        returnValue = F("Altes Öschelbronner Sträßle");
        break;
    }
    case 9360:
    {
        returnValue = F("Altessinger Weg");
        break;
    }
    case 9361:
    {
        returnValue = F("Altestr.");
        break;
    }
    case 9362:
    {
        returnValue = F("Altetopfstr.");
        break;
    }
    case 9363:
    {
        returnValue = F("Alteweg");
        break;
    }
    case 9364:
    {
        returnValue = F("Altewiekring");
        break;
    }
    case 9365:
    {
        returnValue = F("Altfalterbach");
        break;
    }
    case 9366:
    {
        returnValue = F("Altfalterbacher Str.");
        break;
    }
    case 9367:
    {
        returnValue = F("Altfalterer Str.");
        break;
    }
    case 9368:
    {
        returnValue = F("Altfehnstr.");
        break;
    }
    case 9369:
    {
        returnValue = F("Altfehnsweg");
        break;
    }
    case 9370:
    {
        returnValue = F("Altfeld");
        break;
    }
    case 9371:
    {
        returnValue = F("Altfelder Str.");
        break;
    }
    case 9372:
    {
        returnValue = F("Altfelder Weg");
        break;
    }
    case 9373:
    {
        returnValue = F("Altfelderhof");
        break;
    }
    case 9374:
    {
        returnValue = F("Altfeldring");
        break;
    }
    case 9375:
    {
        returnValue = F("Altfeldstr.");
        break;
    }
    case 9376:
    {
        returnValue = F("Altfeldweg");
        break;
    }
    case 9377:
    {
        returnValue = F("Altfelixstr.");
        break;
    }
    case 9378:
    {
        returnValue = F("Altforweilerstr.");
        break;
    }
    case 9379:
    {
        returnValue = F("Altfrankener Weg");
        break;
    }
    case 9380:
    {
        returnValue = F("Altfrauenweg");
        break;
    }
    case 9381:
    {
        returnValue = F("Altfraunhofener Str.");
        break;
    }
    case 9382:
    {
        returnValue = F("Altfrauwalder Str.");
        break;
    }
    case 9383:
    {
        returnValue = F("Altfridstr.");
        break;
    }
    case 9384:
    {
        returnValue = F("Altfriedhofstr.");
        break;
    }
    case 9385:
    {
        returnValue = F("Altfriedstein");
        break;
    }
    case 9386:
    {
        returnValue = F("Altfriedstr.");
        break;
    }
    case 9387:
    {
        returnValue = F("Altfriedweg");
        break;
    }
    case 9388:
    {
        returnValue = F("Altfunnixsiel");
        break;
    }
    case 9389:
    {
        returnValue = F("Altgandersheimer Str.");
        break;
    }
    case 9390:
    {
        returnValue = F("Altgarmssiel");
        break;
    }
    case 9391:
    {
        returnValue = F("Altgarmssieler Str.");
        break;
    }
    case 9392:
    {
        returnValue = F("Altgartacherweg");
        break;
    }
    case 9393:
    {
        returnValue = F("Altgarzer Str.");
        break;
    }
    case 9394:
    {
        returnValue = F("Altgasse");
        break;
    }
    case 9395:
    {
        returnValue = F("Altgassweg");
        break;
    }
    case 9396:
    {
        returnValue = F("Altgauder Weg");
        break;
    }
    case 9397:
    {
        returnValue = F("Altgaul");
        break;
    }
    case 9398:
    {
        returnValue = F("Altgaß");
        break;
    }
    case 9399:
    {
        returnValue = F("Altgemein");
        break;
    }
    case 9400:
    {
        returnValue = F("Altgeringswalder Str.");
        break;
    }
    case 9401:
    {
        returnValue = F("Altgernsdorf");
        break;
    }
    case 9402:
    {
        returnValue = F("Altglashütter Str.");
        break;
    }
    case 9403:
    {
        returnValue = F("Altglienicker Chaussee");
        break;
    }
    case 9404:
    {
        returnValue = F("Altglienicker Ring");
        break;
    }
    case 9405:
    {
        returnValue = F("Altgraben");
        break;
    }
    case 9406:
    {
        returnValue = F("Altgreutweg");
        break;
    }
    case 9407:
    {
        returnValue = F("Altgrochlitz");
        break;
    }
    case 9408:
    {
        returnValue = F("Altgödens");
        break;
    }
    case 9409:
    {
        returnValue = F("Altgödenserhörn");
        break;
    }
    case 9410:
    {
        returnValue = F("Althaldensleber Str.");
        break;
    }
    case 9411:
    {
        returnValue = F("Althammer");
        break;
    }
    case 9412:
    {
        returnValue = F("Althansstr.");
        break;
    }
    case 9413:
    {
        returnValue = F("Althansweg");
        break;
    }
    case 9414:
    {
        returnValue = F("Althardtweg");
        break;
    }
    case 9415:
    {
        returnValue = F("Altharlingersiel Ortskern");
        break;
    }
    case 9416:
    {
        returnValue = F("Althaselbrunn");
        break;
    }
    case 9417:
    {
        returnValue = F("Althau");
        break;
    }
    case 9418:
    {
        returnValue = F("Althaus");
        break;
    }
    case 9419:
    {
        returnValue = F("Althausenweg");
        break;
    }
    case 9420:
    {
        returnValue = F("Althausstr.");
        break;
    }
    case 9421:
    {
        returnValue = F("Althaustr.");
        break;
    }
    case 9422:
    {
        returnValue = F("Althausweg");
        break;
    }
    case 9423:
    {
        returnValue = F("Altheck");
        break;
    }
    case 9424:
    {
        returnValue = F("Altheider Str.");
        break;
    }
    case 9425:
    {
        returnValue = F("Altheider Weg");
        break;
    }
    case 9426:
    {
        returnValue = F("Altheimer Ring");
        break;
    }
    case 9427:
    {
        returnValue = F("Altheimer Str.");
        break;
    }
    case 9428:
    {
        returnValue = F("Altheimer Weg");
        break;
    }
    case 9429:
    {
        returnValue = F("Altheimerweg");
        break;
    }
    case 9430:
    {
        returnValue = F("Althener Str.");
        break;
    }
    case 9431:
    {
        returnValue = F("Althengstetter Str.");
        break;
    }
    case 9432:
    {
        returnValue = F("Altherrenweg, Romanshöheweg");
        break;
    }
    case 9433:
    {
        returnValue = F("Altheuweg");
        break;
    }
    case 9434:
    {
        returnValue = F("Altheydaer Str.");
        break;
    }
    case 9435:
    {
        returnValue = F("Althochlar");
        break;
    }
    case 9436:
    {
        returnValue = F("Althof");
        break;
    }
    case 9437:
    {
        returnValue = F("Althoffstr.");
        break;
    }
    case 9438:
    {
        returnValue = F("Althoffsweg");
        break;
    }
    case 9439:
    {
        returnValue = F("Althoffweg");
        break;
    }
    case 9440:
    {
        returnValue = F("Althofstr.");
        break;
    }
    case 9441:
    {
        returnValue = F("Althohl");
        break;
    }
    case 9442:
    {
        returnValue = F("Althohlstr.");
        break;
    }
    case 9443:
    {
        returnValue = F("Althohlweg");
        break;
    }
    case 9444:
    {
        returnValue = F("Altholzkrug");
        break;
    }
    case 9445:
    {
        returnValue = F("Altholzstr.");
        break;
    }
    case 9446:
    {
        returnValue = F("Altholzweg");
        break;
    }
    case 9447:
    {
        returnValue = F("Althornbacher Str.");
        break;
    }
    case 9448:
    {
        returnValue = F("Althorsbüll");
        break;
    }
    case 9449:
    {
        returnValue = F("Althorststr.");
        break;
    }
    case 9450:
    {
        returnValue = F("Althusiusstr.");
        break;
    }
    case 9451:
    {
        returnValue = F("Althusiusweg");
        break;
    }
    case 9452:
    {
        returnValue = F("Althäger Str.");
        break;
    }
    case 9453:
    {
        returnValue = F("Althäuleweg");
        break;
    }
    case 9454:
    {
        returnValue = F("Althäuser Str.");
        break;
    }
    case 9455:
    {
        returnValue = F("Althäuslesweg");
        break;
    }
    case 9456:
    {
        returnValue = F("Althöfer Weg");
        break;
    }
    case 9457:
    {
        returnValue = F("Althöhensteigstr.");
        break;
    }
    case 9458:
    {
        returnValue = F("Althönig");
        break;
    }
    case 9459:
    {
        returnValue = F("Althütte");
        break;
    }
    case 9460:
    {
        returnValue = F("Althüttendorfer Str.");
        break;
    }
    case 9461:
    {
        returnValue = F("Althüttenstr.");
        break;
    }
    case 9462:
    {
        returnValue = F("Althütter Str.");
        break;
    }
    case 9463:
    {
        returnValue = F("Altigweg");
        break;
    }
    case 9464:
    {
        returnValue = F("Altilmstr.");
        break;
    }
    case 9465:
    {
        returnValue = F("Altinger Str.");
        break;
    }
    case 9466:
    {
        returnValue = F("Altisrieder Str.");
        break;
    }
    case 9467:
    {
        returnValue = F("Altjemmeritzer");
        break;
    }
    case 9468:
    {
        returnValue = F("Altjemmeritzer Weg");
        break;
    }
    case 9469:
    {
        returnValue = F("Altjessen");
        break;
    }
    case 9470:
    {
        returnValue = F("Altjeßnitzer Str.");
        break;
    }
    case 9471:
    {
        returnValue = F("Altjocketaer Str.");
        break;
    }
    case 9472:
    {
        returnValue = F("Altjührdener Str.");
        break;
    }
    case 9473:
    {
        returnValue = F("Altkalener Str.");
        break;
    }
    case 9474:
    {
        returnValue = F("Altkalkarer Str.");
        break;
    }
    case 9475:
    {
        returnValue = F("Altkamp");
        break;
    }
    case 9476:
    {
        returnValue = F("Altkarlshof");
        break;
    }
    case 9477:
    {
        returnValue = F("Altkaslehen");
        break;
    }
    case 9478:
    {
        returnValue = F("Altkehdingen");
        break;
    }
    case 9479:
    {
        returnValue = F("Altkehdinger Weg");
        break;
    }
    case 9480:
    {
        returnValue = F("Altkellmünzer Weg");
        break;
    }
    case 9481:
    {
        returnValue = F("Altkevelaer Str.");
        break;
    }
    case 9482:
    {
        returnValue = F("Altkietz");
        break;
    }
    case 9483:
    {
        returnValue = F("Altkiez");
        break;
    }
    case 9484:
    {
        returnValue = F("Altkirchener Str.");
        break;
    }
    case 9485:
    {
        returnValue = F("Altkirchenweg");
        break;
    }
    case 9486:
    {
        returnValue = F("Altkircher Str.");
        break;
    }
    case 9487:
    {
        returnValue = F("Altkirchner Str.");
        break;
    }
    case 9488:
    {
        returnValue = F("Altkirchner Weg");
        break;
    }
    case 9489:
    {
        returnValue = F("Altkirchstr.");
        break;
    }
    case 9490:
    {
        returnValue = F("Altklef");
        break;
    }
    case 9491:
    {
        returnValue = F("Altklessiner Weg");
        break;
    }
    case 9492:
    {
        returnValue = F("Altklosterbergstr.");
        break;
    }
    case 9493:
    {
        returnValue = F("Altklosterweg");
        break;
    }
    case 9494:
    {
        returnValue = F("Altknissener Str.");
        break;
    }
    case 9495:
    {
        returnValue = F("Altkrapohl");
        break;
    }
    case 9496:
    {
        returnValue = F("Altkrautheimer Str.");
        break;
    }
    case 9497:
    {
        returnValue = F("Altkönigblick");
        break;
    }
    case 9498:
    {
        returnValue = F("Altkönigstr.");
        break;
    }
    case 9499:
    {
        returnValue = F("Altkönigweg");
        break;
    }
    case 9500:
    {
        returnValue = F("Altköpsen");
        break;
    }
    case 9501:
    {
        returnValue = F("Altkötzschenbroda");
        break;
    }
    case 9502:
    {
        returnValue = F("Altkünkendorfer Str.");
        break;
    }
    case 9503:
    {
        returnValue = F("Altland");
        break;
    }
    case 9504:
    {
        returnValue = F("Altlandsberger Chaussee");
        break;
    }
    case 9505:
    {
        returnValue = F("Altlandsberger Str.");
        break;
    }
    case 9506:
    {
        returnValue = F("Altlandsberger Weg");
        break;
    }
    case 9507:
    {
        returnValue = F("Altlangsow");
        break;
    }
    case 9508:
    {
        returnValue = F("Altlangsower Friedhofsweg");
        break;
    }
    case 9509:
    {
        returnValue = F("Altlaufstr.");
        break;
    }
    case 9510:
    {
        returnValue = F("Altlausaer Weg");
        break;
    }
    case 9511:
    {
        returnValue = F("Altleininger Str.");
        break;
    }
    case 9512:
    {
        returnValue = F("Altleininger Weg");
        break;
    }
    case 9513:
    {
        returnValue = F("Altleisnig");
        break;
    }
    case 9514:
    {
        returnValue = F("Altlewin");
        break;
    }
    case 9515:
    {
        returnValue = F("Altlindenau");
        break;
    }
    case 9516:
    {
        returnValue = F("Altlohe");
        break;
    }
    case 9517:
    {
        returnValue = F("Altlommatzsch");
        break;
    }
    case 9518:
    {
        returnValue = F("Altlomnitzer Str.");
        break;
    }
    case 9519:
    {
        returnValue = F("Altluneberger Str.");
        break;
    }
    case 9520:
    {
        returnValue = F("Altlußheimer Str.");
        break;
    }
    case 9521:
    {
        returnValue = F("Altlußheimer Weg");
        break;
    }
    case 9522:
    {
        returnValue = F("Altlußheimring");
        break;
    }
    case 9523:
    {
        returnValue = F("Altländer Markt");
        break;
    }
    case 9524:
    {
        returnValue = F("Altländer Mühlenweg");
        break;
    }
    case 9525:
    {
        returnValue = F("Altländer Ring");
        break;
    }
    case 9526:
    {
        returnValue = F("Altländer Str.");
        break;
    }
    case 9527:
    {
        returnValue = F("Altlöbauer Siedlung");
        break;
    }
    case 9528:
    {
        returnValue = F("Altlöbauer Str.");
        break;
    }
    case 9529:
    {
        returnValue = F("Altlöbauer Viebig");
        break;
    }
    case 9530:
    {
        returnValue = F("Altlöhrtor");
        break;
    }
    case 9531:
    {
        returnValue = F("Altmachern");
        break;
    }
    case 9532:
    {
        returnValue = F("Altmai");
        break;
    }
    case 9533:
    {
        returnValue = F("Altmainstr.");
        break;
    }
    case 9534:
    {
        returnValue = F("Altmanngasse");
        break;
    }
    case 9535:
    {
        returnValue = F("Altmanns Kamp");
        break;
    }
    case 9536:
    {
        returnValue = F("Altmanns Knapp");
        break;
    }
    case 9537:
    {
        returnValue = F("Altmannsgrüner Kirchsteig");
        break;
    }
    case 9538:
    {
        returnValue = F("Altmannsgrüner Str.");
        break;
    }
    case 9539:
    {
        returnValue = F("Altmannshausen");
        break;
    }
    case 9540:
    {
        returnValue = F("Altmannshof");
        break;
    }
    case 9541:
    {
        returnValue = F("Altmannshäuser Str.");
        break;
    }
    case 9542:
    {
        returnValue = F("Altmannskinden");
        break;
    }
    case 9543:
    {
        returnValue = F("Altmannsteiner Str.");
        break;
    }
    case 9544:
    {
        returnValue = F("Altmannstetten");
        break;
    }
    case 9545:
    {
        returnValue = F("Altmannstr.");
        break;
    }
    case 9546:
    {
        returnValue = F("Altmannweg");
        break;
    }
    case 9547:
    {
        returnValue = F("Altmarkring");
        break;
    }
    case 9548:
    {
        returnValue = F("Altmarkstr.");
        break;
    }
    case 9549:
    {
        returnValue = F("Altmarkt");
        break;
    }
    case 9550:
    {
        returnValue = F("Altmarkt Passage");
        break;
    }
    case 9551:
    {
        returnValue = F("Altmarktgäßchen");
        break;
    }
    case 9552:
    {
        returnValue = F("Altmarkweg");
        break;
    }
    case 9553:
    {
        returnValue = F("Altmarweg");
        break;
    }
    case 9554:
    {
        returnValue = F("Altmattblick");
        break;
    }
    case 9555:
    {
        returnValue = F("Altmauerweg");
        break;
    }
    case 9556:
    {
        returnValue = F("Altmeppener Hof");
        break;
    }
    case 9557:
    {
        returnValue = F("Altmerberen");
        break;
    }
    case 9558:
    {
        returnValue = F("Altmerdingser Str.");
        break;
    }
    case 9559:
    {
        returnValue = F("Altmerslebener Weg");
        break;
    }
    case 9560:
    {
        returnValue = F("Altmittweidaer Weg");
        break;
    }
    case 9561:
    {
        returnValue = F("Altmugl");
        break;
    }
    case 9562:
    {
        returnValue = F("Altmummen");
        break;
    }
    case 9563:
    {
        returnValue = F("Altmurgweg");
        break;
    }
    case 9564:
    {
        returnValue = F("Altmutterweg");
        break;
    }
    case 9565:
    {
        returnValue = F("Altmyhler Str.");
        break;
    }
    case 9566:
    {
        returnValue = F("Altmärker Privatstr.");
        break;
    }
    case 9567:
    {
        returnValue = F("Altmärker Str.");
        break;
    }
    case 9568:
    {
        returnValue = F("Altmärkerstr.");
        break;
    }
    case 9569:
    {
        returnValue = F("Altmörbitzer Hauptstr.");
        break;
    }
    case 9570:
    {
        returnValue = F("Altmörbitzer Str.");
        break;
    }
    case 9571:
    {
        returnValue = F("Altmügelner Str.");
        break;
    }
    case 9572:
    {
        returnValue = F("Altmühl");
        break;
    }
    case 9573:
    {
        returnValue = F("Altmühl Radweg");
        break;
    }
    case 9574:
    {
        returnValue = F("Altmühlbachtal");
        break;
    }
    case 9575:
    {
        returnValue = F("Altmühlbogen");
        break;
    }
    case 9576:
    {
        returnValue = F("Altmühle");
        break;
    }
    case 9577:
    {
        returnValue = F("Altmühlen");
        break;
    }
    case 9578:
    {
        returnValue = F("Altmühlenfeld");
        break;
    }
    case 9579:
    {
        returnValue = F("Altmühlenstr.");
        break;
    }
    case 9580:
    {
        returnValue = F("Altmühlenweg");
        break;
    }
    case 9581:
    {
        returnValue = F("Altmühler Str.");
        break;
    }
    case 9582:
    {
        returnValue = F("Altmühleweg");
        break;
    }
    case 9583:
    {
        returnValue = F("Altmühlgasse");
        break;
    }
    case 9584:
    {
        returnValue = F("Altmühlhaag");
        break;
    }
    case 9585:
    {
        returnValue = F("Altmühlhausen");
        break;
    }
    case 9586:
    {
        returnValue = F("Altmühlring");
        break;
    }
    case 9587:
    {
        returnValue = F("Altmühlstr.");
        break;
    }
    case 9588:
    {
        returnValue = F("Altmühltaler Panoramaweg");
        break;
    }
    case 9589:
    {
        returnValue = F("Altmühltalradweg");
        break;
    }
    case 9590:
    {
        returnValue = F("Altmühlweg");
        break;
    }
    case 9591:
    {
        returnValue = F("Altmühlwehr Kratzmühle");
        break;
    }
    case 9592:
    {
        returnValue = F("Altmülfort");
        break;
    }
    case 9593:
    {
        returnValue = F("Altmüllerstr.");
        break;
    }
    case 9594:
    {
        returnValue = F("Altmüllervieh");
        break;
    }
    case 9595:
    {
        returnValue = F("Altmünsterschneise");
        break;
    }
    case 9596:
    {
        returnValue = F("Altmünsterstr.");
        break;
    }
    case 9597:
    {
        returnValue = F("Altnachtstr.");
        break;
    }
    case 9598:
    {
        returnValue = F("Altnachweg");
        break;
    }
    case 9599:
    {
        returnValue = F("Altnaundorf");
        break;
    }
    case 9600:
    {
        returnValue = F("Altneudorfer Str.");
        break;
    }
    case 9601:
    {
        returnValue = F("Altneugasse");
        break;
    }
    case 9602:
    {
        returnValue = F("Altneuhauser Str.");
        break;
    }
    case 9603:
    {
        returnValue = F("Altneurott");
        break;
    }
    case 9604:
    {
        returnValue = F("Altnuifraer Str.");
        break;
    }
    case 9605:
    {
        returnValue = F("Altomontestr.");
        break;
    }
    case 9606:
    {
        returnValue = F("Altomünster Str.");
        break;
    }
    case 9607:
    {
        returnValue = F("Altomünsterstr.");
        break;
    }
    case 9608:
    {
        returnValue = F("Altona");
        break;
    }
    case 9609:
    {
        returnValue = F("Altonaer Chaussee");
        break;
    }
    case 9610:
    {
        returnValue = F("Altonaer Hof");
        break;
    }
    case 9611:
    {
        returnValue = F("Altonaer Ring");
        break;
    }
    case 9612:
    {
        returnValue = F("Altonaer Str.");
        break;
    }
    case 9613:
    {
        returnValue = F("Altonaer Weg");
        break;
    }
    case 9614:
    {
        returnValue = F("Altonastr.");
        break;
    }
    case 9615:
    {
        returnValue = F("Altonauweg");
        break;
    }
    case 9616:
    {
        returnValue = F("Altoner Weg");
        break;
    }
    case 9617:
    {
        returnValue = F("Altoppitzscher Str.");
        break;
    }
    case 9618:
    {
        returnValue = F("Altoschatzer Str.");
        break;
    }
    case 9619:
    {
        returnValue = F("Altostr.");
        break;
    }
    case 9620:
    {
        returnValue = F("Altoweg");
        break;
    }
    case 9621:
    {
        returnValue = F("Altperverstr.");
        break;
    }
    case 9622:
    {
        returnValue = F("Altpforter Str.");
        break;
    }
    case 9623:
    {
        returnValue = F("Altpoderschau");
        break;
    }
    case 9624:
    {
        returnValue = F("Altpoderschauer Str.");
        break;
    }
    case 9625:
    {
        returnValue = F("Altpoderschauer Weg");
        break;
    }
    case 9626:
    {
        returnValue = F("Altpöhlaer Str.");
        break;
    }
    case 9627:
    {
        returnValue = F("Altrabener Weg");
        break;
    }
    case 9628:
    {
        returnValue = F("Altrangen");
        break;
    }
    case 9629:
    {
        returnValue = F("Altrankhaldeweg");
        break;
    }
    case 9630:
    {
        returnValue = F("Altranstädter Weg");
        break;
    }
    case 9631:
    {
        returnValue = F("Altrath");
        break;
    }
    case 9632:
    {
        returnValue = F("Altrathausplatz");
        break;
    }
    case 9633:
    {
        returnValue = F("Altrehlings");
        break;
    }
    case 9634:
    {
        returnValue = F("Altreiße");
        break;
    }
    case 9635:
    {
        returnValue = F("Altremdaer Berg");
        break;
    }
    case 9636:
    {
        returnValue = F("Altremdaer Str.");
        break;
    }
    case 9637:
    {
        returnValue = F("Altrenzener Weg");
        break;
    }
    case 9638:
    {
        returnValue = F("Altreuther Weg");
        break;
    }
    case 9639:
    {
        returnValue = F("Altreuthstr.");
        break;
    }
    case 9640:
    {
        returnValue = F("Altreuthweg");
        break;
    }
    case 9641:
    {
        returnValue = F("Altrheder Kamp");
        break;
    }
    case 9642:
    {
        returnValue = F("Altrheinbogen");
        break;
    }
    case 9643:
    {
        returnValue = F("Altrheinbrücke");
        break;
    }
    case 9644:
    {
        returnValue = F("Altrheinpfad");
        break;
    }
    case 9645:
    {
        returnValue = F("Altrheinstr.");
        break;
    }
    case 9646:
    {
        returnValue = F("Altrheinweg");
        break;
    }
    case 9647:
    {
        returnValue = F("Altricher Weg");
        break;
    }
    case 9648:
    {
        returnValue = F("Altrichstr.");
        break;
    }
    case 9649:
    {
        returnValue = F("Altriedener Str.");
        break;
    }
    case 9650:
    {
        returnValue = F("Altriper Str.");
        break;
    }
    case 9651:
    {
        returnValue = F("Altrohlauer Str.");
        break;
    }
    case 9652:
    {
        returnValue = F("Altrottmannsdorf");
        break;
    }
    case 9653:
    {
        returnValue = F("Altrottmannsdorfer Str.");
        break;
    }
    case 9654:
    {
        returnValue = F("Altrottstr.");
        break;
    }
    case 9655:
    {
        returnValue = F("Altsaalfelder Str.");
        break;
    }
    case 9656:
    {
        returnValue = F("Altsattel");
        break;
    }
    case 9657:
    {
        returnValue = F("Altschauerberg");
        break;
    }
    case 9658:
    {
        returnValue = F("Altscherbitzer Str.");
        break;
    }
    case 9659:
    {
        returnValue = F("Altscheuer");
        break;
    }
    case 9660:
    {
        returnValue = F("Altscheuern");
        break;
    }
    case 9661:
    {
        returnValue = F("Altschlagschneise");
        break;
    }
    case 9662:
    {
        returnValue = F("Altschlossweg");
        break;
    }
    case 9663:
    {
        returnValue = F("Altschloßstr.");
        break;
    }
    case 9664:
    {
        returnValue = F("Altschloßweg");
        break;
    }
    case 9665:
    {
        returnValue = F("Altschmattsattelweg");
        break;
    }
    case 9666:
    {
        returnValue = F("Altschmeierstr.");
        break;
    }
    case 9667:
    {
        returnValue = F("Altschmiede");
        break;
    }
    case 9668:
    {
        returnValue = F("Altschmiedestr.");
        break;
    }
    case 9669:
    {
        returnValue = F("Altschmitshauser Str.");
        break;
    }
    case 9670:
    {
        returnValue = F("Altschneid");
        break;
    }
    case 9671:
    {
        returnValue = F("Altschrenkenthal");
        break;
    }
    case 9672:
    {
        returnValue = F("Altschulmeisterweg");
        break;
    }
    case 9673:
    {
        returnValue = F("Altschulzenweg");
        break;
    }
    case 9674:
    {
        returnValue = F("Altschwambach");
        break;
    }
    case 9675:
    {
        returnValue = F("Altschwande");
        break;
    }
    case 9676:
    {
        returnValue = F("Altschweierer Str.");
        break;
    }
    case 9677:
    {
        returnValue = F("Altschwoogstr.");
        break;
    }
    case 9678:
    {
        returnValue = F("Altschönauer Str.");
        break;
    }
    case 9679:
    {
        returnValue = F("Altseestr.");
        break;
    }
    case 9680:
    {
        returnValue = F("Altseitersweg");
        break;
    }
    case 9681:
    {
        returnValue = F("Altserkowitz");
        break;
    }
    case 9682:
    {
        returnValue = F("Altshausener Str.");
        break;
    }
    case 9683:
    {
        returnValue = F("Altshauser Str.");
        break;
    }
    case 9684:
    {
        returnValue = F("Altsheimer Weg");
        break;
    }
    case 9685:
    {
        returnValue = F("Altsiedlerweg");
        break;
    }
    case 9686:
    {
        returnValue = F("Altsiedlung");
        break;
    }
    case 9687:
    {
        returnValue = F("Altsorgefeld");
        break;
    }
    case 9688:
    {
        returnValue = F("Altspeyerer Str.");
        break;
    }
    case 9689:
    {
        returnValue = F("Altspeyerer Weide");
        break;
    }
    case 9690:
    {
        returnValue = F("Altsprucke");
        break;
    }
    case 9691:
    {
        returnValue = F("Altspöcksträßle");
        break;
    }
    case 9692:
    {
        returnValue = F("Altstadt");
        break;
    }
    case 9693:
    {
        returnValue = F("Altstadt Passage");
        break;
    }
    case 9694:
    {
        returnValue = F("Altstadt Steg");
        break;
    }
    case 9695:
    {
        returnValue = F("Altstadtblick");
        break;
    }
    case 9696:
    {
        returnValue = F("Altstadtbrücke");
        break;
    }
    case 9697:
    {
        returnValue = F("Altstadtbunker");
        break;
    }
    case 9698:
    {
        returnValue = F("Altstadter Str.");
        break;
    }
    case 9699:
    {
        returnValue = F("Altstadthof");
        break;
    }
    case 9700:
    {
        returnValue = F("Altstadtparkplatz");
        break;
    }
    case 9701:
    {
        returnValue = F("Altstadtpassage");
        break;
    }
    case 9702:
    {
        returnValue = F("Altstadtplatz");
        break;
    }
    case 9703:
    {
        returnValue = F("Altstadtplatz Baumberg");
        break;
    }
    case 9704:
    {
        returnValue = F("Altstadtring");
        break;
    }
    case 9705:
    {
        returnValue = F("Altstadtsteig");
        break;
    }
    case 9706:
    {
        returnValue = F("Altstadtstr.");
        break;
    }
    case 9707:
    {
        returnValue = F("Altstadtweg");
        break;
    }
    case 9708:
    {
        returnValue = F("Altstaedter Berg");
        break;
    }
    case 9709:
    {
        returnValue = F("Altstammbacher Str.");
        break;
    }
    case 9710:
    {
        returnValue = F("Altstattweg");
        break;
    }
    case 9711:
    {
        returnValue = F("Altsteeg");
        break;
    }
    case 9712:
    {
        returnValue = F("Altstein");
        break;
    }
    case 9713:
    {
        returnValue = F("Altsteiner Weg");
        break;
    }
    case 9714:
    {
        returnValue = F("Altsteußlinger Str.");
        break;
    }
    case 9715:
    {
        returnValue = F("Altstr.");
        break;
    }
    case 9716:
    {
        returnValue = F("Altstr.nschlucht");
        break;
    }
    case 9717:
    {
        returnValue = F("Altstrauchweg");
        break;
    }
    case 9718:
    {
        returnValue = F("Altstädter Brücke");
        break;
    }
    case 9719:
    {
        returnValue = F("Altstädter Feld");
        break;
    }
    case 9720:
    {
        returnValue = F("Altstädter Friedhof");
        break;
    }
    case 9721:
    {
        returnValue = F("Altstädter Gasse");
        break;
    }
    case 9722:
    {
        returnValue = F("Altstädter Graben");
        break;
    }
    case 9723:
    {
        returnValue = F("Altstädter Gärten");
        break;
    }
    case 9724:
    {
        returnValue = F("Altstädter Hauptstr.");
        break;
    }
    case 9725:
    {
        returnValue = F("Altstädter Kirchenweg");
        break;
    }
    case 9726:
    {
        returnValue = F("Altstädter Kirchgasse");
        break;
    }
    case 9727:
    {
        returnValue = F("Altstädter Kirchplatz");
        break;
    }
    case 9728:
    {
        returnValue = F("Altstädter Markt");
        break;
    }
    case 9729:
    {
        returnValue = F("Altstädter Platz");
        break;
    }
    case 9730:
    {
        returnValue = F("Altstädter Ring");
        break;
    }
    case 9731:
    {
        returnValue = F("Altstädter Stobenstr.");
        break;
    }
    case 9732:
    {
        returnValue = F("Altstädter Str.");
        break;
    }
    case 9733:
    {
        returnValue = F("Altstädter Weg");
        break;
    }
    case 9734:
    {
        returnValue = F("Altstädtische Fischerstr.");
        break;
    }
    case 9735:
    {
        returnValue = F("Altstädtische Große Heidestr.");
        break;
    }
    case 9736:
    {
        returnValue = F("Altstädtische Kleine Heidestr.");
        break;
    }
    case 9737:
    {
        returnValue = F("Altstädtische Wassertorpromenade");
        break;
    }
    case 9738:
    {
        returnValue = F("Altstädtische Wassertorstr.");
        break;
    }
    case 9739:
    {
        returnValue = F("Altstädtischer Kietz");
        break;
    }
    case 9740:
    {
        returnValue = F("Altstädtischer Markt");
        break;
    }
    case 9741:
    {
        returnValue = F("Alttal");
        break;
    }
    case 9742:
    {
        returnValue = F("Alttanner Str.");
        break;
    }
    case 9743:
    {
        returnValue = F("Alttanner Weg");
        break;
    }
    case 9744:
    {
        returnValue = F("Altteichweg");
        break;
    }
    case 9745:
    {
        returnValue = F("Altthymener Dorfstr.");
        break;
    }
    case 9746:
    {
        returnValue = F("Alttiefenwegerstr.");
        break;
    }
    case 9747:
    {
        returnValue = F("Alttrebbiner Dorfstr.");
        break;
    }
    case 9748:
    {
        returnValue = F("Alttrebbiner Hauptstr.");
        break;
    }
    case 9749:
    {
        returnValue = F("Alttrotterweg");
        break;
    }
    case 9750:
    {
        returnValue = F("Altufer");
        break;
    }
    case 9751:
    {
        returnValue = F("Altung");
        break;
    }
    case 9752:
    {
        returnValue = F("Altungstr.");
        break;
    }
    case 9753:
    {
        returnValue = F("Altusrieder Str.");
        break;
    }
    case 9754:
    {
        returnValue = F("Altvadderlessteg");
        break;
    }
    case 9755:
    {
        returnValue = F("Altvadderlesweg");
        break;
    }
    case 9756:
    {
        returnValue = F("Altvater-Str.");
        break;
    }
    case 9757:
    {
        returnValue = F("Altvatergebirgsweg");
        break;
    }
    case 9758:
    {
        returnValue = F("Altvaterring");
        break;
    }
    case 9759:
    {
        returnValue = F("Altvaterstr.");
        break;
    }
    case 9760:
    {
        returnValue = F("Altvaterweg");
        break;
    }
    case 9761:
    {
        returnValue = F("Altverhängweg");
        break;
    }
    case 9762:
    {
        returnValue = F("Altvogtsburg");
        break;
    }
    case 9763:
    {
        returnValue = F("Altvolberg");
        break;
    }
    case 9764:
    {
        returnValue = F("Altvätersteig");
        break;
    }
    case 9765:
    {
        returnValue = F("Altwahnsdorf");
        break;
    }
    case 9766:
    {
        returnValue = F("Altwaldenburger Str.");
        break;
    }
    case 9767:
    {
        returnValue = F("Altwasser");
        break;
    }
    case 9768:
    {
        returnValue = F("Altwasserstr.");
        break;
    }
    case 9769:
    {
        returnValue = F("Altwasserweg");
        break;
    }
    case 9770:
    {
        returnValue = F("Altweg");
        break;
    }
    case 9771:
    {
        returnValue = F("Altwegstr.");
        break;
    }
    case 9772:
    {
        returnValue = F("Altweiberweg");
        break;
    }
    case 9773:
    {
        returnValue = F("Altweichelau");
        break;
    }
    case 9774:
    {
        returnValue = F("Altweid");
        break;
    }
    case 9775:
    {
        returnValue = F("Altweidaer Str.");
        break;
    }
    case 9776:
    {
        returnValue = F("Altweide");
        break;
    }
    case 9777:
    {
        returnValue = F("Altweidelbacher Str.");
        break;
    }
    case 9778:
    {
        returnValue = F("Altweiher");
        break;
    }
    case 9779:
    {
        returnValue = F("Altweiherstr.");
        break;
    }
    case 9780:
    {
        returnValue = F("Altweiherweg");
        break;
    }
    case 9781:
    {
        returnValue = F("Altweinhölzchen");
        break;
    }
    case 9782:
    {
        returnValue = F("Altwerdumer Grashaus");
        break;
    }
    case 9783:
    {
        returnValue = F("Altwerk");
        break;
    }
    case 9784:
    {
        returnValue = F("Altwettener-Weg");
        break;
    }
    case 9785:
    {
        returnValue = F("Altwetterade");
        break;
    }
    case 9786:
    {
        returnValue = F("Altwickerstr.");
        break;
    }
    case 9787:
    {
        returnValue = F("Altwieder Str.");
        break;
    }
    case 9788:
    {
        returnValue = F("Altwiedermuser Str.");
        break;
    }
    case 9789:
    {
        returnValue = F("Altwiedermuser Weg");
        break;
    }
    case 9790:
    {
        returnValue = F("Altwies");
        break;
    }
    case 9791:
    {
        returnValue = F("Altwiese");
        break;
    }
    case 9792:
    {
        returnValue = F("Altwiesenpark");
        break;
    }
    case 9793:
    {
        returnValue = F("Altwiesenring");
        break;
    }
    case 9794:
    {
        returnValue = F("Altwiesenstr.");
        break;
    }
    case 9795:
    {
        returnValue = F("Altwiesenweg");
        break;
    }
    case 9796:
    {
        returnValue = F("Altwieserweg");
        break;
    }
    case 9797:
    {
        returnValue = F("Altwieslocher Str.");
        break;
    }
    case 9798:
    {
        returnValue = F("Altwiesseer Weg");
        break;
    }
    case 9799:
    {
        returnValue = F("Altwiesstr.");
        break;
    }
    case 9800:
    {
        returnValue = F("Altwildunger Str.");
        break;
    }
    case 9801:
    {
        returnValue = F("Altwilmsdorfer Str.");
        break;
    }
    case 9802:
    {
        returnValue = F("Altwingertweg");
        break;
    }
    case 9803:
    {
        returnValue = F("Altwismarstr.");
        break;
    }
    case 9804:
    {
        returnValue = F("Altwistedter Dorfstr.");
        break;
    }
    case 9805:
    {
        returnValue = F("Altwistedter Str.");
        break;
    }
    case 9806:
    {
        returnValue = F("Altwittenbeker Str.");
        break;
    }
    case 9807:
    {
        returnValue = F("Altwriezen");
        break;
    }
    case 9808:
    {
        returnValue = F("Altwyk");
        break;
    }
    case 9809:
    {
        returnValue = F("Altzaschendorf");
        break;
    }
    case 9810:
    {
        returnValue = F("Altzitzschewig");
        break;
    }
    case 9811:
    {
        returnValue = F("Altzschillen");
        break;
    }
    case 9812:
    {
        returnValue = F("Altäckerstr.");
        break;
    }
    case 9813:
    {
        returnValue = F("Altöttinger Anger");
        break;
    }
    case 9814:
    {
        returnValue = F("Altöttinger Str.");
        break;
    }
    case 9815:
    {
        returnValue = F("Aluminiumallee");
        break;
    }
    case 9816:
    {
        returnValue = F("Aluminiumstr.");
        break;
    }
    case 9817:
    {
        returnValue = F("Aluminumbrücke");
        break;
    }
    case 9818:
    {
        returnValue = F("Alumnatstr.");
        break;
    }
    case 9819:
    {
        returnValue = F("Alustr.");
        break;
    }
    case 9820:
    {
        returnValue = F("Alva-Myrdal-Weg");
        break;
    }
    case 9821:
    {
        returnValue = F("Alvenslebenstr.");
        break;
    }
    case 9822:
    {
        returnValue = F("Alvenslebenweg");
        break;
    }
    case 9823:
    {
        returnValue = F("Alvensleber Landstr.");
        break;
    }
    case 9824:
    {
        returnValue = F("Alvensleber Str.");
        break;
    }
    case 9825:
    {
        returnValue = F("Alvensleber Weg");
        break;
    }
    case 9826:
    {
        returnValue = F("Alveradisstr.");
        break;
    }
    case 9827:
    {
        returnValue = F("Alverdingk");
        break;
    }
    case 9828:
    {
        returnValue = F("Alverdisser Str.");
        break;
    }
    case 9829:
    {
        returnValue = F("Alvermannsgrund");
        break;
    }
    case 9830:
    {
        returnValue = F("Alvern");
        break;
    }
    case 9831:
    {
        returnValue = F("Alvernsche Str.");
        break;
    }
    case 9832:
    {
        returnValue = F("Alvernscher Weg");
        break;
    }
    case 9833:
    {
        returnValue = F("Alversdorfer Str.");
        break;
    }
    case 9834:
    {
        returnValue = F("Alversdorfer Weg");
        break;
    }
    case 9835:
    {
        returnValue = F("Alverskamp");
        break;
    }
    case 9836:
    {
        returnValue = F("Alverskirchener Str.");
        break;
    }
    case 9837:
    {
        returnValue = F("Alvesener Heuweg");
        break;
    }
    case 9838:
    {
        returnValue = F("Alvesener Schulweg");
        break;
    }
    case 9839:
    {
        returnValue = F("Alveser Dorfstr.");
        break;
    }
    case 9840:
    {
        returnValue = F("Alveser Str.");
        break;
    }
    case 9841:
    {
        returnValue = F("Alvesloher Str.");
        break;
    }
    case 9842:
    {
        returnValue = F("Alvesroder Str.");
        break;
    }
    case 9843:
    {
        returnValue = F("Alvesser Str.");
        break;
    }
    case 9844:
    {
        returnValue = F("Alvesser Weg");
        break;
    }
    case 9845:
    {
        returnValue = F("Alvestaweg");
        break;
    }
    case 9846:
    {
        returnValue = F("Alvingheide");
        break;
    }
    case 9847:
    {
        returnValue = F("Alvslebenplatz");
        break;
    }
    case 9848:
    {
        returnValue = F("Alwes Kamp");
        break;
    }
    case 9849:
    {
        returnValue = F("Alwigstr.");
        break;
    }
    case 9850:
    {
        returnValue = F("Alwin-Brandes-Str.");
        break;
    }
    case 9851:
    {
        returnValue = F("Alwin-Brandt-Stieg");
        break;
    }
    case 9852:
    {
        returnValue = F("Alwin-Gerisch-Str.");
        break;
    }
    case 9853:
    {
        returnValue = F("Alwin-Klein-Str.");
        break;
    }
    case 9854:
    {
        returnValue = F("Alwin-Lensch-Str.");
        break;
    }
    case 9855:
    {
        returnValue = F("Alwin-Liebe-Str.");
        break;
    }
    case 9856:
    {
        returnValue = F("Alwin-May-Str.");
        break;
    }
    case 9857:
    {
        returnValue = F("Alwin-Micklisch-Weg");
        break;
    }
    case 9858:
    {
        returnValue = F("Alwin-Mittasch Str.");
        break;
    }
    case 9859:
    {
        returnValue = F("Alwin-Mittasch-Park");
        break;
    }
    case 9860:
    {
        returnValue = F("Alwin-Mittasch-Platz");
        break;
    }
    case 9861:
    {
        returnValue = F("Alwin-Richter-Weg");
        break;
    }
    case 9862:
    {
        returnValue = F("Alwin-Schmidt-Str.");
        break;
    }
    case 9863:
    {
        returnValue = F("Alwin-Walter-Str.");
        break;
    }
    case 9864:
    {
        returnValue = F("Alwindstr.");
        break;
    }
    case 9865:
    {
        returnValue = F("Alwine");
        break;
    }
    case 9866:
    {
        returnValue = F("Alwine-Heiliger-Str.");
        break;
    }
    case 9867:
    {
        returnValue = F("Alwine-Wuthenow-Ring");
        break;
    }
    case 9868:
    {
        returnValue = F("Alwineweg");
        break;
    }
    case 9869:
    {
        returnValue = F("Alwinstr.");
        break;
    }
    case 9870:
    {
        returnValue = F("Alzbach");
        break;
    }
    case 9871:
    {
        returnValue = F("Alzbrunnen");
        break;
    }
    case 9872:
    {
        returnValue = F("Alzenacher Weg");
        break;
    }
    case 9873:
    {
        returnValue = F("Alzenachstr.");
        break;
    }
    case 9874:
    {
        returnValue = F("Alzenauer Str.");
        break;
    }
    case 9875:
    {
        returnValue = F("Alzenauer Weg");
        break;
    }
    case 9876:
    {
        returnValue = F("Alzenaustr.");
        break;
    }
    case 9877:
    {
        returnValue = F("Alzenbacher Str.");
        break;
    }
    case 9878:
    {
        returnValue = F("Alzenberger Weg");
        break;
    }
    case 9879:
    {
        returnValue = F("Alzenbrunnenplanie");
        break;
    }
    case 9880:
    {
        returnValue = F("Alzenbühlweg");
        break;
    }
    case 9881:
    {
        returnValue = F("Alzendorfer Str.");
        break;
    }
    case 9882:
    {
        returnValue = F("Alzener Landstr.");
        break;
    }
    case 9883:
    {
        returnValue = F("Alzener Weg");
        break;
    }
    case 9884:
    {
        returnValue = F("Alzentalstr.");
        break;
    }
    case 9885:
    {
        returnValue = F("Alzer Seite");
        break;
    }
    case 9886:
    {
        returnValue = F("Alzerplatzweg");
        break;
    }
    case 9887:
    {
        returnValue = F("Alzerstr.");
        break;
    }
    case 9888:
    {
        returnValue = F("Alzerweg");
        break;
    }
    case 9889:
    {
        returnValue = F("Alzeyer Gasse");
        break;
    }
    case 9890:
    {
        returnValue = F("Alzeyer Nebenstr.");
        break;
    }
    case 9891:
    {
        returnValue = F("Alzeyer Pforte");
        break;
    }
    case 9892:
    {
        returnValue = F("Alzeyer Str.");
        break;
    }
    case 9893:
    {
        returnValue = F("Alzeyer Weg");
        break;
    }
    case 9894:
    {
        returnValue = F("Alzeyerberg");
        break;
    }
    case 9895:
    {
        returnValue = F("Alzgern");
        break;
    }
    case 9896:
    {
        returnValue = F("Alzgerner Str.");
        break;
    }
    case 9897:
    {
        returnValue = F("Alzheimergassl");
        break;
    }
    case 9898:
    {
        returnValue = F("Alzinger Feld");
        break;
    }
    case 9899:
    {
        returnValue = F("Alzring");
        break;
    }
    case 9900:
    {
        returnValue = F("Alzstr.");
        break;
    }
    case 9901:
    {
        returnValue = F("Alztalgasse");
        break;
    }
    case 9902:
    {
        returnValue = F("Alzweg");
        break;
    }
    case 9903:
    {
        returnValue = F("Am 4. Bruchweg");
        break;
    }
    case 9904:
    {
        returnValue = F("Am 5. Gradierwerk");
        break;
    }
    case 9905:
    {
        returnValue = F("Am AKKU");
        break;
    }
    case 9906:
    {
        returnValue = F("Am Aa-Kamp");
        break;
    }
    case 9907:
    {
        returnValue = F("Am Aabach");
        break;
    }
    case 9908:
    {
        returnValue = F("Am Aachener Hof");
        break;
    }
    case 9909:
    {
        returnValue = F("Am Aachener Tor");
        break;
    }
    case 9910:
    {
        returnValue = F("Am Aacher Berg");
        break;
    }
    case 9911:
    {
        returnValue = F("Am Aagarten");
        break;
    }
    case 9912:
    {
        returnValue = F("Am Aalbach");
        break;
    }
    case 9913:
    {
        returnValue = F("Am Aalbek");
        break;
    }
    case 9914:
    {
        returnValue = F("Am Aalberg");
        break;
    }
    case 9915:
    {
        returnValue = F("Am Aalfang");
        break;
    }
    case 9916:
    {
        returnValue = F("Am Aalfangpark");
        break;
    }
    case 9917:
    {
        returnValue = F("Am Aalkasten");
        break;
    }
    case 9918:
    {
        returnValue = F("Am Aalkaten");
        break;
    }
    case 9919:
    {
        returnValue = F("Am Aalkistensee");
        break;
    }
    case 9920:
    {
        returnValue = F("Am Aalteich");
        break;
    }
    case 9921:
    {
        returnValue = F("Am Aaracker");
        break;
    }
    case 9922:
    {
        returnValue = F("Am Aarbach");
        break;
    }
    case 9923:
    {
        returnValue = F("Am Abbau");
        break;
    }
    case 9924:
    {
        returnValue = F("Am Abdinghof");
        break;
    }
    case 9925:
    {
        returnValue = F("Am Abelhüttenberg");
        break;
    }
    case 9926:
    {
        returnValue = F("Am Abelitzkanal");
        break;
    }
    case 9927:
    {
        returnValue = F("Am Abelitzkanal-Nord");
        break;
    }
    case 9928:
    {
        returnValue = F("Am Abeloh");
        break;
    }
    case 9929:
    {
        returnValue = F("Am Abels Weingarten");
        break;
    }
    case 9930:
    {
        returnValue = F("Am Abelshof");
        break;
    }
    case 9931:
    {
        returnValue = F("Am Abendbach");
        break;
    }
    case 9932:
    {
        returnValue = F("Am Abendfrieden");
        break;
    }
    case 9933:
    {
        returnValue = F("Am Abendhaufen");
        break;
    }
    case 9934:
    {
        returnValue = F("Am Abendrasen");
        break;
    }
    case 9935:
    {
        returnValue = F("Am Abendsberg");
        break;
    }
    case 9936:
    {
        returnValue = F("Am Abensberg");
        break;
    }
    case 9937:
    {
        returnValue = F("Am Abenteuerspielplatz");
        break;
    }
    case 9938:
    {
        returnValue = F("Am Aberg");
        break;
    }
    case 9939:
    {
        returnValue = F("Am Abfanggraben");
        break;
    }
    case 9940:
    {
        returnValue = F("Am Abhang");
        break;
    }
    case 9941:
    {
        returnValue = F("Am Ablassacker");
        break;
    }
    case 9942:
    {
        returnValue = F("Am Ablasskreuz");
        break;
    }
    case 9943:
    {
        returnValue = F("Am Ablaß");
        break;
    }
    case 9944:
    {
        returnValue = F("Am Abrahamschacht");
        break;
    }
    case 9945:
    {
        returnValue = F("Am Abrahamstollen");
        break;
    }
    case 9946:
    {
        returnValue = F("Am Abrocksbach");
        break;
    }
    case 9947:
    {
        returnValue = F("Am Abteigarten");
        break;
    }
    case 9948:
    {
        returnValue = F("Am Abteihof");
        break;
    }
    case 9949:
    {
        returnValue = F("Am Abteiwald");
        break;
    }
    case 9950:
    {
        returnValue = F("Am Abtissenschlag");
        break;
    }
    case 9951:
    {
        returnValue = F("Am Abtsberg");
        break;
    }
    case 9952:
    {
        returnValue = F("Am Abtshof");
        break;
    }
    case 9953:
    {
        returnValue = F("Am Abtswald");
        break;
    }
    case 9954:
    {
        returnValue = F("Am Achalaich");
        break;
    }
    case 9955:
    {
        returnValue = F("Am Achdorfer Feld");
        break;
    }
    case 9956:
    {
        returnValue = F("Am Achener Hof");
        break;
    }
    case 9957:
    {
        returnValue = F("Am Achernsee");
        break;
    }
    case 9958:
    {
        returnValue = F("Am Acherrain");
        break;
    }
    case 9959:
    {
        returnValue = F("Am Achrain");
        break;
    }
    case 9960:
    {
        returnValue = F("Am Achsenhag");
        break;
    }
    case 9961:
    {
        returnValue = F("Am Achteck");
        break;
    }
    case 9962:
    {
        returnValue = F("Am Achterathshof");
        break;
    }
    case 9963:
    {
        returnValue = F("Am Achterhoff");
        break;
    }
    case 9964:
    {
        returnValue = F("Am Achterkamp");
        break;
    }
    case 9965:
    {
        returnValue = F("Am Achterliek");
        break;
    }
    case 9966:
    {
        returnValue = F("Am Achternberg");
        break;
    }
    case 9967:
    {
        returnValue = F("Am Achterplätzchen");
        break;
    }
    case 9968:
    {
        returnValue = F("Am Achterschlag");
        break;
    }
    case 9969:
    {
        returnValue = F("Am Achterstieg");
        break;
    }
    case 9970:
    {
        returnValue = F("Am Achterwasser");
        break;
    }
    case 9971:
    {
        returnValue = F("Am Achtlindenberg");
        break;
    }
    case 9972:
    {
        returnValue = F("Am Achtmannsgarten");
        break;
    }
    case 9973:
    {
        returnValue = F("Am Achursprung");
        break;
    }
    case 9974:
    {
        returnValue = F("Am Ackenbach");
        break;
    }
    case 9975:
    {
        returnValue = F("Am Acker");
        break;
    }
    case 9976:
    {
        returnValue = F("Am Ackerbach");
        break;
    }
    case 9977:
    {
        returnValue = F("Am Ackerberg");
        break;
    }
    case 9978:
    {
        returnValue = F("Am Ackerborn");
        break;
    }
    case 9979:
    {
        returnValue = F("Am Ackerbusch");
        break;
    }
    case 9980:
    {
        returnValue = F("Am Ackergraben");
        break;
    }
    case 9981:
    {
        returnValue = F("Am Ackergrund");
        break;
    }
    case 9982:
    {
        returnValue = F("Am Ackerhof");
        break;
    }
    case 9983:
    {
        returnValue = F("Am Ackerkreuz");
        break;
    }
    case 9984:
    {
        returnValue = F("Am Ackerköpfle");
        break;
    }
    case 9985:
    {
        returnValue = F("Am Ackerlandstadion");
        break;
    }
    case 9986:
    {
        returnValue = F("Am Ackerpfad");
        break;
    }
    case 9987:
    {
        returnValue = F("Am Ackerrain");
        break;
    }
    case 9988:
    {
        returnValue = F("Am Ackerse");
        break;
    }
    case 9989:
    {
        returnValue = F("Am Ackerwald");
        break;
    }
    case 9990:
    {
        returnValue = F("Am Ackerweg");
        break;
    }
    case 9991:
    {
        returnValue = F("Am Adalbertplatz");
        break;
    }
    case 9992:
    {
        returnValue = F("Am Adamsberg");
        break;
    }
    case 9993:
    {
        returnValue = F("Am Adamsgraben");
        break;
    }
    case 9994:
    {
        returnValue = F("Am Adamshäuschen");
        break;
    }
    case 9995:
    {
        returnValue = F("Am Addersoll");
        break;
    }
    case 9996:
    {
        returnValue = F("Am Addinggaster Tief");
        break;
    }
    case 9997:
    {
        returnValue = F("Am Adelbaum");
        break;
    }
    case 9998:
    {
        returnValue = F("Am Adelberg");
        break;
    }
    case 9999:
    {
        returnValue = F("Am Adeligen Holze");
        break;
    }
    case 10000:
    {
        returnValue = F("Am Adels");
        break;
    }
    case 356104:
    {
        returnValue = F("aceretum");
        break;
    }
    case 356105:
    {
        returnValue = F("alla hopp!");
        break;
    }
    case 356106:
    {
        returnValue = F("alla hopp! Anlage");
        break;
    }
    case 356107:
    {
        returnValue = F("alles überwachsen kaum ein Weg zu sehen");
        break;
    }
    case 356108:
    {
        returnValue = F("alt.-Korber-Weg");
        break;
    }
    case 356109:
    {
        returnValue = F("alte B240");
        break;
    }
    case 356110:
    {
        returnValue = F("alte B251");
        break;
    }
    case 356111:
    {
        returnValue = F("alte B35");
        break;
    }
    case 356112:
    {
        returnValue = F("alte Bahnstrecke");
        break;
    }
    case 356113:
    {
        returnValue = F("alte Bergalinger Str.");
        break;
    }
    case 356114:
    {
        returnValue = F("alte Bobbahn");
        break;
    }
    case 356115:
    {
        returnValue = F("alte Brücke");
        break;
    }
    case 356116:
    {
        returnValue = F("alte Deponie");
        break;
    }
    case 356117:
    {
        returnValue = F("alte Hochstr.");
        break;
    }
    case 356118:
    {
        returnValue = F("alte Hunsrückhöhenstr.");
        break;
    }
    case 356119:
    {
        returnValue = F("alte Kirchstr.");
        break;
    }
    case 356120:
    {
        returnValue = F("alte Kläranlage");
        break;
    }
    case 356121:
    {
        returnValue = F("alte MSC-Rennstrecke");
        break;
    }
    case 356122:
    {
        returnValue = F("alte Militäranlagen");
        break;
    }
    case 356123:
    {
        returnValue = F("alte Panzerspur");
        break;
    }
    case 356124:
    {
        returnValue = F("alte Pfaffrodaer Landstr.");
        break;
    }
    case 356125:
    {
        returnValue = F("alte Poststr.");
        break;
    }
    case 356126:
    {
        returnValue = F("alte Rodelbahn");
        break;
    }
    case 356127:
    {
        returnValue = F("alte Rübenbahntrasse Bad Lauchstädt-Schlettau");
        break;
    }
    case 356128:
    {
        returnValue = F("alte Salzstr.");
        break;
    }
    case 356129:
    {
        returnValue = F("alte Schiessbahn");
        break;
    }
    case 356130:
    {
        returnValue = F("alte Schwerstedter Str.");
        break;
    }
    case 356131:
    {
        returnValue = F("alte St2389");
        break;
    }
    case 356132:
    {
        returnValue = F("alte Str.ntrasse");
        break;
    }
    case 356133:
    {
        returnValue = F("alte Weg-Trasse");
        break;
    }
    case 356134:
    {
        returnValue = F("alter Bahndamm");
        break;
    }
    case 356135:
    {
        returnValue = F("alter Elsterweg II");
        break;
    }
    case 356136:
    {
        returnValue = F("alter Fensdorfer Weg");
        break;
    }
    case 356137:
    {
        returnValue = F("alter Forstmeisterweg");
        break;
    }
    case 356138:
    {
        returnValue = F("alter Fussgängertunnel");
        break;
    }
    case 356139:
    {
        returnValue = F("alter Fußstieg nach Isserstedt");
        break;
    }
    case 356140:
    {
        returnValue = F("alter Gabelweg");
        break;
    }
    case 356141:
    {
        returnValue = F("alter Geleitweg");
        break;
    }
    case 356142:
    {
        returnValue = F("alter Grenzweg");
        break;
    }
    case 356143:
    {
        returnValue = F("alter Hirsch");
        break;
    }
    case 356144:
    {
        returnValue = F("alter Hohlweg");
        break;
    }
    case 356145:
    {
        returnValue = F("alter Holzweg");
        break;
    }
    case 356146:
    {
        returnValue = F("alter Kirchhof \"Gebück");
        break;
    }
    case 356147:
    {
        returnValue = F("alter Kreuzweg");
        break;
    }
    case 356148:
    {
        returnValue = F("alter Kutscherweg");
        break;
    }
    case 356149:
    {
        returnValue = F("alter Obercrinitzer Rundweg");
        break;
    }
    case 356150:
    {
        returnValue = F("alter P-Weg");
        break;
    }
    case 356151:
    {
        returnValue = F("alter Postweg");
        break;
    }
    case 356152:
    {
        returnValue = F("alter SWV-Wanderweg");
        break;
    }
    case 356153:
    {
        returnValue = F("alter Schiessstand");
        break;
    }
    case 356154:
    {
        returnValue = F("alter Schulhof");
        break;
    }
    case 356155:
    {
        returnValue = F("alter Staufener Weg");
        break;
    }
    case 356156:
    {
        returnValue = F("alter Stellweg");
        break;
    }
    case 356157:
    {
        returnValue = F("alter Str.nverlauf");
        break;
    }
    case 356158:
    {
        returnValue = F("alter Triebweg");
        break;
    }
    case 356159:
    {
        returnValue = F("alter Verbindungsweg Hütten - Meseberg");
        break;
    }
    case 356160:
    {
        returnValue = F("alternativer Feengrotten-Kyffhäuser Wanderweg");
        break;
    }
    case 356161:
    {
        returnValue = F("altes Eiwaldsträßchen");
        break;
    }
    case 356162:
    {
        returnValue = F("am Anger");
        break;
    }
    case 356163:
    {
        returnValue = F("am Berndorfer Tor");
        break;
    }
    case 356164:
    {
        returnValue = F("am Gleis");
        break;
    }
    case 356165:
    {
        returnValue = F("am Mutnert");
        break;
    }
    case 356166:
    {
        returnValue = F("am Muttnert");
        break;
    }
    case 356167:
    {
        returnValue = F("am Reupolsberg");
        break;
    }
    case 356168:
    {
        returnValue = F("am Schlosspark");
        break;
    }
    case 356169:
    {
        returnValue = F("am Sportplatz");
        break;
    }
    case 356170:
    {
        returnValue = F("am Tairnbacher Fußweg");
        break;
    }
    case 356171:
    {
        returnValue = F("am Ziegelbusch");
        break;
    }
    case 356172:
    {
        returnValue = F("an den Bahnen entlang");
        break;
    }
    case 356173:
    {
        returnValue = F("an den Gärten");
        break;
    }
    case 356174:
    {
        returnValue = F("an der Böschungsoberkante");
        break;
    }
    case 356175:
    {
        returnValue = F("archäologischer Moorlehrpfad");
        break;
    }
    case 356176:
    {
        returnValue = F("ausschließlich Fußweg");
        break;
    }
    }
    return returnValue;
}
