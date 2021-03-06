#include "AgentConnection.h"
#include "MysqlConnectionPool.h"

void AgentConnection::clearWarnings() {
	conn_->clearWarnings();
}

sql::Statement* AgentConnection::createStatement() {
	return conn_->createStatement();
}

void AgentConnection::close() {
	// ��Ҫ�޸�
	connection_pool_->freeConnection(this);
}

void AgentConnection::commit() {
	conn_->commit();
}

bool AgentConnection::getAutoCommit() {
	return conn_->getAutoCommit();
}

sql::SQLString AgentConnection::getCatalog() {
	return conn_->getCatalog();
}

sql::Driver* AgentConnection::getDriver() {
	return conn_->getDriver();
}

sql::SQLString AgentConnection::getSchema() {
	return conn_->getSchema();
}

sql::SQLString AgentConnection::getClientInfo() {
	return conn_->getClientInfo();
}

void AgentConnection::getClientOption(const sql::SQLString& optionName, void* optionValue) {
	conn_->getClientOption(optionName, optionValue);
}

sql::SQLString AgentConnection::getClientOption(const sql::SQLString& optionName) {
	return conn_->getClientOption(optionName);
}

sql::DatabaseMetaData* AgentConnection::getMetaData() {
	return conn_->getMetaData();
}

sql::enum_transaction_isolation AgentConnection::getTransactionIsolation() {
	return conn_->getTransactionIsolation();
}

const sql::SQLWarning* AgentConnection::getWarnings() {
	return conn_->getWarnings();
}

bool AgentConnection::isClosed() {
	return conn_->isClosed();
}

bool AgentConnection::isReadOnly() {
	return conn_->isReadOnly();
}

bool AgentConnection::isValid() {
	return conn_->isValid();
}

bool AgentConnection::reconnect() {
	return conn_->reconnect();
}

sql::SQLString AgentConnection::nativeSQL(const sql::SQLString& sql) {
	return conn_->nativeSQL(sql);
}

sql::PreparedStatement* AgentConnection::prepareStatement(const sql::SQLString& sql) {
	return conn_->prepareStatement(sql);
}

sql::PreparedStatement* AgentConnection::prepareStatement(const sql::SQLString& sql, int autoGeneratedKeys) {
	return conn_->prepareStatement(sql, autoGeneratedKeys);
}

sql::PreparedStatement* AgentConnection::prepareStatement(const sql::SQLString& sql, int* columnIndexes) {
	return conn_->prepareStatement(sql, columnIndexes);
}

sql::PreparedStatement* AgentConnection::prepareStatement(const sql::SQLString& sql, int resultSetType, int resultSetConcurrency) {
	return conn_->prepareStatement(sql, resultSetType, resultSetConcurrency);
}

sql::PreparedStatement* AgentConnection::prepareStatement(const sql::SQLString& sql, int resultSetType, int resultSetConcurrency, int resultSetHoldability) {
	return conn_->prepareStatement(sql, resultSetType, resultSetConcurrency, resultSetHoldability);
}

sql::PreparedStatement* AgentConnection::prepareStatement(const sql::SQLString& sql, sql::SQLString columnNames[]) {
	return conn_->prepareStatement(sql, columnNames);
}

void AgentConnection::releaseSavepoint(sql::Savepoint* savepoint) {
	conn_->releaseSavepoint(savepoint);
}

void AgentConnection::rollback() {
	conn_->rollback();
}

void AgentConnection::rollback(sql::Savepoint* savepoint) {
	conn_->rollback(savepoint);
}

void AgentConnection::setAutoCommit(bool autoCommit) {
	conn_->setAutoCommit(autoCommit);
}

void AgentConnection::setCatalog(const sql::SQLString& catalog) {
	conn_->setCatalog(catalog);
}

void AgentConnection::setSchema(const sql::SQLString& catalog) {
	conn_->setSchema(catalog);
}

sql::Connection* AgentConnection::setClientOption(const sql::SQLString& optionName, const void* optionValue) {
	return nullptr;
}

sql::Connection* AgentConnection::setClientOption(const sql::SQLString& optionName, const sql::SQLString& optionValue) {
	return nullptr;
}

void AgentConnection::setHoldability(int holdability) {
	conn_->setHoldability(holdability);
}

void AgentConnection::setReadOnly(bool readOnly) {
	conn_->setReadOnly(readOnly);
}

sql::Savepoint* AgentConnection::setSavepoint() {
	return conn_->setSavepoint();
}

sql::Savepoint* AgentConnection::setSavepoint(const sql::SQLString& name) {
	return conn_->setSavepoint(name);
}

void AgentConnection::setTransactionIsolation(sql::enum_transaction_isolation level) {
	conn_->setTransactionIsolation(level);
}