CREATE DATABASE  IF NOT EXISTS `employee` /*!40100 DEFAULT CHARACTER SET utf8 */;
USE `employee`;
-- MySQL dump 10.13  Distrib 5.6.13, for Win32 (x86)
--
-- Host: 127.0.0.1    Database: employee
-- ------------------------------------------------------
-- Server version	5.6.16

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `employee`
--

DROP TABLE IF EXISTS `employee`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `employee` (
  `username` varchar(50) NOT NULL,
  `password` varchar(45) DEFAULT NULL,
  `name` varchar(45) DEFAULT NULL,
  `contact` varchar(45) DEFAULT NULL,
  `address` varchar(45) DEFAULT NULL,
  `dob` varchar(45) DEFAULT NULL,
  `bankacc` varchar(45) DEFAULT NULL,
  `email` varchar(45) DEFAULT NULL,
  `manager` varchar(45) DEFAULT NULL,
  `project` varchar(45) DEFAULT NULL,
  `performance_rep` varchar(45) DEFAULT NULL,
  `basic_pay` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`username`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `employee`
--

LOCK TABLES `employee` WRITE;
/*!40000 ALTER TABLE `employee` DISABLE KEYS */;
INSERT INTO `employee` VALUES ('',NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL),('a.keshri','djsjka2','anand keshri','9804833929',NULL,'4/6/1987','9847382929',NULL,'kushal srivastava','SRP analysis',NULL,'70000'),('a.mittal','dhsjjk','abhinav mittal','9874783829',NULL,'2/1/1979','89382778838',NULL,'rajat agrawal','RPA analysis',NULL,'50000'),('a.naweed','shshajs','akib khan','8739292303',NULL,'3/4/1987','9832728388',NULL,'abhijeet singh','SPA analysis',NULL,'80000'),('a.rahul','uipe3','rahul aggarwal','9873929392',NULL,'1/1/1982','9837282933',NULL,'kushal srivasatave','SAR datasystems',NULL,'80000'),('b.gupta','sjdiew','bharat gupta','9883272899',NULL,'1/5/1978','89372837289',NULL,'abhijeet singh','SAR datasystems',NULL,'90000'),('b.mohit','kjshajd','mohit bhatia','9893728292',NULL,'5/3/1980','9837278389',NULL,'abhijeet singh','SAR datasystems',NULL,'70000'),('babul','jack','babul dole','9873261723',NULL,'3/4/1979','7896382912',NULL,'kushal srivastava','SPA analysis',NULL,'60000'),('bendkhale','qwerty','devendra bendkhale','7896387482',NULL,'2/2/1982','9837282291',NULL,'rajat agrawal','SPA analysis',NULL,'70000'),('d.ojas','home','ojas deshpande','7894573628',NULL,'8/12/1981','9837261823',NULL,'anupam anad','Presentation',NULL,'65000'),('dheeraj','jdhsjk','dheeraj goswami','9832883738',NULL,'3/1/1989','7382989288',NULL,'kushal srivastava','SAR datasystems',NULL,'70000'),('k.ankit','krypt','ankit kumar','7896376707','#47,sec-19,pkt-2,delhi','7/10/1984','9876789436',NULL,'anupam anand','RPA systems',NULL,'60000'),('m.dinesh','dsffkj32','dinesh mahaur','9804838929',NULL,'3/6/1989','9837278392',NULL,'rajat agrawal','SAR datasystems',NULL,'80000'),('m.gaurav','shudh','gaurav madhukar','9837282919',NULL,'4/3/1986','8983728299',NULL,'rajat agrawal','Presentation',NULL,'83000'),('murali','hungry','murali raghu','7896364282',NULL,'9/11/1980','9837216273',NULL,'rajat agrawal','RPA systems',NULL,'50000'),('p.sambit','fast','sambit padhi','9876372838',NULL,'1/2/1978','9807329910',NULL,'kushal srivastava','Presentation',NULL,'45000'),('s.manish','hsjkak','manish sharma ','9847383882',NULL,'4/2/1978','8937288273',NULL,'anupam anand','SPA analysis',NULL,'70000'),('sukhpal','kjdsjdk','sukhpal singh','9847838992',NULL,'2/3/1987','9837294929',NULL,'anupam anand','Presentation',NULL,'60000');
/*!40000 ALTER TABLE `employee` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2014-03-05  5:08:47
